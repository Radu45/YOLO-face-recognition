import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/radu28/Documents/YOLO-face-recognition/install/yolo_face_recognition'
