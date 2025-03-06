import rclpy
from rclpy.node import Node
from ejercicio_tres.srv import Midpoint

class MidpointServer(Node):
    def __init__(self):
        super().__init__('midpoint_server')
        self.srv = self.create_service(Midpoint, 'calculate_midpoint', self.calculate_midpoint)

    def calculate_midpoint(self, request, response):
        x1, y1, x2, y2 = request.x1, request.y1, request.x2, request.y2
        x_mid = (x1 + x2) / 2
        y_mid = (y1 + y2) / 2

        self.get_logger().info(f'Received coordinates: ({x1}, {y1}), ({x2}, {y2})')
        self.get_logger().info(f'Responding with midpoint: ({x_mid}, {y_mid})')

        response.x_mid = x_mid
        response.y_mid = y_mid
        return response

def main(args=None):
    rclpy.init(args=args)
    node = MidpointServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
