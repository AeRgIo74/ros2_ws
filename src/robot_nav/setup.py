from setuptools import find_packages, setup

package_name = 'robot_nav'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/bringup.launch.py']),
        ('share/' + package_name + '/rviz', ['rviz/nav2_config.rviz']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sergio',
    maintainer_email='aergio74@gmail.com',
    description='Navegación en Stage usando SLAM y visualización en RViz2',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'avoid_obstacles = robot_nav.avoid_obstacles:main',
            'path_planner = robot_nav.path_planner:main',
            'a_star_planner = robot_nav.a_star_planner:main',
            'path_follower = robot_nav.path_follower:main',
            'wavefront_planner = robot_nav.wavefront_planner:main',
            'rrt_planner = robot_nav.rrt_planner:main',

        ],
    },
)
