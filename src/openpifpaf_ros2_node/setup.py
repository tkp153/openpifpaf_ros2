from setuptools import setup

package_name = 'openpifpaf_ros2_node'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tko153',
    maintainer_email='takap365best@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'openpifpaf_ros2_node = openpifpaf_ros2_node.openpifpaf_ros2_node:main',
            
        ],
    },
)
