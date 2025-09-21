import rclpy
from rclpy.node import Node
from sensor_type_interface.msg import MobileSensorArray  # Updated custom message
import socket
import struct
import errno
import time

# Sensor Type Mapping (keep keys as numbers, values as lowercase for message fields)
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
    101: "position",
    103: "parameter"
}

class UDPSensorPublisher(Node):
    def __init__(self):
        super().__init__('udp_sensor_publisher')

        # ROS 2 publisher
        self.publisher_ = self.create_publisher(MobileSensorArray, 'sensor_data', 10)

        # UDP config
        self.UDP_IP = "192.168.131.11"
        self.UDP_PORT = 8888
        self.MESSAGE_LENGTH = 13

        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.setblocking(False)
        self.sock.bind((self.UDP_IP, self.UDP_PORT))

        self.get_logger().info(f"Listening on UDP {self.UDP_IP}:{self.UDP_PORT}")

        # Timer to poll UDP
        self.timer = self.create_timer(0.01, self.read_udp_data)  # 100 Hz

    def read_udp_data(self):
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

            # Extract floats
            x = struct.unpack_from('<f', newestData, 1)[0]
            y = struct.unpack_from('<f', newestData, 5)[0]
            z = struct.unpack_from('<f', newestData, 9)[0]

            # Create message
            msg = MobileSensorArray()

            # Fill all sensors with zeros by default
            zero_array = [0.0, 0.0, 0.0, 0.0, 0.0]
            for field_name in SENSOR_TYPES.values():
                setattr(msg, f"{field_name}_sensor_data", zero_array.copy())

            # Fill the received sensor
            sensor_name = SENSOR_TYPES.get(sensor_type_byte, None)
            if sensor_name:
                setattr(msg, f"{sensor_name}_sensor_data", 
                        [float(sensor_type_byte), float(timestamp), x, y, z])

            # Publish
            self.publisher_.publish(msg)
            self.get_logger().info(f"Published data for {sensor_name} at {timestamp:.3f}")

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
