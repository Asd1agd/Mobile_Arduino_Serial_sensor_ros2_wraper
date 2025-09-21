// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensor_type_interface/msg/detail/mobile_sensor_array__rosidl_typesupport_introspection_c.h"
#include "sensor_type_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensor_type_interface/msg/detail/mobile_sensor_array__functions.h"
#include "sensor_type_interface/msg/detail/mobile_sensor_array__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensor_type_interface__msg__MobileSensorArray__init(message_memory);
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_fini_function(void * message_memory)
{
  sensor_type_interface__msg__MobileSensorArray__fini(message_memory);
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__accelerometer_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__accelerometer_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__accelerometer_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__accelerometer_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__accelerometer_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__accelerometer_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__accelerometer_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__magnetic_field_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__magnetic_field_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__magnetic_field_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__magnetic_field_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__magnetic_field_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__magnetic_field_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__magnetic_field_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__gyroscope_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__gyroscope_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__gyroscope_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__gyroscope_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__gyroscope_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__gyroscope_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__gyroscope_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__light_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__light_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__light_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__light_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__light_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__light_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__light_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__pressure_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__pressure_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__pressure_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__pressure_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__pressure_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__pressure_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__pressure_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__proximity_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__proximity_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__proximity_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__proximity_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__proximity_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__proximity_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__proximity_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__gravity_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__gravity_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__gravity_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__gravity_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__gravity_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__gravity_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__gravity_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__relative_humidity_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__relative_humidity_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__relative_humidity_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__relative_humidity_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__relative_humidity_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__relative_humidity_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__relative_humidity_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__temperature_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__temperature_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__temperature_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__temperature_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__temperature_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__temperature_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__temperature_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__heart_beat_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__heart_beat_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__heart_beat_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__heart_beat_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__heart_beat_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__heart_beat_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__heart_beat_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__orientation_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__orientation_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__orientation_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__orientation_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__orientation_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__orientation_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__orientation_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__line_sensor_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__line_sensor_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__line_sensor_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__line_sensor_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__line_sensor_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__line_sensor_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__line_sensor_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__position_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__position_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__position_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__position_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__position_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__position_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__position_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__parameter_sensor_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__parameter_sensor_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__parameter_sensor_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__parameter_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__parameter_sensor_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__parameter_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__parameter_sensor_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_message_member_array[14] = {
  {
    "accelerometer_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, accelerometer_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__accelerometer_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__accelerometer_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__accelerometer_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__accelerometer_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__accelerometer_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "magnetic_field_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, magnetic_field_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__magnetic_field_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__magnetic_field_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__magnetic_field_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__magnetic_field_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__magnetic_field_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyroscope_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, gyroscope_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__gyroscope_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__gyroscope_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__gyroscope_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__gyroscope_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__gyroscope_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, light_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__light_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__light_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__light_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__light_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__light_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, pressure_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__pressure_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__pressure_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__pressure_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__pressure_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__pressure_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "proximity_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, proximity_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__proximity_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__proximity_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__proximity_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__proximity_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__proximity_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, gravity_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__gravity_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__gravity_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__gravity_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__gravity_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__gravity_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_humidity_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, relative_humidity_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__relative_humidity_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__relative_humidity_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__relative_humidity_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__relative_humidity_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__relative_humidity_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, temperature_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__temperature_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__temperature_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__temperature_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__temperature_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__temperature_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heart_beat_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, heart_beat_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__heart_beat_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__heart_beat_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__heart_beat_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__heart_beat_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__heart_beat_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, orientation_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__orientation_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__orientation_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__orientation_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__orientation_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__orientation_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "line_sensor_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, line_sensor_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__line_sensor_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__line_sensor_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__line_sensor_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__line_sensor_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__line_sensor_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, position_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__position_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__position_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__position_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__position_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__position_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface__msg__MobileSensorArray, parameter_sensor_data),  // bytes offset in struct
    NULL,  // default value
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__size_function__MobileSensorArray__parameter_sensor_data,  // size() function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_const_function__MobileSensorArray__parameter_sensor_data,  // get_const(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__get_function__MobileSensorArray__parameter_sensor_data,  // get(index) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__fetch_function__MobileSensorArray__parameter_sensor_data,  // fetch(index, &value) function pointer
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__assign_function__MobileSensorArray__parameter_sensor_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_message_members = {
  "sensor_type_interface__msg",  // message namespace
  "MobileSensorArray",  // message name
  14,  // number of fields
  sizeof(sensor_type_interface__msg__MobileSensorArray),
  sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_message_member_array,  // message members
  sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_message_type_support_handle = {
  0,
  &sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_type_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_type_interface, msg, MobileSensorArray)() {
  if (!sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_message_type_support_handle.typesupport_identifier) {
    sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensor_type_interface__msg__MobileSensorArray__rosidl_typesupport_introspection_c__MobileSensorArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
