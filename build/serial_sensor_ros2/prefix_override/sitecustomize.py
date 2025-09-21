import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/asd/temp_git_repo/Mobile_Arduino_Serial_sensor_ros2_wraper/install/serial_sensor_ros2'
