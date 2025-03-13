import rclpy
from rclpy.node import Node
from p1_ej2_interface.msg import FilteredSensor

class Nodo5(Node):
    def __init__(self):
        super().__init__('nodo_5_monitor')
        
        # Suscripción al tópico que publica el promedio
        self.create_subscription(FilteredSensor, '/filtered_sensor', self.callback_promedio, 10)
        
        self.get_logger().info('Nodo 5: Esperando valores del promedio del sensor...')

    def callback_promedio(self, msg):
        # Mostrar el valor promedio en pantalla
        self.get_logger().info(f'Promedio recibido: {msg.average_value:.2f}')

def main():
    rclpy.init()
    nodo_5 = Nodo5()
    rclpy.spin(nodo_5)
    nodo_5.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
