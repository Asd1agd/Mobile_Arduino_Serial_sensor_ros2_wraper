# Mobile Arduino Serial Sensor ROS2 Wrapper

## Overview

This project provides a **ROS 2 node** that reads sensor data from the **[Serial Sensor app](https://play.google.com/store/apps/details?id=com.karl.serialsensor)** over a **UDP network** and publishes it in ROS 2 as a **custom message** (`MobileSensorArray`).

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
git clone https://github.com/Asd1agd/Mobile_Arduino_Serial_sensor_ros2_wraper.git
cd Mobile_Arduino_Serial_sensor_ros2_wraper
```

2. Build your workspace:

```bash
rm -rf build/ install/ log/
colcon build
source install/setup.bash
```

3. Make sure your **Serial Sensor app** is sending data over UDP and your PC is on the same network. You can also check the **example code and scripts** for plotting or receiving sensor data here: [Serial Sensor GitHub Repo](https://github.com/SerialSensor/HowToReadAndPlotSensorData/tree/main)

---

## Running the Node

### 1. Set IP at node startup

First connect your mobile and laptop on the **same network** via hotspot or Wi-Fi. Get the PC IP address by running:

```bash
ip a
```

Look for your network interface (e.g., `wlp1s0`) and copy the IP address at `inet`. Enter this IP in the Serial Sensor app and also use it as a parameter for the ROS 2 node:

```bash
ros2 run serial_sensor_ros2 serial_sensor_udp --ros-args -p udp_ip:=192.168.122.11
```

* `udp_ip` → The IP address your PC is listening on.
* Useful if your PC has multiple network interfaces or a dynamic IP.

### 2. Change IP at runtime

To change the IP while the node is running:

```bash
ros2 param set /udp_sensor_publisher udp_ip 192.168.122.11
```

* `/udp_sensor_publisher` → The name of the node.
* The node will **automatically retry binding** to the new IP without restarting.

---

## How to Use

1. Install the **[Serial Sensor app](https://play.google.com/store/apps/details?id=com.karl.serialsensor)** on your Android device.
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

