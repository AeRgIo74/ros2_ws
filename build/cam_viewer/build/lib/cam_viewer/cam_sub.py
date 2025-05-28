import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
import yaml
import os

class UndistortNode(Node):
    def __init__(self):
        super().__init__('undistort_node')
        self.subscription = self.create_subscription(
            Image,
            '/image_raw',  # <- Asegúrate de usar el topic correcto
            self.image_callback,
            10
        )
        self.publisher = self.create_publisher(Image, '/undistorted_image', 10)

        self.bridge = CvBridge()
        self.image_saved = False

        # Cargar calibración
        yaml_path = os.path.join('/home/sergio/ros2_ws/src/cam_viewer/calibration.yaml')
        try:
            with open(yaml_path, 'r') as file:
                data = yaml.safe_load(file)
                self.camera_matrix = np.array(data['camera_matrix'])
                self.dist_coeffs = np.array(data['dist_coeff'])
                self.get_logger().info('Parámetros de calibración cargados correctamente.')
        except Exception as e:
            self.get_logger().error(f'No se pudo cargar el archivo de calibración: {e}')
            rclpy.shutdown()

    def image_callback(self, msg):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            undistorted = cv2.undistort(frame, self.camera_matrix, self.dist_coeffs)

            # Mostrar la imagen corregida
            cv2.imshow("Undistorted Image", undistorted)
            cv2.waitKey(1)

            # Publicar la imagen corregida
            ros_image = self.bridge.cv2_to_imgmsg(undistorted, encoding='bgr8')
            self.publisher.publish(ros_image)

            # Guardar la imagen solo una vez
            if not self.image_saved:
                cv2.imwrite("undistorted_output.jpg", undistorted)
                self.image_saved = True
                self.get_logger().info("Imagen corregida guardada como undistorted_output.jpg")

        except Exception as e:
            self.get_logger().error(f"Error al procesar la imagen: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = UndistortNode()
    rclpy.spin(node)
    node.destroy_node()
    cv2.destroyAllWindows()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
