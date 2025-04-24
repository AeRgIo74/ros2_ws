# demo_launch.py
import os
from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Ejecutar el demo de MoveIt
        ExecuteProcess(
            cmd=['ros2', 'launch', 'moveit2_tutorials', 'demo.launch.py'],
            output='screen'
        ),
        
        # Ejecutar el nodo panda_ik_menu
        Node(
            package='p2_ej2',
            executable='panda_ik_menu',
            output='screen'
        ),
    ])
