from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
import rclpy
from rclpy.node import Node
import math

class ObstacleAvoider(Node):
    def __init__(self):
        super().__init__('obstacle_avoider')
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.subscriber = self.create_subscription(LaserScan, '/base_scan', self.lidar_callback, 10)
        self.get_logger().info("Obstacle avoidance node has started.")
        self.last_turn_direction = None  # Para almacenar la última dirección de giro

    def lidar_callback(self, msg: LaserScan):
        def safe_min(data):
            clean = [d for d in data if not math.isinf(d) and not math.isnan(d)]
            return min(clean) if clean else msg.range_max

        # Ángulos del LIDAR
        ranges = msg.ranges
        front = safe_min(ranges[0:20] + ranges[-20:])
        left = safe_min(ranges[60:100])
        right = safe_min(ranges[260:300])
        back = safe_min(ranges[140:220])

        cmd = Twist()

        # Ampliar umbral de seguridad
        danger_distance = 1  # Aumenta el umbral de 0.6 a 1.0

        # Si el robot está libre de obstáculos al frente
        if front > danger_distance:
            # Si hay un obstáculo a la izquierda y no hay a la derecha, gira a la derecha
            if left < danger_distance and right > danger_distance:
                self.get_logger().info("Obstáculo a la izquierda. Girando a la derecha.")
                cmd.angular.z = -0.5
                self.last_turn_direction = "right"
            # Si hay un obstáculo a la derecha y no hay a la izquierda, gira a la izquierda
            elif right < danger_distance and left > danger_distance:
                self.get_logger().info("Obstáculo a la derecha. Girando a la izquierda.")
                cmd.angular.z = 0.5
                self.last_turn_direction = "left"
            # Si no hay obstáculos, sigue avanzando
            else:
                self.get_logger().info("Camino libre. Avanzando.")
                cmd.linear.x = 0.5

        # Si hay un obstáculo al frente, gira en una dirección libre
        elif front < danger_distance:
            # Si ya giró antes hacia la derecha, continúa en esa dirección
            if self.last_turn_direction == "right":
                self.get_logger().info("Obstáculo al frente. Continuando giro a la derecha.")
                cmd.angular.z = -0.5
            # Si ya giró antes hacia la izquierda, continúa en esa dirección
            elif self.last_turn_direction == "left":
                self.get_logger().info("Obstáculo al frente. Continuando giro a la izquierda.")
                cmd.angular.z = 0.5
            # Si no ha girado antes, elige una dirección basada en las diagonales
            else:
                if left > right:
                    self.get_logger().info("Obstáculo al frente. Girando a la izquierda.")
                    cmd.angular.z = 0.5
                    self.last_turn_direction = "left"
                else:
                    self.get_logger().info("Obstáculo al frente. Girando a la derecha.")
                    cmd.angular.z = -0.5
                    self.last_turn_direction = "right"

        # Si hay un obstáculo a la izquierda, gira a la derecha
        elif left < danger_distance:
            self.get_logger().info("Obstáculo a la izquierda. Girando a la derecha.")
            cmd.angular.z = -0.5
            self.last_turn_direction = "right"

        # Si hay un obstáculo a la derecha, gira a la izquierda
        elif right < danger_distance:
            self.get_logger().info("Obstáculo a la derecha. Girando a la izquierda.")
            cmd.angular.z = 0.5
            self.last_turn_direction = "left"

        # Si hay un obstáculo atrás, retrocede
        elif back < danger_distance:
            self.get_logger().info("Obstáculo atrás. Retrocediendo.")
            cmd.linear.x = -0.2
            cmd.angular.z = 0.5  # Gira mientras retrocede
        # Si no hay obstáculos en ninguna dirección, sigue avanzando
        else:
            self.get_logger().info("Camino libre. Avanzando.")
            cmd.linear.x = 0.5

        self.publisher.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = ObstacleAvoider()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
