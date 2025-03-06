import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8

class AverageCalculator(Node):
    def __init__(self):
        super().__init__('average_calculator')
        self.subscription = self.create_subscription(Int8, '/sum', self.listener_callback, 10)
        self.count = 0
        self.total_sum = 0
        self.get_logger().info("Nodo 3 (Promedio) iniciado ✅")

    def listener_callback(self, msg):
        self.count += 1
        self.total_sum = msg.data
        average = self.total_sum / self.count if self.count > 0 else 0
        self.get_logger().info(f"Promedio en tiempo real: {average:.2f}")

def main(args=None):
    rclpy.init(args=args)
    node = AverageCalculator()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
