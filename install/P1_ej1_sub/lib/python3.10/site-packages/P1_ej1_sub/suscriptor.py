import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MotorController(Node):
    def __init__(self):
        super().__init__('suscriptor')
        self.subscription = self.create_subscription(
            String,
            '/sensor_states',
            self.listener_callback,
            10)
        self.subscription  # Evita que sea eliminado por el recolector de basura

        # Tabla de estados de sensores y motores
        self.state_map = {
            '000': ('1', '1', 'Adelante'),
            '001': ('0', '1', 'Derecha'),
            '010': ('0', '0', 'Alto'),
            '011': ('0', '1', 'Derecha'),
            '100': ('1', '0', 'Izquierda'),
            '101': ('1', '1', 'Adelante'),
            '110': ('1', '0', 'Izquierda'),
            '111': ('0', '0', 'Alto'),
        }

    def listener_callback(self, msg):
        sensor_state = msg.data
        if sensor_state in self.state_map:
            mi, md, action = self.state_map[sensor_state]
            self.get_logger().info(f'Sensores: {sensor_state} → Motores: MI={mi}, MD={md}, Acción={action}')
        else:
            self.get_logger().warn(f'Estado desconocido: {sensor_state}')

def main(args=None):
    rclpy.init(args=args)
    node = MotorController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
