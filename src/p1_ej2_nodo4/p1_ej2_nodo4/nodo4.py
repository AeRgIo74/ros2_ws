import rclpy
from rclpy.node import Node
from p1_ej2_interface.msg import FilteredSensor
from std_msgs.msg import Float64
from collections import deque

class Nodo4(Node):
    def __init__(self):
        super().__init__('nodo_4_promedio')
        
        # Cola para almacenar los valores de los sensores
        self.valores_sensor = deque(maxlen=10)  # Mantiene los últimos 10 valores
        self.publisher_ = self.create_publisher(FilteredSensor, '/filtered_sensor', 10)
        
        # Suscripciones a los nodos anteriores (suponiendo que son Float64)
        self.create_subscription(Float64, 'sensor_1', self.callback_sensor, 10)
        self.create_subscription(Float64, 'sensor_2', self.callback_sensor, 10)
        self.create_subscription(Float64, 'sensor_3', self.callback_sensor, 10)
        
        self.get_logger().info('Nodo 4: Esperando valores para calcular el promedio...')
        
    def callback_sensor(self, msg):
        # Agregar el nuevo valor recibido a la cola
        self.valores_sensor.append(msg.data)
        
        # Si tenemos suficientes valores para calcular el promedio
        if len(self.valores_sensor) > 0:
            promedio = sum(self.valores_sensor) / len(self.valores_sensor)
            
            # Publicar el promedio
            filtered_msg = FilteredSensor()
            filtered_msg.average_value = promedio
            #filtered_msg.timestamp = self.get_clock().now().to_msg()
            self.publisher_.publish(filtered_msg)
            self.get_logger().info(f'Publicando promedio: {promedio}')

def main():
    rclpy.init()
    nodo_4 = Nodo4()
    rclpy.spin(nodo_4)
    nodo_4.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
