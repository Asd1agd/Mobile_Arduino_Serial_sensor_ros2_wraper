# Mobile Arduino Serial Sensor ROS2 Wrapper

## Overview

This project provides a **ROS 2 node** that reads sensor data from the **Serial Sensor app** (or Arduino) over a **UDP network** and publishes it in ROS 2 as a **custom message** (`MobileSensorArray`).

The node supports **multiple sensors**, including:

* Accelerometer
* Gyroscope
* Magnetic field
* Light, Pressure, Proximity
* Gravity, Orientation, Position
* Temperature, Relative Humidity, Heart Beat
* Line Sensor, Parameter

Each sensor’s data is published as a **5-element array**:

```
[sensor_id, timestamp_seconds, x, y, z]
```

This allows ROS 2 nodes to **subscribe and process sensor data** in real time for robotics, visualization, or logging purposes.

---

## Features

* Supports **all available sensors** from the Serial Sensor app.
* Publishes sensor data in a **single custom ROS 2 message**.
* **UDP network connection** (works over Wi-Fi or USB tethering).
* **Runtime-configurable IP address** using ROS 2 parameters.
* Non-blocking, **failsafe** if the IP cannot be bound.

---

## Installation

1. Clone the repository:

```bash
git clone <repo-url>
cd <repo-folder>
```

2. Build your workspace:

```bash
colcon build
source install/setup.bash
```

3. Make sure your Serial Sensor app is sending data over UDP and your PC is on the same network.

---

## Running the Node

### 1. Set IP at node startup

You can specify the PC’s IP address that the Serial Sensor app will send data to:

```bash
ros2 run serial_sensor_ros2 serial_sensor_udp --ros-args -p udp_ip:=192.168.122.11
```

* `udp_ip` → The IP address your PC is listening on.
* This is useful if your PC has multiple network interfaces or a dynamic IP.

### 2. Change IP at runtime

If you need to change the IP while the node is running, use:

```bash
ros2 param set /udp_sensor_publisher udp_ip 192.168.122.11
```

* `/udp_sensor_publisher` → The name of the node.
* The node will **automatically retry binding** to the new IP without restarting.

---

## How to Use

1. Install the **Serial Sensor app** on your Android device.
2. Configure the app to **send sensor data over UDP** to your PC IP and port `8888`.
3. Run the ROS 2 node as shown above.
4. Subscribe to the topic `/sensor_data` in ROS 2:

```bash
ros2 topic echo /sensor_data
```

5. Use the data in your robotics, visualization, or data logging pipelines.

---

## Custom Message

`MobileSensorArray.msg` contains one 5-element float array per sensor:

```
float32[5] accelerometer_sensor_data
float32[5] gyroscope_sensor_data
float32[5] magnetic_field_sensor_data
...
```

* **Structure:** `[sensor_id, timestamp_seconds, x, y, z]`
* `sensor_id` → Numeric identifier for the sensor
* `timestamp_seconds` → Time the data was received by the node
* `x, y, z` → Sensor readings

---

## Notes

* Ensure your PC and phone are **on the same network** (Wi-Fi or USB tethering).
* The node is **non-blocking**, so it will continue running even if the UDP socket fails to bind initially.

---

