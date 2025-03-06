from setuptools import find_packages
from setuptools import setup

setup(
    name='ejercicio_tres_interface',
    version='0.0.0',
    packages=find_packages(
        include=('ejercicio_tres_interface', 'ejercicio_tres_interface.*')),
)
