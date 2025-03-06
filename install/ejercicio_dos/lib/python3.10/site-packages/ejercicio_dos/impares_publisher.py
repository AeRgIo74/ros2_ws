import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class ImparesPublisher(Node):
    def __init__(self):
        super().__init__('impares_publisher')
        self.publisher_ = self.create_publisher(Int32, '/impares', 10)
        self.timer = self.create_timer(1.0, self.publish_number)
        self.num = 1  # Primer número impar

    def publish_number(self):
        msg = Int32()
        msg.data = self.num
        self.publisher_.publish(msg)
        self.get_logger().info(f'Impar publicado: {self.num}')
        self.num += 2  # Siguiente número impar

def main():
    rclpy.init()
    node = ImparesPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
