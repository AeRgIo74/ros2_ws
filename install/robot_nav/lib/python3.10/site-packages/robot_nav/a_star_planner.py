#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from nav_msgs.msg import OccupancyGrid, Path
from geometry_msgs.msg import PoseStamped
import numpy as np
import heapq

class AStarPlanner(Node):
    def __init__(self):
        super().__init__('a_star_planner')
        self.subscription = self.create_subscription(
            OccupancyGrid,
            '/map',
            self.map_callback,
            10
        )
        self.publisher = self.create_publisher(Path, '/plan', 10)
        self.map = None
        self.map_info = None

    def map_callback(self, msg):
        self.get_logger().info("🗺️ Recibido nuevo mapa")
        self.map_info = msg.info
        width = msg.info.width
        height = msg.info.height
        data = np.array(msg.data).reshape((height, width))
        data[data == -1] = 0    # Trata lo desconocido como libre
        data[data > 50] = 100   # Solo valores realmente peligrosos como obstáculos

        self.map = data

        # Coordenadas en metros → píxeles
        start = self.world_to_map(0.0, 0.0)
        goal = self.world_to_map(5.0, 5.0)

        path = self.a_star(start, goal)
        if path:
            self.publish_path(path)
        else:
            self.get_logger().warn("❌ No se encontró un camino")

    def world_to_map(self, x, y):
        origin = self.map_info.origin.position
        res = self.map_info.resolution
        mx = int((x - origin.x) / res)
        my = int((y - origin.y) / res)
        return (mx, my)

    def map_to_world(self, mx, my):
        origin = self.map_info.origin.position
        res = self.map_info.resolution
        x = origin.x + (mx + 0.5) * res
        y = origin.y + (my + 0.5) * res
        return (x, y)

    def a_star(self, start, goal):
        self.get_logger().info(f"🚩 A* de {start} a {goal}")
        open_set = []
        heapq.heappush(open_set, (0 + self.heuristic(start, goal), 0, start, [start]))
        visited = set()

        while open_set:
            est_total_cost, cost, current, path = heapq.heappop(open_set)

            if current == goal:
                return path

            if current in visited:
                continue
            visited.add(current)

            for dx, dy in [(-1,0), (1,0), (0,-1), (0,1)]:
                nx, ny = current[0] + dx, current[1] + dy
                if (0 <= nx < self.map.shape[1]) and (0 <= ny < self.map.shape[0]):
                    if self.map[ny, nx] < 50:  # libre
                        neighbor = (nx, ny)
                        if neighbor not in visited:
                            new_cost = cost + 1
                            priority = new_cost + self.heuristic(neighbor, goal)
                            heapq.heappush(open_set, (priority, new_cost, neighbor, path + [neighbor]))
        return None

    def heuristic(self, a, b):
        return abs(a[0] - b[0]) + abs(a[1] - b[1])  # distancia de Manhattan

    def publish_path(self, path_pixels):
        path_msg = Path()
        path_msg.header.frame_id = 'map'
        path_msg.header.stamp = self.get_clock().now().to_msg()

        for mx, my in path_pixels:
            x, y = self.map_to_world(mx, my)
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = x
            pose.pose.position.y = y
            pose.pose.orientation.w = 1.0
            path_msg.poses.append(pose)

        self.publisher.publish(path_msg)
        self.get_logger().info(f"✅ Ruta publicada con {len(path_msg.poses)} puntos")

def main(args=None):
    rclpy.init(args=args)
    node = AStarPlanner()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
