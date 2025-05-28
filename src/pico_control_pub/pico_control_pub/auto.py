#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import time

mot_ad_izq_ad = 6
mot_ad_der_ad = 7
mot_ad_izq_at = 8
mot_ad_der_at = 9

mot_at_izq_ad = 11
mot_at_der_ad = 10
mot_at_izq_at = 12
mot_at_der_at = 13

class PicoPWMController(Node):
    def __init__(self):
        super().__init__('pwm_pub_node')
        self.pub = self.create_publisher(Int32, 'pico_pwm', 10)

    # PWM control (0 a 3)
    def send_pwm(self, pwm_index: int, duty_cycle: int):
        if not (0 <= pwm_index <= 3):
            self.get_logger().warn(f"PWM index inválido: {pwm_index}")
            return
        if not (0 <= duty_cycle <= 255):
            self.get_logger().warn(f"Duty cycle fuera de rango: {duty_cycle}")
            return

        msg = Int32()
        msg.data = pwm_index * 1000 + duty_cycle
        self.pub.publish(msg)
        self.get_logger().info(f"⚙️ PWM {pwm_index} → {duty_cycle}")

    def _send_gpio(self, gpio_pin: int, state: int):
        msg = Int32()
        msg.data = 10000 + gpio_pin * 100 + state
        self.pub.publish(msg)
        self.get_logger().info(f"🔌 GPIO {gpio_pin} → {'ON' if state else 'OFF'}")
        # -------------------- MOVIMIENTOS --------------------
    def parar_todo(self):
        self.send_pwm(0, 0)
        self.send_pwm(1, 0) 
        self.send_pwm(2, 0) 
        self.send_pwm(3, 0)   
        for pin in range(6, 14):
            self._send_gpio(pin, 0)
    def avanzar(self):
        self._send_gpio(mot_ad_izq_ad, 1)
        self._send_gpio(mot_at_izq_ad, 0)
        self.send_pwm(1, 255)    
        self._send_gpio(mot_ad_der_ad, 1) 
        self._send_gpio(mot_at_der_ad, 0) 
        self.send_pwm(3, 255)
        self._send_gpio(mot_ad_izq_at, 1)
        self._send_gpio(mot_at_izq_at, 0)
        self.send_pwm(2, 255)  
        self._send_gpio(mot_ad_der_at, 1)
        self._send_gpio(mot_at_der_at, 0)
        self.send_pwm(0, 255)

    def retroceder(self):
        self._send_gpio(mot_ad_izq_ad, 0)
        self._send_gpio(mot_at_izq_ad, 1)
        self.send_pwm(1, 255)    
        self._send_gpio(mot_ad_der_ad, 0) 
        self._send_gpio(mot_at_der_ad, 1) 
        self.send_pwm(3, 255)
        self._send_gpio(mot_ad_izq_at, 0)
        self._send_gpio(mot_at_izq_at, 1)
        self.send_pwm(2, 255)  
        self._send_gpio(mot_ad_der_at, 0)
        self._send_gpio(mot_at_der_at, 1)
        self.send_pwm(0, 255)

    def girar_izquierda(self):
        self._send_gpio(mot_ad_izq_ad, 0)
        self._send_gpio(mot_at_izq_ad, 1)
        self.send_pwm(1, 128)    
        self._send_gpio(mot_ad_der_ad, 1) 
        self._send_gpio(mot_at_der_ad, 0) 
        self.send_pwm(3, 255)
        self._send_gpio(mot_ad_izq_at, 0)
        self._send_gpio(mot_at_izq_at, 1)
        self.send_pwm(2, 128)  
        self._send_gpio(mot_ad_der_at, 1)
        self._send_gpio(mot_at_der_at, 0)
        self.send_pwm(0, 255)

    def girar_derecha(self):
        self._send_gpio(mot_ad_izq_ad, 1)
        self._send_gpio(mot_at_izq_ad, 0)
        self.send_pwm(1, 255)    
        self._send_gpio(mot_ad_der_ad, 0) 
        self._send_gpio(mot_at_der_ad, 1) 
        self.send_pwm(3, 128)
        self._send_gpio(mot_ad_izq_at, 1)
        self._send_gpio(mot_at_izq_at, 0)
        self.send_pwm(2, 255)  
        self._send_gpio(mot_ad_der_at, 0)
        self._send_gpio(mot_at_der_at, 1)
        self.send_pwm(0, 128)

def main():
    rclpy.init()
    node = PicoPWMController()


    # Mov test
    node.avanzar()
    time.sleep(1.5)
    node.girar_derecha()
    time.sleep(1.5)
    node.girar_izquierda()
    time.sleep(1.5)
    node.retroceder()
    time.sleep(1.5)
    node.parar_todo()

    rclpy.spin_once(node, timeout_sec=1)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
