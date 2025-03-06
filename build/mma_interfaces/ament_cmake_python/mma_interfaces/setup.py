from setuptools import find_packages
from setuptools import setup

setup(
    name='mma_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('mma_interfaces', 'mma_interfaces.*')),
)
