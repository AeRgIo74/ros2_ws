import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
import numpy as np

class FKPublisher(Node):
    def __init__(self):
        super().__init__('fk_fixed_publisher')

        self.pub = self.create_publisher(Point, '/fk_position', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

        # Longitudes de eslabones
        self.l1 = 0.5
        self.l2 = self.l3 = self.l4 = 0.3

        # Ángulos definidos directamente (en radianes)
        self.q = [0.0, 0.4, 0.2, -0.1]  # [q0, q1, q2, q3]

    def timer_callback(self):
        q0, q1, q2, q3 = self.q

        # Cinemática directa (misma fórmula que antes)
        x = self.l2 * np.cos(q0) * np.cos(q1) \
            + self.l4 * np.cos(q3) * (np.cos(q0)*np.cos(q1)*np.cos(q2) - np.cos(q0)*np.sin(q1)*np.sin(q2)) \
            - self.l4 * np.sin(q3) * (np.cos(q0)*np.cos(q1)*np.sin(q2) + np.cos(q0)*np.cos(q2)*np.sin(q1)) \
            + self.l3 * (np.cos(q0)*np.cos(q1)*np.cos(q2) - np.cos(q0)*np.sin(q1)*np.sin(q2))

        y = self.l2 * np.cos(q1) * np.sin(q0) \
            - self.l4 * np.sin(q3) * (np.cos(q1)*np.sin(q0)*np.sin(q2) + np.cos(q2)*np.sin(q0)*np.sin(q1)) \
            - self.l4 * np.cos(q3) * (np.sin(q0)*np.sin(q1)*np.sin(q2) - np.cos(q1)*np.cos(q2)*np.sin(q0)) \
            + self.l3 * (np.cos(q1)*np.cos(q2)*np.sin(q0) - np.sin(q0)*np.sin(q1)*np.sin(q2))

        z = self.l1 + self.l2 * np.sin(q1) \
            + self.l4 * np.cos(q3) * (np.cos(q1)*np.sin(q2) + np.cos(q2)*np.sin(q1)) \
            + self.l4 * np.sin(q3) * (np.cos(q1)*np.cos(q2) - np.sin(q1)*np.sin(q2)) \
            + self.l3 * (np.cos(q1)*np.sin(q2) + np.cos(q2)*np.sin(q1))

        # Publicar mensaje Point
        msg = Point()
        msg.x = float(x)
        msg.y = float(y)
        msg.z = float(z)
        self.pub.publish(msg)

        self.get_logger().info(f"FK Published → x={x:.3f}, y={y:.3f}, z={z:.3f}")

def main():
    rclpy.init()
    node = FKPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
