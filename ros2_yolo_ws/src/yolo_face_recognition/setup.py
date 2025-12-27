from setuptools import setup

package_name = 'yolo_face_recognition'

setup(
    name=package_name,
    version='0.0.0',
    packages=[
        'yolo_face_recognition',
        'yolo_face_recognition.nodes',
    ],
    data_files=[
        # Required by ROS 2 (ament index)
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),

        # package.xml
        ('share/' + package_name,
            ['package.xml']),

        # config files
        ('share/' + package_name + '/config',
            ['yolo_face_recognition/config/config.yaml']),

        # model files
        ('share/' + package_name + '/models',
            ['yolo_face_recognition/models/yolov12n-face.pt']),
        
        ('share/' + package_name + '/config',
            ['yolo_face_recognition/config/faces.yaml'])
        

    ],
    install_requires=[
        'setuptools',
        'opencv-python',
        'cvzone',
        'numpy',
        'PyYAML',
    ],
    zip_safe=True,
    maintainer='radu28',
    maintainer_email='radu28@todo.todo',
    description='YOLO face recognition ROS 2 nodes',
    license='TODO',
    entry_points={
        'console_scripts': [
            'camera_node = yolo_face_recognition.nodes.camera_publisher_node:main',
            'detection_node = yolo_face_recognition.nodes.detector_node:main',
            'embedding_node = yolo_face_recognition.nodes.embedding_node:main',
            'tracking_node = yolo_face_recognition.nodes.tracking_node:main'

        ],
    },
)

