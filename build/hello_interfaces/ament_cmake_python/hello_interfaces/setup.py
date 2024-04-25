from setuptools import find_packages
from setuptools import setup

setup(
    name='hello_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('hello_interfaces', 'hello_interfaces.*')),
)
