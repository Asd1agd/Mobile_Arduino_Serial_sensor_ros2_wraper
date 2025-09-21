// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sensor_type_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sensor_type_interface/msg/detail/mobile_sensor_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace sensor_type_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_type_interface
cdr_serialize(
  const sensor_type_interface::msg::MobileSensorArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_type_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sensor_type_interface::msg::MobileSensorArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_type_interface
get_serialized_size(
  const sensor_type_interface::msg::MobileSensorArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_type_interface
max_serialized_size_MobileSensorArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sensor_type_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_type_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensor_type_interface, msg, MobileSensorArray)();

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
