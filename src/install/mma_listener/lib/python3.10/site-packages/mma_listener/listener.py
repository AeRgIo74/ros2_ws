import rclpy
from rclpy.node import Node
from mma_interfaces.msg import Fighter

class FighterListener(Node):
    def __init__(self):
        super().__init__('fighter_listener')
        self.subscription = self.create_subscription(
            Fighter,
            'fighter_info',
            self.fighter_callback,
            10
        )
        self.get_logger().info("Fighter Listener iniciado 👂")

    def fighter_callback(self, msg):
        self.get_logger().info(f"Recibido: {msg.name}, Peso: {msg.weight}kg, Estilo: {msg.style}")

def main():
    rclpy.init()
    node = FighterListener()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
