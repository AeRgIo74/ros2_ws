import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
from std_msgs.msg import Float64
import math

class InverseKinematicsNode(Node):

    def __init__(self):
        super().__init__('inverse_kinematics')
        
        # Publicadores para las articulaciones
        self.joint1_pub = self.create_publisher(Float64, '/robot/joint1_position', 10)
        self.joint2_pub = self.create_publisher(Float64, '/robot/joint2_position', 10)
        self.joint3_pub = self.create_publisher(Float64, '/robot/joint3_position', 10)
        
        # Suscriptor para recibir la posición del objetivo
        self.create_subscription(Point, 'target_position', self.target_position_callback, 10)
        
    def target_position_callback(self, msg):
        x, y, z = msg.x, msg.y, msg.z
        
        # Definición de longitudes de los segmentos
        L1 = 0.3  # Longitud del primer segmento
        L2 = 0.3  # Longitud del segundo segmento
        L3 = 0.2  # Longitud del tercer segmento
        
        # Cinemática inversa para calcular los ángulos
        r = math.sqrt(x**2 + y**2)
        phi = math.atan2(y, x)
        
        # Ángulo del primer eje
        theta1 = math.atan2(y, x)
        
        # Resolver para los otros dos ángulos
        d = (r**2 + (z-L1)**2 - L2**2) / (2 * L2)
        theta2 = math.atan2(z-L1, r)
        theta3 = math.atan2(d, r)

        # Publicar las posiciones de las articulaciones
        self.joint1_pub.publish(Float64(data=theta1))
        self.joint2_pub.publish(Float64(data=theta2))
        self.joint3_pub.publish(Float64(data=theta3))

def main(args=None):
    rclpy.init(args=args)
    node = InverseKinematicsNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
