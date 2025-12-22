from setuptools import find_packages, setup

package_name = 'yolo_face_recognition'

setup(
    name=package_name,
    version='0.0.0',
    packages=[
        'yolo_face_recognition',
        'yolo_face_recognition.nodes'
    ],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='radu28',
    maintainer_email='radu28@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'camera_node = yolo_face_recognition.nodes.camera_publisher_node:main',
            'detection_node = yolo_face_recognition.nodes.detector_node:main',

        ],
    },
)
