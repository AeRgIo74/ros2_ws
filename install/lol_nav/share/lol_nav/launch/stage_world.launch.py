from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    stage_worlds_dir = get_package_share_directory('stage_worlds')
    world_path = os.path.join(stage_worlds_dir, 'worlds', 'lol_map1.world')

    return LaunchDescription([
        Node(
            package='stage_ros2',
            executable='stageros',
            name='stageros',
            output='screen',
            parameters=[{'use_sim_time': True}],
            arguments=[world_path]
        )
    ])
