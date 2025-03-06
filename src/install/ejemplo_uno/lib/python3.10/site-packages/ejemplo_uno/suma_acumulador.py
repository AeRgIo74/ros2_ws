import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8

class SumAccumulator(Node):
    def __init__(self):
        super().__init__('sum_accumulator')
        self.subscription = self.create_subscription(Int8, '/random_number', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(Int8, '/sum', 10)
        self.total_sum = 0
        self.get_logger().info("Nodo 2 (Acumulador) iniciado ✅")

    def listener_callback(self, msg):
        self.total_sum += msg.data
        sum_msg = Int8()
        sum_msg.data = max(-128, min(self.total_sum, 127))
        self.publisher_.publish(sum_msg)
        self.get_logger().info(f"Suma acumulada publicada: {self.total_sum}")

def main(args=None):
    rclpy.init(args=args)
    node = SumAccumulator()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
