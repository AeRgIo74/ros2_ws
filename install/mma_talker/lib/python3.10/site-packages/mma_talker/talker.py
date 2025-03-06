import rclpy
from rclpy.node import Node
from mma_interfaces.msg import Fighter
import random

class FighterTalker(Node):
    def __init__(self):
        super().__init__('fighter_talker')
        self.publisher_ = self.create_publisher(Fighter, 'fighter_info', 10)
        self.timer = self.create_timer(2.0, self.publish_fighter_info)
        self.get_logger().info("Fighter Talker iniciado ��")

    def publish_fighter_info(self):
        msg = Fighter()
        msg.name = random.choice(['Conor McGregor', 'Khabib Nurmagomedov', 'Israel Adesanya'])
        msg.weight = float(random.choice([70, 85, 95]))  # Peso en kg
        msg.style = random.choice(['Striker', 'Wrestler', 'BJJ', 'Muay Thai'])
        self.publisher_.publish(msg)
        self.get_logger().info(f'📢 Publicado: {msg.name}, Peso: {msg.weight}kg, Estilo: {msg.style}')

def main():
    rclpy.init()
    node = FighterTalker()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
