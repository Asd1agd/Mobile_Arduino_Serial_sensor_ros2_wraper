from setuptools import find_packages
from setuptools import setup

setup(
    name='sensor_type_interface',
    version='0.0.0',
    packages=find_packages(
        include=('sensor_type_interface', 'sensor_type_interface.*')),
)
