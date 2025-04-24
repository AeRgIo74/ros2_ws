#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from nav_msgs.msg import OccupancyGrid, Path
from geometry_msgs.msg import PoseStamped
import numpy as np
from collections import deque

class WavefrontPlanner(Node):
    def __init__(self):
        super().__init__('wavefront_planner')
        self.subscription = self.create_subscription(OccupancyGrid, '/map', self.map_callback, 10)
        self.publisher = self.create_publisher(Path, '/plan', 10)
        self.map = None
        self.map_info = None

    def map_callback(self, msg):
        self.get_logger().info("🗺️ Mapa recibido")
        self.map_info = msg.info
        width = msg.info.width
        height = msg.info.height
        data = np.array(msg.data).reshape((height, width))
        data[data == -1] = 0  # trata desconocido como libre para esta simulación
        data[data > 50] = 100
        data[data <= 50] = 0
        self.map = data

        # Coordenadas en metros del robot y del objetivo visual
        start = self.world_to_map(-6.84, -6.64)
        goal_centro = self.world_to_map(2.68, 2.57)

        gx, gy = goal_centro
        goal = None

        # 🔍 Buscar en anillos de mayor radio hasta encontrar una celda libre
        for radius in range(1, 6):
            for dx in range(-radius, radius + 1):
                for dy in range(-radius, radius + 1):
                    nx, ny = gx + dx, gy + dy
                    if 0 <= nx < width and 0 <= ny < height:
                        if self.map[ny, nx] == 0:
                            goal = (nx, ny)
                            self.get_logger().info(f"✅ Objetivo ajustado a celda libre: {goal}")
                            break
                if goal:
                    break
            if goal:
                break

        if not goal:
            self.get_logger().error("🚫 No se encontró ninguna celda libre cerca del objetivo")
            return

        path = self.wavefront(start, goal)
        if path:
            self.publish_path(path)
        else:
            self.get_logger().warn("❌ No se encontró un camino con Wavefront")

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

    def wavefront(self, start, goal):
        height, width = self.map.shape
        wave = np.full((height, width), -1)
        queue = deque()
        gx, gy = goal

        wave[gy, gx] = 0
        queue.append((gx, gy))

        directions = [(-1,0),(1,0),(0,-1),(0,1)]

        while queue:
            x, y = queue.popleft()
            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                if 0 <= nx < width and 0 <= ny < height:
                    if self.map[ny, nx] == 0 and wave[ny, nx] == -1:
                        wave[ny, nx] = wave[y, x] + 1
                        queue.append((nx, ny))

        sx, sy = start
        if wave[sy, sx] == -1:
            self.get_logger().warn("🚫 No se alcanzó el inicio desde el objetivo")
            return None

        path = [(sx, sy)]
        cx, cy = sx, sy
        while wave[cy, cx] != 0:
            for dx, dy in directions:
                nx, ny = cx + dx, cy + dy
                if 0 <= nx < width and 0 <= ny < height:
                    if wave[ny, nx] == wave[cy, cx] - 1:
                        path.append((nx, ny))
                        cx, cy = nx, ny
                        break

        return path[::-1]

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
    node = WavefrontPlanner()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
