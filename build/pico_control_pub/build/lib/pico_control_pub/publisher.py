#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import time

class PicoPinController(Node):
    def __init__(self):
        super().__init__('pico_pin_controller')
        self.publisher_ = self.create_publisher(Int32, 'control_pins', 10)

    def send(self, tipo: int, index: int, value: int):
        msg = Int32()
        msg.data = tipo * 10000 + index * 100 + value
        self.publisher_.publish(msg)
        tipo_str = 'PWM' if tipo == 1 else 'LED'
        self.get_logger().info(f'{tipo_str} {index} -> {value}')

    def run(self):
        pwm_val = 0
        direction = 5
        last_direction = direction

        while rclpy.ok():
            # Enviar PWM a los 4 canales
            for pwm_channel in range(4):
                self.send(1, pwm_channel, pwm_val)

            # Detectar cambio de dirección
            if (pwm_val + direction > 255 or pwm_val + direction < 0) and direction != 0:
                # Cambiar dirección
                direction *= -1

                # Encender LEDs 0→7 si subiendo
                if direction > 0:
                    for i in range(8):
                        self.send(0, i, 1)
                        time.sleep(0.05)
                # Apagar LEDs 7→0 si bajando
                else:
                    for i in reversed(range(8)):
                        self.send(0, i, 0)
                        time.sleep(0.05)

            # Actualizar valor PWM
            pwm_val += direction
            pwm_val = max(0, min(255, pwm_val))  # Clampeo por seguridad
            time.sleep(0.05)

def main(args=None):
    rclpy.init(args=args)
    node = PicoPinController()

    try:
        node.run()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
