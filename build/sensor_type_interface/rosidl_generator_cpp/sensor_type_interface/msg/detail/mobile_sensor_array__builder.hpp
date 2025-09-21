// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__BUILDER_HPP_
#define SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_type_interface/msg/detail/mobile_sensor_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_type_interface
{

namespace msg
{

namespace builder
{

class Init_MobileSensorArray_parameter_sensor_data
{
public:
  explicit Init_MobileSensorArray_parameter_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  ::sensor_type_interface::msg::MobileSensorArray parameter_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_parameter_sensor_data_type arg)
  {
    msg_.parameter_sensor_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_position_sensor_data
{
public:
  explicit Init_MobileSensorArray_position_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_parameter_sensor_data position_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_position_sensor_data_type arg)
  {
    msg_.position_sensor_data = std::move(arg);
    return Init_MobileSensorArray_parameter_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_line_sensor_sensor_data
{
public:
  explicit Init_MobileSensorArray_line_sensor_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_position_sensor_data line_sensor_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_line_sensor_sensor_data_type arg)
  {
    msg_.line_sensor_sensor_data = std::move(arg);
    return Init_MobileSensorArray_position_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_orientation_sensor_data
{
public:
  explicit Init_MobileSensorArray_orientation_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_line_sensor_sensor_data orientation_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_orientation_sensor_data_type arg)
  {
    msg_.orientation_sensor_data = std::move(arg);
    return Init_MobileSensorArray_line_sensor_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_heart_beat_sensor_data
{
public:
  explicit Init_MobileSensorArray_heart_beat_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_orientation_sensor_data heart_beat_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_heart_beat_sensor_data_type arg)
  {
    msg_.heart_beat_sensor_data = std::move(arg);
    return Init_MobileSensorArray_orientation_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_temperature_sensor_data
{
public:
  explicit Init_MobileSensorArray_temperature_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_heart_beat_sensor_data temperature_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_temperature_sensor_data_type arg)
  {
    msg_.temperature_sensor_data = std::move(arg);
    return Init_MobileSensorArray_heart_beat_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_relative_humidity_sensor_data
{
public:
  explicit Init_MobileSensorArray_relative_humidity_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_temperature_sensor_data relative_humidity_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_relative_humidity_sensor_data_type arg)
  {
    msg_.relative_humidity_sensor_data = std::move(arg);
    return Init_MobileSensorArray_temperature_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_gravity_sensor_data
{
public:
  explicit Init_MobileSensorArray_gravity_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_relative_humidity_sensor_data gravity_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_gravity_sensor_data_type arg)
  {
    msg_.gravity_sensor_data = std::move(arg);
    return Init_MobileSensorArray_relative_humidity_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_proximity_sensor_data
{
public:
  explicit Init_MobileSensorArray_proximity_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_gravity_sensor_data proximity_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_proximity_sensor_data_type arg)
  {
    msg_.proximity_sensor_data = std::move(arg);
    return Init_MobileSensorArray_gravity_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_pressure_sensor_data
{
public:
  explicit Init_MobileSensorArray_pressure_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_proximity_sensor_data pressure_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_pressure_sensor_data_type arg)
  {
    msg_.pressure_sensor_data = std::move(arg);
    return Init_MobileSensorArray_proximity_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_light_sensor_data
{
public:
  explicit Init_MobileSensorArray_light_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_pressure_sensor_data light_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_light_sensor_data_type arg)
  {
    msg_.light_sensor_data = std::move(arg);
    return Init_MobileSensorArray_pressure_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_gyroscope_sensor_data
{
public:
  explicit Init_MobileSensorArray_gyroscope_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_light_sensor_data gyroscope_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_gyroscope_sensor_data_type arg)
  {
    msg_.gyroscope_sensor_data = std::move(arg);
    return Init_MobileSensorArray_light_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_magnetic_field_sensor_data
{
public:
  explicit Init_MobileSensorArray_magnetic_field_sensor_data(::sensor_type_interface::msg::MobileSensorArray & msg)
  : msg_(msg)
  {}
  Init_MobileSensorArray_gyroscope_sensor_data magnetic_field_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_magnetic_field_sensor_data_type arg)
  {
    msg_.magnetic_field_sensor_data = std::move(arg);
    return Init_MobileSensorArray_gyroscope_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

class Init_MobileSensorArray_accelerometer_sensor_data
{
public:
  Init_MobileSensorArray_accelerometer_sensor_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobileSensorArray_magnetic_field_sensor_data accelerometer_sensor_data(::sensor_type_interface::msg::MobileSensorArray::_accelerometer_sensor_data_type arg)
  {
    msg_.accelerometer_sensor_data = std::move(arg);
    return Init_MobileSensorArray_magnetic_field_sensor_data(msg_);
  }

private:
  ::sensor_type_interface::msg::MobileSensorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_type_interface::msg::MobileSensorArray>()
{
  return sensor_type_interface::msg::builder::Init_MobileSensorArray_accelerometer_sensor_data();
}

}  // namespace sensor_type_interface

#endif  // SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__BUILDER_HPP_
