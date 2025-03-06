import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8
import random

class RandomNumberPublisher(Node):
    def __init__(self):
        super().__init__('random_publisher')
        self.publisher_ = self.create_publisher(Int8, '/random_number', 10)
        self.timer = self.create_timer(1.0, self.publish_random_number)  # 1 Hz
        self.get_logger().info("Nodo 1 (Generador) iniciado ✅")

    def publish_random_number(self):
        msg = Int8()
        msg.data = random.randint(-128, 127)
        self.publisher_.publish(msg)
        self.get_logger().info(f"Número aleatorio publicado: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    node = RandomNumberPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
