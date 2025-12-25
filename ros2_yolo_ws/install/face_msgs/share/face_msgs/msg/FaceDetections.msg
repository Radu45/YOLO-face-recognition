# FaceDetections.msg
# A single frame including all its detections

std_msgs/Header header
sensor_msgs/Image image #original frame
vision_msgs/Detection2DArray detections #the face detections 
