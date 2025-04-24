import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time

class Mover(Node):
    def __init__(self):
        super().__init__('stage_auto_mover')
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        timer_period = 0.5  # segundos
        self.timer = self.create_timer(timer_period, self.move)

    def move(self):
        msg = Twist()
        msg.linear.x = 0.3  # Velocidad hacia adelante
        msg.angular.z = 0.0  # Sin giro
        self.publisher.publish(msg)
        self.get_logger().info('Moviendo el robot automáticamente')

def main(args=None):
    rclpy.init(args=args)
    node = Mover()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
