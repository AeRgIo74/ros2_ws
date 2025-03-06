import rclpy
from rclpy.node import Node
from ejercicio_tres_interface.srv import Midpoint

class MidpointServer(Node):
    def __init__(self):
        super().__init__('midpoint_server')
        self.srv = self.create_service(Midpoint, 'midpoint_service', self.handle_request)

    def handle_request(self, request, response):
        # Muestra las coordenadas recibidas
        self.get_logger().info(f'Coordenadas recibidas: ({request.x1}, {request.y1}) y ({request.x2}, {request.y2})')

        # Calcula el punto medio
        xm = (request.x1 + request.x2) / 2
        ym = (request.y1 + request.y2) / 2

        # Rellena la respuesta con el punto medio
        response.xm = xm
        response.ym = ym

        # Muestra el punto medio calculado
        self.get_logger().info(f'Punto medio calculado: ({xm}, {ym})')

        return response

def main(args=None):
    rclpy.init(args=args)

    server = MidpointServer()

    # Mantiene el servidor en funcionamiento
    rclpy.spin(server)

    # Destruye el nodo después de que termine
    server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
