import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class SumaCuadrados(Node):
    def __init__(self):
        super().__init__('suma_cuadrados')
        self.sub_impares = self.create_subscription(Int32, '/impares', self.callback, 10)
        self.sub_pares = self.create_subscription(Int32, '/pares', self.callback, 10)
        self.publisher_ = self.create_publisher(Int32, '/suma_cuadrados', 10)
        self.suma_total = 0

    def callback(self, msg):
        self.suma_total += msg.data ** 2
        sum_msg = Int32()
        sum_msg.data = self.suma_total
        self.publisher_.publish(sum_msg)
        self.get_logger().info(f'Suma de cuadrados actualizada: {self.suma_total}')

def main():
    rclpy.init()
    node = SumaCuadrados()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
