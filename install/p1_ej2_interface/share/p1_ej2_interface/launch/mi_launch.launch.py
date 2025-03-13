import launch
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    # Devuelve una descripción del lanzamiento con la lista de nodos
    return LaunchDescription([
        # Nodo 1: Publica un valor en el tópico '/sensor_1'
        Node(
            package='p1_ej2_nodos_sensor',         # Nombre del paquete
            executable='nodo1',          # Nombre del nodo (archivo ejecutable)
            name='nodo1',                # Nombre del nodo
            output='screen',              # Muestra los logs en la terminal
            parameters=[{'sensor_id': 1}],  # Parámetros que pasas al nodo
        ),
        Node(
            package='p1_ej2_nodos_sensor',         # Nombre del paquete
            executable='nodo2',          # Nombre del nodo (archivo ejecutable)
            name='nodo2',                # Nombre del nodo
            output='screen',              # Muestra los logs en la terminal
            parameters=[{'sensor_id': 2}],  # Parámetros que pasas al nodo
        ),
        Node(
            package='p1_ej2_nodos_sensor',         # Nombre del paquete
            executable='nodo3',          # Nombre del nodo (archivo ejecutable)
            name='nodo3',                # Nombre del nodo
            output='screen',              # Muestra los logs en la terminal
            parameters=[{'sensor_id': 3}],  # Parámetros que pasas al nodo
        ),
    ])
