from setuptools import find_packages, setup

package_name = 'robot_autonomo'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sergio',
    maintainer_email='aergio74@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'evita_obstaculos = robot_autonomo.nodo_evitar_obstaculos:main',
            'evita_obstaculos2 = robot_autonomo.evitar_obstaculos:main',
        ],
    },
)
