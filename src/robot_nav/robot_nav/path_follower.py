#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry, Path
from geometry_msgs.msg import Twist
import tf2_ros
import tf_transformations
from geometry_msgs.msg import TransformStamped
import math

class PathFollowerStatic(Node):
    def __init__(self):
        super().__init__('path_follower_static')

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.scan_sub = self.create_subscription(LaserScan, '/base_scan', self.scan_callback, 10)
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.plan_sub = self.create_subscription(Path, '/plan', self.plan_callback, 10)

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.front = float('inf')
        self.actual_speed = 0.0
        self.path = []
        self.current_target_index = 0
        self.plan_activo = False
        self.attempts = 0

        self.create_timer(0.1, self.loop)

    def scan_callback(self, msg):
        num = len(msg.ranges)
        self.front = min(msg.ranges[num//2 - 10:num//2 + 10])

    def odom_callback(self, msg):
        self.actual_speed = msg.twist.twist.linear.x

    def plan_callback(self, msg):
        self.get_logger().info(f"📥 Ruta recibida con {len(msg.poses)} puntos")
        self.path = msg.poses
        self.current_target_index = 0
        self.plan_activo = True
        self.attempts = 0

    def loop(self):
        if self.plan_activo:
            self.follow_path()

    def follow_path(self):
        if not self.path or self.current_target_index >= len(self.path):
            self.get_logger().info("✅ Ruta completada")
            self.plan_activo = False
            return

        try:
            trans: TransformStamped = self.tf_buffer.lookup_transform(
                'map', 'base_link', rclpy.time.Time(),
                timeout=rclpy.duration.Duration(seconds=1)
            )

            x = trans.transform.translation.x
            y = trans.transform.translation.y
            q = trans.transform.rotation
            _, _, yaw = tf_transformations.euler_from_quaternion([q.x, q.y, q.z, q.w])

            # Saltar puntos demasiado cercanos
            while self.current_target_index < len(self.path):
                target = self.path[self.current_target_index].pose.position
                dx = target.x - x
                dy = target.y - y
                if math.hypot(dx, dy) > 0.15:
                    break
                self.current_target_index += 1

            if self.current_target_index >= len(self.path):
                self.get_logger().info("✅ Todos los puntos alcanzados")
                self.plan_activo = False
                return

            # Cálculo de dirección y control
            target = self.path[self.current_target_index].pose.position
            dx = target.x - x
            dy = target.y - y
            angle_to_target = math.atan2(dy, dx)
            angle_diff = math.atan2(math.sin(angle_to_target - yaw), math.cos(angle_to_target - yaw))

            twist = Twist()

            # 🚧 Evitar colisión
            if self.front < 0.5:
                self.get_logger().warn("🚧 Obstáculo detectado. Deteniéndose.")
                twist.linear.x = 0.0
                twist.angular.z = 0.0
            else:
                if abs(angle_diff) > 0.4:
                    twist.linear.x = 0.0
                    twist.angular.z = 1.0 * angle_diff
                else:
                    twist.linear.x = 0.2
                    twist.angular.z = 1.0 * angle_diff

            self.cmd_pub.publish(twist)

            # Evitar estancamiento
            self.attempts += 1
            if self.attempts > 30:
                self.get_logger().warn("⏭️ Saltando punto por bloqueo")
                self.current_target_index += 1
                self.attempts = 0

        except Exception as e:
            self.get_logger().warn(f"⚠️ TF no disponible: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = PathFollowerStatic()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
