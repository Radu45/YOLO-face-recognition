#!/bin/bash

cd ..
cd ros2_yolo_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
ros2 run yolo_face_recognition camera_node
