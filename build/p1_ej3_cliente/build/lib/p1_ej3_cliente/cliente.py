import rclpy
from rclpy.node import Node
from p1_ej3_interface.srv import Angulos
import numpy as np

class ClienteCinematica(Node):
    def __init__(self):
        super().__init__('cliente_cinematica')
        self.cli = self.create_client(Angulos, '/calcular_cinematica')
        
        while not self.cli.wait_for_service(timeout_sec=3.0):
            self.get_logger().info('Esperando servicio /calcular_cinematica...')
        
        self.enviar_angulos()

    def enviar_angulos(self):
        configuraciones = [
            [0, 0, 0],          # Configuración 1
            [20, 45, 10],       # Configuración 2
            [10, -30, 25]       # Configuración 3
        ]

        resultados = []  # Para almacenar las respuestas
        
        for i, config in enumerate(configuraciones):
            request = Angulos.Request()
            request.theta1 = float(90)
            request.theta2 = float(2)
            request.theta3 = float(3)
            request.theta4 = float(45)

            self.get_logger().info(f'Enviando Configuración {i+1}: {config} grados')
            
            future = self.cli.call_async(request)
            rclpy.spin_until_future_complete(self, future)
            
            if future.result():
                respuesta = future.result()
                resultados.append([respuesta.x, respuesta.y, respuesta.z, respuesta.roll, respuesta.pitch, respuesta.yaw])
                self.get_logger().info(f'Respuesta: {respuesta}')
            else:
                self.get_logger().error('Error al llamar al servicio')

        self.get_logger().info(f'Resultados almacenados: {resultados}')

def main():
    rclpy.init()
    cliente = ClienteCinematica()
    cliente.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
