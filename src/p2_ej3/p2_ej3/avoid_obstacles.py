#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from nav_msgs.msg import OccupancyGrid
from tf2_ros import Buffer, TransformListener
import math
import cv2
import numpy as np
import os

class AvoidObstaclesNode(Node):
    def __init__(self):
        super().__init__('avoid_obstacles')

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.scan_sub = self.create_subscription(LaserScan, '/base_scan', self.scan_callback, 10)
        self.map_sub = self.create_subscription(OccupancyGrid, '/map', self.map_callback, 10)

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.ranges = []
        self.last_position = None
        self.last_check_time = self.get_clock().now().seconds_nanoseconds()[0]

        self.timer = self.create_timer(0.2, self.control_loop)

        self.map_folder = '/home/sergio/ros2_ws/src/p2_ej3/mapas_guardados'
        os.makedirs(self.map_folder, exist_ok=True)
        self.map_path_png = os.path.join(self.map_folder, 'mapa.png')
        self.map_path_pgm = os.path.join(self.map_folder, 'mapa.pgm')
        self.map_path_yaml = os.path.join(self.map_folder, 'mapa.yaml')

    def scan_callback(self, msg):
        self.ranges = list(msg.ranges)

    def get_robot_position(self):
        try:
            trans = self.tf_buffer.lookup_transform('odom', 'base_link', rclpy.time.Time())
            return (trans.transform.translation.x, trans.transform.translation.y)
        except Exception as e:
            self.get_logger().warn(f"TF error: {e}")
            return None

    def map_callback(self, msg):
        data = np.array(msg.data, dtype=np.int8).reshape((msg.info.height, msg.info.width))
        img = np.zeros_like(data, dtype=np.uint8)
        img[data == 0] = 254
        img[data == 100] = 0
        img[data == -1] = 205

        img = cv2.flip(img, 0)

        cv2.imwrite(self.map_path_png, img)
        cv2.imwrite(self.map_path_pgm, img)

        with open(self.map_path_yaml, 'w') as f:
            f.write(f"image: mapa.pgm\n")
            f.write(f"resolution: {msg.info.resolution}\n")
            f.write(f"origin: [{msg.info.origin.position.x}, {msg.info.origin.position.y}, 0.0]\n")
            f.write(f"negate: 0\noccupied_thresh: 0.65\nfree_thresh: 0.196\n")

        self.get_logger().info(f"🗺️ Mapa actualizado: mapa.pgm / mapa.png / mapa.yaml")

    def control_loop(self):
        twist = Twist()

        if not self.ranges:
            return

        num = len(self.ranges)
        center = num // 2
        margin = 0.33
        window = int(center * margin)

        zona_frontal = self.ranges[center - window:center + window]
        min_front = min(zona_frontal)

        zona_derecha = self.ranges[center - 70:center - 30]
        min_right = min(zona_derecha)

        safe_front = 0.4
        target_dist_right = 0.5
        Kp = 1.0  # Ganancia proporcional para suavizar el giro

        current_time = self.get_clock().now().seconds_nanoseconds()[0]
        current_pos = self.get_robot_position()

        robot_stuck = False
        if current_pos and self.last_position:
            dx = current_pos[0] - self.last_position[0]
            dy = current_pos[1] - self.last_position[1]
            dist = math.sqrt(dx**2 + dy**2)
            if dist < 0.02 and (current_time - self.last_check_time) > 2:
                robot_stuck = True
                self.get_logger().warn("🚨 Robot parece atascado, girando para escapar")

        if (current_time - self.last_check_time) > 2:
            self.last_position = current_pos
            self.last_check_time = current_time

        if min_front > safe_front and not robot_stuck:
            twist.linear.x = 0.1  # velocidad lineal baja para evitar errores SLAM
            error = target_dist_right - min_right
            twist.angular.z = error * Kp
        else:
            twist.linear.x = 0.0
            twist.angular.z = 0.2
            self.get_logger().info("🧱 Obstáculo frontal real, girando")

        self.cmd_pub.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    node = AvoidObstaclesNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
