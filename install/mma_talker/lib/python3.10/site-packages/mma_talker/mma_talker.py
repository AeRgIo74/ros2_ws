import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import random

class MmaTalker(Node):
    def __init__(self):
        super().__init__('mma_talker')
        self.publisher_ = self.create_publisher(String, 'mma_words', 10)
        self.timer = self.create_timer(1.0, self.publish_random_word)
        self.words = [
            "Knockout", "Takedown", "Submission", "Jab", "Uppercut", "Triangle Choke",
            "Armbar", "Ground and Pound", "Muay Thai", "Grappling", "Leg Kick", "Spinning Backfist"
        ]
        self.get_logger().info("MMA Talker iniciado 🚀")

    def publish_random_word(self):
        msg = String()
        msg.data = random.choice(self.words)
        self.publisher_.publish(msg)
        self.get_logger().info(f'📢 Publicado: {msg.data}')

def main():
    rclpy.init()
    node = MmaTalker()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
