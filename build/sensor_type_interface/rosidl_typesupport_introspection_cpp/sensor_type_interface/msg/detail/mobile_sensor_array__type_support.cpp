// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sensor_type_interface/msg/detail/mobile_sensor_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sensor_type_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MobileSensorArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sensor_type_interface::msg::MobileSensorArray(_init);
}

void MobileSensorArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sensor_type_interface::msg::MobileSensorArray *>(message_memory);
  typed_message->~MobileSensorArray();
}

size_t size_function__MobileSensorArray__accelerometer_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__accelerometer_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__accelerometer_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__accelerometer_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__accelerometer_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__accelerometer_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__accelerometer_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__magnetic_field_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__magnetic_field_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__magnetic_field_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__magnetic_field_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__magnetic_field_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__magnetic_field_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__magnetic_field_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__gyroscope_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__gyroscope_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__gyroscope_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__gyroscope_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__gyroscope_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__gyroscope_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__gyroscope_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__light_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__light_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__light_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__light_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__light_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__light_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__light_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__pressure_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__pressure_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__pressure_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__pressure_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__pressure_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__pressure_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__pressure_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__proximity_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__proximity_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__proximity_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__proximity_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__proximity_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__proximity_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__proximity_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__gravity_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__gravity_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__gravity_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__gravity_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__gravity_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__gravity_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__gravity_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__relative_humidity_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__relative_humidity_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__relative_humidity_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__relative_humidity_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__relative_humidity_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__relative_humidity_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__relative_humidity_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__temperature_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__temperature_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__temperature_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__temperature_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__temperature_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__temperature_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__temperature_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__heart_beat_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__heart_beat_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__heart_beat_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__heart_beat_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__heart_beat_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__heart_beat_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__heart_beat_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__orientation_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__orientation_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__orientation_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__orientation_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__orientation_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__orientation_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__orientation_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__line_sensor_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__line_sensor_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__line_sensor_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__line_sensor_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__line_sensor_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__line_sensor_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__line_sensor_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__position_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__position_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__position_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__position_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__position_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__position_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__position_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MobileSensorArray__parameter_sensor_data(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__MobileSensorArray__parameter_sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__MobileSensorArray__parameter_sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__MobileSensorArray__parameter_sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MobileSensorArray__parameter_sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MobileSensorArray__parameter_sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MobileSensorArray__parameter_sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MobileSensorArray_message_member_array[14] = {
  {
    "accelerometer_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, accelerometer_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__accelerometer_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__accelerometer_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__accelerometer_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__accelerometer_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__accelerometer_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "magnetic_field_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, magnetic_field_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__magnetic_field_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__magnetic_field_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__magnetic_field_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__magnetic_field_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__magnetic_field_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyroscope_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, gyroscope_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__gyroscope_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__gyroscope_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__gyroscope_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__gyroscope_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__gyroscope_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "light_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, light_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__light_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__light_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__light_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__light_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__light_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pressure_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, pressure_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__pressure_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__pressure_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__pressure_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__pressure_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__pressure_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "proximity_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, proximity_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__proximity_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__proximity_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__proximity_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__proximity_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__proximity_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gravity_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, gravity_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__gravity_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__gravity_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__gravity_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__gravity_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__gravity_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "relative_humidity_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, relative_humidity_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__relative_humidity_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__relative_humidity_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__relative_humidity_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__relative_humidity_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__relative_humidity_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperature_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, temperature_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__temperature_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__temperature_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__temperature_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__temperature_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__temperature_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heart_beat_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, heart_beat_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__heart_beat_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__heart_beat_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__heart_beat_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__heart_beat_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__heart_beat_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, orientation_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__orientation_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__orientation_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__orientation_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__orientation_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__orientation_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "line_sensor_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, line_sensor_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__line_sensor_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__line_sensor_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__line_sensor_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__line_sensor_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__line_sensor_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, position_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__position_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__position_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__position_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__position_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__position_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parameter_sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(sensor_type_interface::msg::MobileSensorArray, parameter_sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MobileSensorArray__parameter_sensor_data,  // size() function pointer
    get_const_function__MobileSensorArray__parameter_sensor_data,  // get_const(index) function pointer
    get_function__MobileSensorArray__parameter_sensor_data,  // get(index) function pointer
    fetch_function__MobileSensorArray__parameter_sensor_data,  // fetch(index, &value) function pointer
    assign_function__MobileSensorArray__parameter_sensor_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MobileSensorArray_message_members = {
  "sensor_type_interface::msg",  // message namespace
  "MobileSensorArray",  // message name
  14,  // number of fields
  sizeof(sensor_type_interface::msg::MobileSensorArray),
  MobileSensorArray_message_member_array,  // message members
  MobileSensorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  MobileSensorArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MobileSensorArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MobileSensorArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sensor_type_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_type_interface::msg::MobileSensorArray>()
{
  return &::sensor_type_interface::msg::rosidl_typesupport_introspection_cpp::MobileSensorArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_type_interface, msg, MobileSensorArray)() {
  return &::sensor_type_interface::msg::rosidl_typesupport_introspection_cpp::MobileSensorArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
