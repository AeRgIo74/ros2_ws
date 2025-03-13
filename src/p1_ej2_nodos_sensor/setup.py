from setuptools import find_packages, setup

package_name = 'p1_ej2_nodos_sensor'

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
            'nodo1 = p1_ej2_nodos_sensor.nodo1:main', 
            'nodo2 = p1_ej2_nodos_sensor.nodo2:main', 
            'nodo3 = p1_ej2_nodos_sensor.nodo3:main', 
        ],
    },
)
