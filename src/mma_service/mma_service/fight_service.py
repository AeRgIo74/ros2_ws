import rclpy
import random 
from rclpy.node import Node
from mma_interfaces.srv import FightRequest

class FightService(Node):
    def __init__(self):
        super().__init__('fight_service')
        self.srv = self.create_service(FightRequest, 'fight', self.handle_fight_request)
        self.get_logger().info("Fight Service iniciado 🥊")

    def handle_fight_request(self, request, response):
        # Simula un resultado aleatorio
        winner = random.choice([request.fighter1, request.fighter2])
        response.result = f"¡{winner} ganó la pelea!"
        return response

def main():
    rclpy.init()
    node = FightService()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
