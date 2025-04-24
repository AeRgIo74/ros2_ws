import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Nodo fk_publisher
        Node(
            package='ejercicio1_pkg',  # El paquete que contiene el nodo fk_publisher
            executable='fk_publisher',  # Nombre del ejecutable del nodo fk_publisher
            name='inverse_kinematics',  # Nombre del nodo
            output='screen',
        ),

        # Nodo view_robot
        Node(
            package='robot_description',  # Nombre del paquete
            executable='view_robot.py',   # Nombre del ejecutable
            name='view_robot',
            output='screen'
        ),
    ])
