#!/bin/bash

# navigate to previous
cd

# deactivate base
conda deactivate

# activate the environment
source ~/venv_yolo_py312/bin/activate

# remove double brackets
export PS1="(venv_yolo_py312) \u@\h:\w$ "

# make sure ROS2 uses the version of Python of the env, not the one of the host
export PYTHONPATH="$VIRTUAL_ENV/lib/python3.12/site-packages:$PYTHONPATH"

# navigate to the repo
cd Documents
cd YOLO-face-recognition/

# source the workspace
source /opt/ros/jazzy/setup.bash

# assemble and run the project
colcon build
source install/setup.bash
ros2 run yolo_face_recognition detection_node
