#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class AutoMover(Node):
    def __init__(self):
        super().__init__('auto_mover')
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.5, self.move_robot)
        self.get_logger().info('AutoMover started.')

    def move_robot(self):
        msg = Twist()
        msg.linear.x = 0.2  # velocidad hacia adelante
        msg.angular.z = 0.2  # girando suavemente
        self.publisher.publish(msg)
        self.get_logger().info(f'Moviendo: v={msg.linear.x}, w={msg.angular.z}')

def main(args=None):
    rclpy.init(args=args)
    node = AutoMover()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
