import sys
if sys.prefix == '/home/sergio/.espressif/python_env/idf5.2_py3.10_env':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sergio/ros2_ws/install/p1_ej2_nodo5'
