import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

class EvitaObstaculos(Node):
    def __init__(self):
        super().__init__('evita_obstaculos')
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.lidar_sub = self.create_subscription(LaserScan, '/base_scan', self.lidar_callback, 10)
        self.timer = self.create_timer(0.1, self.mover)

        self.obstaculo_frente = False

    def lidar_callback(self, msg):
        # Detecta obstáculos al frente (e.g. en el rango de 0° ±180°)
        front_ranges = msg.ranges[len(msg.ranges)//2 - 180 : len(msg.ranges)//2 + 180]
        self.obstaculo_frente = any(dist < 0.5 for dist in front_ranges if dist > 0.0)

    def mover(self):
        twist = Twist()
        if self.obstaculo_frente:
            twist.angular.z = 0.5  # gira
        else:
            twist.linear.x = 0.2  # avanza

        self.cmd_vel_pub.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    nodo = EvitaObstaculos()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
