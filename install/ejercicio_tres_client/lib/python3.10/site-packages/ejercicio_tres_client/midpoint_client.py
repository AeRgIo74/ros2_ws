import rclpy
import random
from rclpy.node import Node
from ejercicio_tres_interface.srv import Midpoint

class MidpointClient(Node):
    def __init__(self):
        super().__init__('midpoint_client')
        self.client = self.create_client(Midpoint, 'midpoint_service')
        
        # Espera hasta que el servidor esté disponible
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('El servicio no está disponible, esperando...')
        
        # Crea un temporizador para enviar las coordenadas cada 3 segundos
        self.timer = self.create_timer(3.0, self.send_random_coordinates)

    def send_random_coordinates(self):
        # Genera números aleatorios para las coordenadas
        x1 = random.uniform(0, 10)  # Genera un número aleatorio entre 0 y 10
        y1 = random.uniform(0, 10)
        x2 = random.uniform(0, 10)
        y2 = random.uniform(0, 10)

        # Muestra las coordenadas generadas
        self.get_logger().info(f"Coordenadas generadas: ({x1}, {y1}) y ({x2}, {y2})")

        # Crea un objeto de solicitud con los valores aleatorios
        request = Midpoint.Request()
        request.x1 = x1
        request.y1 = y1
        request.x2 = x2
        request.y2 = y2

        # Llama al servicio y espera la respuesta
        self.future = self.client.call_async(request)
        self.future.add_done_callback(self.callback)

    def callback(self, future):
        try:
            # Cuando el servicio responda, se llamará esta función
            response = future.result()
            self.get_logger().info(f"El punto medio es: ({response.xm}, {response.ym})")
        except Exception as e:
            self.get_logger().error(f'Error al llamar el servicio: {e}')

def main(args=None):
    rclpy.init(args=args)

    client = MidpointClient()

    # Ejecución hasta que se complete
    rclpy.spin(client)

    # Destruye el cliente después de que se complete
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
