import rclpy
from rclpy.node import Node
from p1_ej3_interface.srv import Angulos
import random  # Para generar números aleatorios

class ServidorAngulos(Node):
    def __init__(self):
        super().__init__('servidor_angulos')
        self.srv = self.create_service(Angulos, '/calcular_angulos', self.callback_angulos)
        self.get_logger().info('✅ Servidor de ángulos listo y esperando solicitudes...')

    def callback_angulos(self, request, response):
        self.get_logger().info(f'📥 Recibido: θ1={request.theta1}°, θ2={request.theta2}°, θ3={request.theta3}°')

        # Generar valores aleatorios como respuesta
        response.x = random.uniform(-10.0, 10.0)
        response.y = random.uniform(-10.0, 10.0)
        response.z = random.uniform(-10.0, 10.0)
        response.roll = random.uniform(-180.0, 180.0)
        response.pitch = random.uniform(-180.0, 180.0)
        response.yaw = random.uniform(-180.0, 180.0)

        self.get_logger().info(f'📤 Respuesta enviada: x={response.x}, y={response.y}, z={response.z}, roll={response.roll}, pitch={response.pitch}, yaw={response.yaw}')
        return response

def main():
    rclpy.init()
    servidor = ServidorAngulos()
    rclpy.spin(servidor)  # Mantener el servidor activo
    servidor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
