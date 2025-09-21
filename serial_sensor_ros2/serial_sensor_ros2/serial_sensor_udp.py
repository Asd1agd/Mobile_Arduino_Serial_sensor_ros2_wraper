import rclpy
from rclpy.node import Node
from sensor_type_interface.msg import MobileSensorArray
import socket
import struct
import errno
import time

# Sensor Type Mapping
SENSOR_TYPES = {
    1: "accelerometer",
    2: "magnetic_field",
    4: "gyroscope",
    5: "light",
    6: "pressure",
    8: "proximity",
    9: "gravity",
    12: "relative_humidity",
    13: "temperature",
    31: "heart_beat",
    99: "orientation",
    100: "line_sensor",
    105: "position",
    103: "parameter"
}

class UDPSensorPublisher(Node):
    def __init__(self):
        super().__init__('udp_sensor_publisher')

        # ROS 2 parameter for UDP IP
        self.declare_parameter('udp_ip', '192.168.189.11')
        self.UDP_PORT = 8888
        self.MESSAGE_LENGTH = 13

        # ROS 2 publisher
        self.publisher_ = self.create_publisher(MobileSensorArray, 'sensor_data', 10)

        # Timer to poll UDP
        self.timer = self.create_timer(0.01, self.read_udp_data)  # 100 Hz

        # UDP socket initialization
        self.sock = None
        self.bind_udp_socket()

    def bind_udp_socket(self):
        """Try to bind UDP socket; if failed, print info and retry later"""
        self.UDP_IP = self.get_parameter('udp_ip').get_parameter_value().string_value
        if self.sock:
            self.sock.close()
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.setblocking(False)

        try:
            self.sock.bind((self.UDP_IP, self.UDP_PORT))
            self.get_logger().info(f"Successfully bound to UDP {self.UDP_IP}:{self.UDP_PORT}")
            self.is_bound = True
        except OSError as e:
            self.get_logger().error(
                f"Failed to bind UDP socket on {self.UDP_IP}:{self.UDP_PORT}. "
                "Please change the IP address using the ROS 2 parameter 'udp_ip'."
            )
            self.get_logger().info(
                "Example command to run with a different IP:\n"
                "ros2 run serial_sensor_ros2 serial_sensor_udp --ros-args -p udp_ip:=192.168.1.50"
            )
            self.is_bound = False

    def read_udp_data(self):
        # Check if socket is bound
        if not getattr(self, 'is_bound', False):
            # Attempt to bind again at runtime in case the parameter was changed
            self.bind_udp_socket()
            return  # Skip reading until successful

        newestData = None
        while True:
            try:
                data, addr = self.sock.recvfrom(self.MESSAGE_LENGTH)
                if data:
                    newestData = data
            except socket.error as why:
                if why.args[0] == errno.EWOULDBLOCK:
                    break
                else:
                    raise why

        if newestData is not None:
            sensor_type_byte = newestData[0]
            timestamp = time.time()
            x = struct.unpack_from('<f', newestData, 1)[0]
            y = struct.unpack_from('<f', newestData, 5)[0]
            z = struct.unpack_from('<f', newestData, 9)[0]

            msg = MobileSensorArray()
            zero_array = [0.0, 0.0, 0.0, 0.0, 0.0]
            for field_name in SENSOR_TYPES.values():
                setattr(msg, f"{field_name}_sensor_data", zero_array.copy())

            sensor_name = SENSOR_TYPES.get(sensor_type_byte, None)
            if sensor_name:
                setattr(msg, f"{sensor_name}_sensor_data",
                        [float(sensor_type_byte), float(timestamp), x, y, z])

            self.publisher_.publish(msg)
            self.get_logger().info(
                f"Published data for {sensor_name} at {timestamp:.3f} with id:{int(sensor_type_byte)}"
            )

def main(args=None):
    rclpy.init(args=args)
    node = UDPSensorPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
