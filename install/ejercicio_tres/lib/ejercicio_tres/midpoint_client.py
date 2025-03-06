import sys
import rclpy
from rclpy.node import Node
from ejercicio_tres.srv import Midpoint

class MidpointClient(Node):
    def __init__(self):
        super().__init__('midpoint_client')
        self.client = self.create_client(Midpoint, 'calculate_midpoint')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.request = Midpoint.Request()

    def send_request(self, x1, y1, x2, y2):
        self.request.x1 = x1
        self.request.y1 = y1
        self.request.x2 = x2
        self.request.y2 = y2

        self.get_logger().info(f'Sending coordinates: ({x1}, {y1}), ({x2}, {y2})')
        future = self.client.call_async(self.request)
        future.add_done_callback(self.callback)

    def callback(self, future):
        response = future.result()
        self.get_logger().info(f'Received midpoint: ({response.x_mid}, {response.y_mid})')

def main(args=None):
    rclpy.init(args=args)
    node = MidpointClient()

    x1, y1, x2, y2 = 1.0, 2.0, 3.0, 4.0  # Example coordinates
    node.send_request(x1, y1, x2, y2)

    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
