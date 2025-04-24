from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os

from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    lol_nav_dir = get_package_share_directory('lol_nav')
    stage_world_path = os.path.join(
        get_package_share_directory('stage_worlds'), 'worlds', 'lol_map1.world'  # ← corregido aquí
    )

    return LaunchDescription([
        # Transformador fijo entre odom y base_link (necesario para Nav2)
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_tf_pub',
            arguments=['0', '0', '0', '0', '0', '0', 'odom', 'base_link'],
            output='screen'
        ),

        # Lanzar Stage con el mundo personalizado
        Node(
            package='stage_ros2',
            executable='stage_ros2',
            name='stage',
            parameters=[{'use_sim_time': True}],
            arguments=[stage_world_path],
            output='screen'
        ),

        # Lanzar slam_toolbox para mapeo
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(get_package_share_directory('slam_toolbox'), 'launch', 'online_async_launch.py')
            ]),
            launch_arguments={'use_sim_time': 'true'}.items()
        ),

        # Lanzar Nav2 (Navigation)
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(get_package_share_directory('nav2_bringup'), 'launch', 'navigation_launch.py')
            ]),
            launch_arguments={
                'use_sim_time': 'true',
                'autostart': 'true',
            }.items()
        ),

        # Lanzar RViz con config personalizada
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', os.path.join(lol_nav_dir, 'rviz', 'nav2_config.rviz')],
            output='screen'
        )
    ])
