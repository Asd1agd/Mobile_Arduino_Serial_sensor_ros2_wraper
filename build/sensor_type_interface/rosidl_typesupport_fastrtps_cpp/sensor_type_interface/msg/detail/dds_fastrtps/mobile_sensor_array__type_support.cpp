// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice
#include "sensor_type_interface/msg/detail/mobile_sensor_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sensor_type_interface/msg/detail/mobile_sensor_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accelerometer_sensor_data
  {
    cdr << ros_message.accelerometer_sensor_data;
  }
  // Member: magnetic_field_sensor_data
  {
    cdr << ros_message.magnetic_field_sensor_data;
  }
  // Member: gyroscope_sensor_data
  {
    cdr << ros_message.gyroscope_sensor_data;
  }
  // Member: light_sensor_data
  {
    cdr << ros_message.light_sensor_data;
  }
  // Member: pressure_sensor_data
  {
    cdr << ros_message.pressure_sensor_data;
  }
  // Member: proximity_sensor_data
  {
    cdr << ros_message.proximity_sensor_data;
  }
  // Member: gravity_sensor_data
  {
    cdr << ros_message.gravity_sensor_data;
  }
  // Member: relative_humidity_sensor_data
  {
    cdr << ros_message.relative_humidity_sensor_data;
  }
  // Member: temperature_sensor_data
  {
    cdr << ros_message.temperature_sensor_data;
  }
  // Member: heart_beat_sensor_data
  {
    cdr << ros_message.heart_beat_sensor_data;
  }
  // Member: orientation_sensor_data
  {
    cdr << ros_message.orientation_sensor_data;
  }
  // Member: line_sensor_sensor_data
  {
    cdr << ros_message.line_sensor_sensor_data;
  }
  // Member: position_sensor_data
  {
    cdr << ros_message.position_sensor_data;
  }
  // Member: parameter_sensor_data
  {
    cdr << ros_message.parameter_sensor_data;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_type_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sensor_type_interface::msg::MobileSensorArray & ros_message)
{
  // Member: accelerometer_sensor_data
  {
    cdr >> ros_message.accelerometer_sensor_data;
  }

  // Member: magnetic_field_sensor_data
  {
    cdr >> ros_message.magnetic_field_sensor_data;
  }

  // Member: gyroscope_sensor_data
  {
    cdr >> ros_message.gyroscope_sensor_data;
  }

  // Member: light_sensor_data
  {
    cdr >> ros_message.light_sensor_data;
  }

  // Member: pressure_sensor_data
  {
    cdr >> ros_message.pressure_sensor_data;
  }

  // Member: proximity_sensor_data
  {
    cdr >> ros_message.proximity_sensor_data;
  }

  // Member: gravity_sensor_data
  {
    cdr >> ros_message.gravity_sensor_data;
  }

  // Member: relative_humidity_sensor_data
  {
    cdr >> ros_message.relative_humidity_sensor_data;
  }

  // Member: temperature_sensor_data
  {
    cdr >> ros_message.temperature_sensor_data;
  }

  // Member: heart_beat_sensor_data
  {
    cdr >> ros_message.heart_beat_sensor_data;
  }

  // Member: orientation_sensor_data
  {
    cdr >> ros_message.orientation_sensor_data;
  }

  // Member: line_sensor_sensor_data
  {
    cdr >> ros_message.line_sensor_sensor_data;
  }

  // Member: position_sensor_data
  {
    cdr >> ros_message.position_sensor_data;
  }

  // Member: parameter_sensor_data
  {
    cdr >> ros_message.parameter_sensor_data;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_type_interface
get_serialized_size(
  const sensor_type_interface::msg::MobileSensorArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accelerometer_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.accelerometer_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetic_field_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.magnetic_field_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyroscope_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.gyroscope_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: light_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.light_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pressure_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.pressure_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: proximity_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.proximity_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gravity_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.gravity_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_humidity_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.relative_humidity_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.temperature_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heart_beat_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.heart_beat_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orientation_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.orientation_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: line_sensor_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.line_sensor_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.position_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parameter_sensor_data
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.parameter_sensor_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_type_interface
max_serialized_size_MobileSensorArray(
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


  // Member: accelerometer_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: magnetic_field_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyroscope_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: light_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pressure_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: proximity_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gravity_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: relative_humidity_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heart_beat_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: orientation_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: line_sensor_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_sensor_data
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: parameter_sensor_data
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
    using DataType = sensor_type_interface::msg::MobileSensorArray;
    is_plain =
      (
      offsetof(DataType, parameter_sensor_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MobileSensorArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sensor_type_interface::msg::MobileSensorArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MobileSensorArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_type_interface::msg::MobileSensorArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MobileSensorArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_type_interface::msg::MobileSensorArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MobileSensorArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MobileSensorArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MobileSensorArray__callbacks = {
  "sensor_type_interface::msg",
  "MobileSensorArray",
  _MobileSensorArray__cdr_serialize,
  _MobileSensorArray__cdr_deserialize,
  _MobileSensorArray__get_serialized_size,
  _MobileSensorArray__max_serialized_size
};

static rosidl_message_type_support_t _MobileSensorArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MobileSensorArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sensor_type_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sensor_type_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_type_interface::msg::MobileSensorArray>()
{
  return &sensor_type_interface::msg::typesupport_fastrtps_cpp::_MobileSensorArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensor_type_interface, msg, MobileSensorArray)() {
  return &sensor_type_interface::msg::typesupport_fastrtps_cpp::_MobileSensorArray__handle;
}

#ifdef __cplusplus
}
#endif
