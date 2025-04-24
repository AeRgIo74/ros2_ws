#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped

class GoalSender(Node):
    def __init__(self):
        super().__init__('goal_sender')
        self.publisher = self.create_publisher(PoseStamped, '/goal_pose', 10)
        self.timer = self.create_timer(3.0, self.send_goal)

    def send_goal(self):
        goal = PoseStamped()
        goal.header.frame_id = "map"
        goal.header.stamp = self.get_clock().now().to_msg()
        goal.pose.position.x = 5.0
        goal.pose.position.y = 5.0
        goal.pose.orientation.w = 1.0
        self.publisher.publish(goal)
        self.get_logger().info('✅ Objetivo enviado: (5, 5)')

def main(args=None):
    rclpy.init(args=args)
    node = GoalSender()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
