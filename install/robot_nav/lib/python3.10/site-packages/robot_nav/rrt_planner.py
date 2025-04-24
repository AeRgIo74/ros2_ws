#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from nav_msgs.msg import OccupancyGrid, Path
from geometry_msgs.msg import PoseStamped
import numpy as np
import random
import math
import scipy.ndimage

class RRTPlanner(Node):
    def __init__(self):
        super().__init__('rrt_planner')
        self.declare_parameter('noise_area_threshold', 30)

        self.sub_map = self.create_subscription(OccupancyGrid, '/map', self.map_callback, 10)
        self.pub_path = self.create_publisher(Path, '/plan', 10)

    def map_callback(self, msg):
        self.get_logger().info("🌍 Mapa recibido")
        raw_map = np.array(msg.data).reshape((msg.info.height, msg.info.width))
        raw_map[raw_map == -1] = 100  # trata desconocido como ocupado

        # 🔧 Filtro de ruido en el mapa
        binary = (raw_map > 50).astype(np.uint8)
        labels, num = scipy.ndimage.label(binary)
        sizes = np.bincount(labels.ravel())
        threshold = self.get_parameter('noise_area_threshold').get_parameter_value().integer_value
        mask = sizes > threshold
        cleaned = mask[labels]
        self.map = np.where(cleaned, 100, 0).astype(np.int8)

        self.map_info = msg.info
        start_world = (-6.84, -6.64)
        goal_world = (2.68, 2.57)

        start = self.world_to_map(*start_world)
        goal = self.world_to_map(*goal_world)

        path = self.rrt(start, goal, max_iter=10000)
        if path:
            self.publish_path(path)
        else:
            self.get_logger().warn("❌ No se encontró una ruta con RRT")

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

    def is_free(self, x, y):
        h, w = self.map.shape
        return 0 <= x < w and 0 <= y < h and self.map[y, x] < 50

    def rrt(self, start, goal, max_iter=1000):
        tree = {start: None}
        nodes = [start]

        for _ in range(max_iter):
            rand = (random.randint(0, self.map.shape[1]-1), random.randint(0, self.map.shape[0]-1))
            nearest = min(nodes, key=lambda n: (n[0] - rand[0])**2 + (n[1] - rand[1])**2)
            direction = np.array(rand) - np.array(nearest)
            length = np.linalg.norm(direction)
            if length == 0:
                continue
            step = np.round((direction / length) * 5).astype(int)
            new = (nearest[0] + step[0], nearest[1] + step[1])

            if not self.is_free(*new):
                continue

            if not self.line_is_free(nearest, new):
                continue

            tree[new] = nearest
            nodes.append(new)

            if np.linalg.norm(np.array(new) - np.array(goal)) < 10:
                tree[goal] = new
                break

        if goal not in tree:
            return None

        path = [goal]
        while tree[path[-1]] is not None:
            path.append(tree[path[-1]])
        return path[::-1]

    def line_is_free(self, a, b):
        x0, y0 = a
        x1, y1 = b
        dx = x1 - x0
        dy = y1 - y0
        steps = max(abs(dx), abs(dy))
        for i in range(steps + 1):
            t = i / steps
            x = int(round(x0 + t * dx))
            y = int(round(y0 + t * dy))
            if not self.is_free(x, y):
                return False
        return True

    def publish_path(self, path):
        path_msg = Path()
        path_msg.header.frame_id = 'map'
        path_msg.header.stamp = self.get_clock().now().to_msg()

        for mx, my in path:
            x, y = self.map_to_world(mx, my)
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.pose.position.x = x
            pose.pose.position.y = y
            pose.pose.orientation.w = 1.0
            path_msg.poses.append(pose)

        self.pub_path.publish(path_msg)
        self.get_logger().info(f"✅ Ruta RRT publicada con {len(path_msg.poses)} puntos")

def main(args=None):
    rclpy.init(args=args)
    node = RRTPlanner()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()