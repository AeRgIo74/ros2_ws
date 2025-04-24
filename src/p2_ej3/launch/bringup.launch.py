from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    robot_nav_dir = get_package_share_directory('p2_ej3')
    stage_worlds_dir = get_package_share_directory('stage_worlds')

    world_path = os.path.join(stage_worlds_dir, 'worlds', 'mapa_parcial.world')
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
            executable='async_slam_toolbox_node',
            name='slam_toolbox',
            output='screen',
            parameters=[{
                'use_sim_time': True,
                'odom_frame': 'odom',
                'base_frame': 'base_link',
                'scan_topic': '/base_scan',
                'map_update_interval': 1.0,
                'max_laser_range': 5.0,
                'minimum_time_interval': 0.2,
                'transform_publish_period': 0.05,
                'use_pose_extrapolator': True,
                'interpolate_odometry': True

            }]
        ),

         # Nodo de evasión de obstáculos
        Node(
            package='p2_ej3',
            executable='avoid_obstacles',
            name='avoid_obstacles',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ), 

        # Transformación estática map → odom
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_tf_map_odom',
            arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom'],
            output='screen'
        ),
        # Transformación estática base_link → laser
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_tf_base_laser',
            arguments=['0.15', '0', '0', '0', '0', '0', 'base_link', 'laser_fixed'],
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
