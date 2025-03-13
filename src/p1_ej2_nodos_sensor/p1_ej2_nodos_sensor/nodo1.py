import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import random

class SensorNode(Node):
    def __init__(self, sensor_id):
        super().__init__(f"sensor_{sensor_id}")
        self.publisher_ = self.create_publisher(Float64, f"sensor_{sensor_id}", 10)
        self.timer = self.create_timer(1.0, self.timer_callback)  # Publica cada 1 segundo

    def timer_callback(self):
        value = random.uniform(0.0, 10.0)  # Genera un valor aleatorio entre 0 y 10
        msg = Float64()
        msg.data = value
        self.publisher_.publish(msg)
        self.get_logger().info(f"Sensor {self.get_name()}: {value:.2f} publicado.")

def main(args=None):
    rclpy.init(args=args)
    sensor_node = SensorNode(1)  # Puedes darle un ID único
    try:
        rclpy.spin(sensor_node)
    except KeyboardInterrupt:
        pass
    finally:
        sensor_node.destroy_node()

    rclpy.shutdown()

if __name__ == "__main__":
    main()
