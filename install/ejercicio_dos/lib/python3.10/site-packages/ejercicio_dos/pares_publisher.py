import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class ParesPublisher(Node):
    def __init__(self):
        super().__init__('pares_publisher')
        self.publisher_ = self.create_publisher(Int32, '/pares', 10)
        self.timer = self.create_timer(1.0, self.publish_number)
        self.num = 2  # Primer número par

    def publish_number(self):
        msg = Int32()
        msg.data = self.num
        self.publisher_.publish(msg)
        self.get_logger().info(f'Par publicado: {self.num}')
        self.num += 2  # Siguiente número par

def main():
    rclpy.init()
    node = ParesPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
