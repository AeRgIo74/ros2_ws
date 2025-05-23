from setuptools import find_packages, setup

package_name = 'ejemplo_uno'

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
    maintainer_email='sergio@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'random_publicador = ejemplo_uno.random_publicador:main',
            'suma_acumulador = ejemplo_uno.suma_acumulador:main',
            'calculador = ejemplo_uno.calculador:main',
        ],
    },
)
