// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__TRAITS_HPP_
#define SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_type_interface/msg/detail/mobile_sensor_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sensor_type_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const MobileSensorArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: accelerometer_sensor_data
  {
    if (msg.accelerometer_sensor_data.size() == 0) {
      out << "accelerometer_sensor_data: []";
    } else {
      out << "accelerometer_sensor_data: [";
      size_t pending_items = msg.accelerometer_sensor_data.size();
      for (auto item : msg.accelerometer_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: magnetic_field_sensor_data
  {
    if (msg.magnetic_field_sensor_data.size() == 0) {
      out << "magnetic_field_sensor_data: []";
    } else {
      out << "magnetic_field_sensor_data: [";
      size_t pending_items = msg.magnetic_field_sensor_data.size();
      for (auto item : msg.magnetic_field_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyroscope_sensor_data
  {
    if (msg.gyroscope_sensor_data.size() == 0) {
      out << "gyroscope_sensor_data: []";
    } else {
      out << "gyroscope_sensor_data: [";
      size_t pending_items = msg.gyroscope_sensor_data.size();
      for (auto item : msg.gyroscope_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: light_sensor_data
  {
    if (msg.light_sensor_data.size() == 0) {
      out << "light_sensor_data: []";
    } else {
      out << "light_sensor_data: [";
      size_t pending_items = msg.light_sensor_data.size();
      for (auto item : msg.light_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pressure_sensor_data
  {
    if (msg.pressure_sensor_data.size() == 0) {
      out << "pressure_sensor_data: []";
    } else {
      out << "pressure_sensor_data: [";
      size_t pending_items = msg.pressure_sensor_data.size();
      for (auto item : msg.pressure_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: proximity_sensor_data
  {
    if (msg.proximity_sensor_data.size() == 0) {
      out << "proximity_sensor_data: []";
    } else {
      out << "proximity_sensor_data: [";
      size_t pending_items = msg.proximity_sensor_data.size();
      for (auto item : msg.proximity_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gravity_sensor_data
  {
    if (msg.gravity_sensor_data.size() == 0) {
      out << "gravity_sensor_data: []";
    } else {
      out << "gravity_sensor_data: [";
      size_t pending_items = msg.gravity_sensor_data.size();
      for (auto item : msg.gravity_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: relative_humidity_sensor_data
  {
    if (msg.relative_humidity_sensor_data.size() == 0) {
      out << "relative_humidity_sensor_data: []";
    } else {
      out << "relative_humidity_sensor_data: [";
      size_t pending_items = msg.relative_humidity_sensor_data.size();
      for (auto item : msg.relative_humidity_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: temperature_sensor_data
  {
    if (msg.temperature_sensor_data.size() == 0) {
      out << "temperature_sensor_data: []";
    } else {
      out << "temperature_sensor_data: [";
      size_t pending_items = msg.temperature_sensor_data.size();
      for (auto item : msg.temperature_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heart_beat_sensor_data
  {
    if (msg.heart_beat_sensor_data.size() == 0) {
      out << "heart_beat_sensor_data: []";
    } else {
      out << "heart_beat_sensor_data: [";
      size_t pending_items = msg.heart_beat_sensor_data.size();
      for (auto item : msg.heart_beat_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation_sensor_data
  {
    if (msg.orientation_sensor_data.size() == 0) {
      out << "orientation_sensor_data: []";
    } else {
      out << "orientation_sensor_data: [";
      size_t pending_items = msg.orientation_sensor_data.size();
      for (auto item : msg.orientation_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: line_sensor_sensor_data
  {
    if (msg.line_sensor_sensor_data.size() == 0) {
      out << "line_sensor_sensor_data: []";
    } else {
      out << "line_sensor_sensor_data: [";
      size_t pending_items = msg.line_sensor_sensor_data.size();
      for (auto item : msg.line_sensor_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_sensor_data
  {
    if (msg.position_sensor_data.size() == 0) {
      out << "position_sensor_data: []";
    } else {
      out << "position_sensor_data: [";
      size_t pending_items = msg.position_sensor_data.size();
      for (auto item : msg.position_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parameter_sensor_data
  {
    if (msg.parameter_sensor_data.size() == 0) {
      out << "parameter_sensor_data: []";
    } else {
      out << "parameter_sensor_data: [";
      size_t pending_items = msg.parameter_sensor_data.size();
      for (auto item : msg.parameter_sensor_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MobileSensorArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accelerometer_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accelerometer_sensor_data.size() == 0) {
      out << "accelerometer_sensor_data: []\n";
    } else {
      out << "accelerometer_sensor_data:\n";
      for (auto item : msg.accelerometer_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: magnetic_field_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.magnetic_field_sensor_data.size() == 0) {
      out << "magnetic_field_sensor_data: []\n";
    } else {
      out << "magnetic_field_sensor_data:\n";
      for (auto item : msg.magnetic_field_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyroscope_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyroscope_sensor_data.size() == 0) {
      out << "gyroscope_sensor_data: []\n";
    } else {
      out << "gyroscope_sensor_data:\n";
      for (auto item : msg.gyroscope_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: light_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.light_sensor_data.size() == 0) {
      out << "light_sensor_data: []\n";
    } else {
      out << "light_sensor_data:\n";
      for (auto item : msg.light_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pressure_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pressure_sensor_data.size() == 0) {
      out << "pressure_sensor_data: []\n";
    } else {
      out << "pressure_sensor_data:\n";
      for (auto item : msg.pressure_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: proximity_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.proximity_sensor_data.size() == 0) {
      out << "proximity_sensor_data: []\n";
    } else {
      out << "proximity_sensor_data:\n";
      for (auto item : msg.proximity_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gravity_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gravity_sensor_data.size() == 0) {
      out << "gravity_sensor_data: []\n";
    } else {
      out << "gravity_sensor_data:\n";
      for (auto item : msg.gravity_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: relative_humidity_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.relative_humidity_sensor_data.size() == 0) {
      out << "relative_humidity_sensor_data: []\n";
    } else {
      out << "relative_humidity_sensor_data:\n";
      for (auto item : msg.relative_humidity_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperature_sensor_data.size() == 0) {
      out << "temperature_sensor_data: []\n";
    } else {
      out << "temperature_sensor_data:\n";
      for (auto item : msg.temperature_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heart_beat_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heart_beat_sensor_data.size() == 0) {
      out << "heart_beat_sensor_data: []\n";
    } else {
      out << "heart_beat_sensor_data:\n";
      for (auto item : msg.heart_beat_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: orientation_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation_sensor_data.size() == 0) {
      out << "orientation_sensor_data: []\n";
    } else {
      out << "orientation_sensor_data:\n";
      for (auto item : msg.orientation_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: line_sensor_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.line_sensor_sensor_data.size() == 0) {
      out << "line_sensor_sensor_data: []\n";
    } else {
      out << "line_sensor_sensor_data:\n";
      for (auto item : msg.line_sensor_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_sensor_data.size() == 0) {
      out << "position_sensor_data: []\n";
    } else {
      out << "position_sensor_data:\n";
      for (auto item : msg.position_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: parameter_sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameter_sensor_data.size() == 0) {
      out << "parameter_sensor_data: []\n";
    } else {
      out << "parameter_sensor_data:\n";
      for (auto item : msg.parameter_sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MobileSensorArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sensor_type_interface

namespace rosidl_generator_traits
{

[[deprecated("use sensor_type_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_type_interface::msg::MobileSensorArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_type_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_type_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensor_type_interface::msg::MobileSensorArray & msg)
{
  return sensor_type_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_type_interface::msg::MobileSensorArray>()
{
  return "sensor_type_interface::msg::MobileSensorArray";
}

template<>
inline const char * name<sensor_type_interface::msg::MobileSensorArray>()
{
  return "sensor_type_interface/msg/MobileSensorArray";
}

template<>
struct has_fixed_size<sensor_type_interface::msg::MobileSensorArray>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_type_interface::msg::MobileSensorArray>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_type_interface::msg::MobileSensorArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__TRAITS_HPP_
