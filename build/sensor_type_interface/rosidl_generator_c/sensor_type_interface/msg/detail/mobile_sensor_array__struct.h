// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__STRUCT_H_
#define SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MobileSensorArray in the package sensor_type_interface.
/**
  * MobileSensorArray.msg
  * Each array has 5 elements: [sensor_id, timestamp_seconds, data1, data2, data3]
 */
typedef struct sensor_type_interface__msg__MobileSensorArray
{
  float accelerometer_sensor_data[5];
  float magnetic_field_sensor_data[5];
  float gyroscope_sensor_data[5];
  float light_sensor_data[5];
  float pressure_sensor_data[5];
  float proximity_sensor_data[5];
  float gravity_sensor_data[5];
  float relative_humidity_sensor_data[5];
  float temperature_sensor_data[5];
  float heart_beat_sensor_data[5];
  float orientation_sensor_data[5];
  float line_sensor_sensor_data[5];
  float position_sensor_data[5];
  float parameter_sensor_data[5];
} sensor_type_interface__msg__MobileSensorArray;

// Struct for a sequence of sensor_type_interface__msg__MobileSensorArray.
typedef struct sensor_type_interface__msg__MobileSensorArray__Sequence
{
  sensor_type_interface__msg__MobileSensorArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_type_interface__msg__MobileSensorArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__STRUCT_H_
