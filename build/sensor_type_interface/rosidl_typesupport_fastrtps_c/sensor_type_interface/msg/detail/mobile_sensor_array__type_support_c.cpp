// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice
#include "sensor_type_interface/msg/detail/mobile_sensor_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sensor_type_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sensor_type_interface/msg/detail/mobile_sensor_array__struct.h"
#include "sensor_type_interface/msg/detail/mobile_sensor_array__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MobileSensorArray__ros_msg_type = sensor_type_interface__msg__MobileSensorArray;

static bool _MobileSensorArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MobileSensorArray__ros_msg_type * ros_message = static_cast<const _MobileSensorArray__ros_msg_type *>(untyped_ros_message);
  // Field name: accelerometer_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->accelerometer_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: magnetic_field_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->magnetic_field_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyroscope_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->gyroscope_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: light_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->light_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pressure_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->pressure_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: proximity_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->proximity_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gravity_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->gravity_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: relative_humidity_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->relative_humidity_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: temperature_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->temperature_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: heart_beat_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->heart_beat_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: orientation_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->orientation_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: line_sensor_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->line_sensor_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: position_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->position_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: parameter_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->parameter_sensor_data;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MobileSensorArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MobileSensorArray__ros_msg_type * ros_message = static_cast<_MobileSensorArray__ros_msg_type *>(untyped_ros_message);
  // Field name: accelerometer_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->accelerometer_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: magnetic_field_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->magnetic_field_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyroscope_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->gyroscope_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: light_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->light_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pressure_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->pressure_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: proximity_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->proximity_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gravity_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->gravity_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: relative_humidity_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->relative_humidity_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: temperature_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->temperature_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: heart_beat_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->heart_beat_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: orientation_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->orientation_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: line_sensor_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->line_sensor_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: position_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->position_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: parameter_sensor_data
  {
    size_t size = 5;
    auto array_ptr = ros_message->parameter_sensor_data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensor_type_interface
size_t get_serialized_size_sensor_type_interface__msg__MobileSensorArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MobileSensorArray__ros_msg_type * ros_message = static_cast<const _MobileSensorArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accelerometer_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->accelerometer_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetic_field_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->magnetic_field_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyroscope_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->gyroscope_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->light_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pressure_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->pressure_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name proximity_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->proximity_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gravity_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->gravity_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_humidity_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->relative_humidity_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->temperature_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heart_beat_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->heart_beat_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->orientation_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name line_sensor_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->line_sensor_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->position_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parameter_sensor_data
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->parameter_sensor_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MobileSensorArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sensor_type_interface__msg__MobileSensorArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensor_type_interface
size_t max_serialized_size_sensor_type_interface__msg__MobileSensorArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: accelerometer_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: magnetic_field_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyroscope_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: light_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pressure_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: proximity_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gravity_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: relative_humidity_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heart_beat_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: orientation_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: line_sensor_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: parameter_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sensor_type_interface__msg__MobileSensorArray;
    is_plain =
      (
      offsetof(DataType, parameter_sensor_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MobileSensorArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sensor_type_interface__msg__MobileSensorArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MobileSensorArray = {
  "sensor_type_interface::msg",
  "MobileSensorArray",
  _MobileSensorArray__cdr_serialize,
  _MobileSensorArray__cdr_deserialize,
  _MobileSensorArray__get_serialized_size,
  _MobileSensorArray__max_serialized_size
};

static rosidl_message_type_support_t _MobileSensorArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MobileSensorArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_type_interface, msg, MobileSensorArray)() {
  return &_MobileSensorArray__type_support;
}

#if defined(__cplusplus)
}
#endif
