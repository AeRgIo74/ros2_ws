from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    robot_nav_dir = get_package_share_directory('robot_nav')
    stage_worlds_dir = get_package_share_directory('stage_worlds')

    world_path = os.path.join(stage_worlds_dir, 'worlds', 'lol_map1.world')
    rviz_config = os.path.join(robot_nav_dir, 'rviz', 'nav2_config.rviz')

    return LaunchDescription([
        # Lanzar Stage con el mundo
        Node(
            package='stage_ros2',
            executable='stage_ros2',
            name='stage',
            output='screen',
            arguments=[world_path],
            parameters=[{'use_sim_time': True,
                        'world_file': world_path}]
        ),
        # # Nodo de planificación *
        # Node(
        #     package='robot_nav',
        #     executable='wavefront_planner',
        #     name='wavefront_planner',
        #     output='screen',
        #     parameters=[{'use_sim_time': True}]
        # ),
        # Nodo de seguimiento de trayectoria
        Node(
            package='robot_nav',
            executable='path_follower',
            name='path_follower',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ),

        # Lanzar SLAM Toolbox (versión sincronizada + parámetros explícitos)
        Node(
            package='slam_toolbox',
            executable='sync_slam_toolbox_node',
            name='slam_toolbox',
            output='screen',
            parameters=[{
                'use_sim_time': True,
                'odom_frame': 'odom',
                'base_frame': 'base_link',
                'scan_topic': '/base_scan'
            }]
        ),

         # Nodo de evasión de obstáculos
        # Node(
        #     package='robot_nav',
        #     executable='avoid_obstacles',
        #     name='avoid_obstacles',
        #     output='screen',
        #     parameters=[{'use_sim_time': True}]
        # ), 

        # Transformación estática map → odom
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_tf_map_odom',
            arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom'],
            output='screen'
        ),

        # Lanzar RViz con configuración personalizada
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config],
            output='screen'
        )
    ])
