/* Auto-generated by genmsg_cpp for file /home/mark/snowbots/src/10-11/ros-pkg/sb_msgs/msg/RobotState.msg */
#ifndef SB_MSGS_MESSAGE_ROBOTSTATE_H
#define SB_MSGS_MESSAGE_ROBOTSTATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace sb_msgs
{
template <class ContainerAllocator>
struct RobotState_ {
  typedef RobotState_<ContainerAllocator> Type;

  RobotState_()
  : portname()
  , serial_no()
  , num_analog(0)
  , analog()
  , ir()
  , num_i2c(0)
  , i2c()
  , num_batteries(0)
  , battery_names()
  , batteries()
  , odometer(0)
  {
  }

  RobotState_(const ContainerAllocator& _alloc)
  : portname(_alloc)
  , serial_no(_alloc)
  , num_analog(0)
  , analog(_alloc)
  , ir(_alloc)
  , num_i2c(0)
  , i2c(_alloc)
  , num_batteries(0)
  , battery_names(_alloc)
  , batteries(_alloc)
  , odometer(0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _portname_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  portname;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _serial_no_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  serial_no;

  typedef uint32_t _num_analog_type;
  uint32_t num_analog;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _analog_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  analog;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _ir_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  ir;

  typedef uint32_t _num_i2c_type;
  uint32_t num_i2c;

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _i2c_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  i2c;

  typedef uint32_t _num_batteries_type;
  uint32_t num_batteries;

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _battery_names_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  battery_names;

  typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _batteries_type;
  std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  batteries;

  typedef uint32_t _odometer_type;
  uint32_t odometer;


  ROS_DEPRECATED uint32_t get_analog_size() const { return (uint32_t)analog.size(); }
  ROS_DEPRECATED void set_analog_size(uint32_t size) { analog.resize((size_t)size); }
  ROS_DEPRECATED void get_analog_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->analog; }
  ROS_DEPRECATED void set_analog_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->analog = vec; }
  ROS_DEPRECATED uint32_t get_ir_size() const { return (uint32_t)ir.size(); }
  ROS_DEPRECATED void set_ir_size(uint32_t size) { ir.resize((size_t)size); }
  ROS_DEPRECATED void get_ir_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->ir; }
  ROS_DEPRECATED void set_ir_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->ir = vec; }
  ROS_DEPRECATED uint32_t get_i2c_size() const { return (uint32_t)i2c.size(); }
  ROS_DEPRECATED void set_i2c_size(uint32_t size) { i2c.resize((size_t)size); }
  ROS_DEPRECATED void get_i2c_vec(std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other > & vec) const { vec = this->i2c; }
  ROS_DEPRECATED void set_i2c_vec(const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other > & vec) { this->i2c = vec; }
  ROS_DEPRECATED uint32_t get_battery_names_size() const { return (uint32_t)battery_names.size(); }
  ROS_DEPRECATED void set_battery_names_size(uint32_t size) { battery_names.resize((size_t)size); }
  ROS_DEPRECATED void get_battery_names_vec(std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other > & vec) const { vec = this->battery_names; }
  ROS_DEPRECATED void set_battery_names_vec(const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other > & vec) { this->battery_names = vec; }
  ROS_DEPRECATED uint32_t get_batteries_size() const { return (uint32_t)batteries.size(); }
  ROS_DEPRECATED void set_batteries_size(uint32_t size) { batteries.resize((size_t)size); }
  ROS_DEPRECATED void get_batteries_vec(std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other > & vec) const { vec = this->batteries; }
  ROS_DEPRECATED void set_batteries_vec(const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other > & vec) { this->batteries = vec; }
private:
  static const char* __s_getDataType_() { return "sb_msgs/RobotState"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "4868e8ee5450af403376c7390599c5b8"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string portname    # the port that the microcontroller is attached to\n\
string serial_no   # the unique identifier of the microcontroller\n\
uint32 num_analog  # number of analog devices supported\n\
float64[] analog   # values of analog devices, in volts\n\
float64[] ir #values of IR devices in cm\n\
uint32 num_i2c   # number of I2C bus devices supported\n\
int32[] i2c      # integer values of I2C devices\n\
uint32 num_batteries  # number of batteries the system can monitor\n\
string[] battery_names # the name of each battery\n\
uint32[] batteries    # integer values of battery levels\n\
uint32 odometer   # integer value of odometer ticks since last poll\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, portname);
    ros::serialization::serialize(stream, serial_no);
    ros::serialization::serialize(stream, num_analog);
    ros::serialization::serialize(stream, analog);
    ros::serialization::serialize(stream, ir);
    ros::serialization::serialize(stream, num_i2c);
    ros::serialization::serialize(stream, i2c);
    ros::serialization::serialize(stream, num_batteries);
    ros::serialization::serialize(stream, battery_names);
    ros::serialization::serialize(stream, batteries);
    ros::serialization::serialize(stream, odometer);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, portname);
    ros::serialization::deserialize(stream, serial_no);
    ros::serialization::deserialize(stream, num_analog);
    ros::serialization::deserialize(stream, analog);
    ros::serialization::deserialize(stream, ir);
    ros::serialization::deserialize(stream, num_i2c);
    ros::serialization::deserialize(stream, i2c);
    ros::serialization::deserialize(stream, num_batteries);
    ros::serialization::deserialize(stream, battery_names);
    ros::serialization::deserialize(stream, batteries);
    ros::serialization::deserialize(stream, odometer);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(portname);
    size += ros::serialization::serializationLength(serial_no);
    size += ros::serialization::serializationLength(num_analog);
    size += ros::serialization::serializationLength(analog);
    size += ros::serialization::serializationLength(ir);
    size += ros::serialization::serializationLength(num_i2c);
    size += ros::serialization::serializationLength(i2c);
    size += ros::serialization::serializationLength(num_batteries);
    size += ros::serialization::serializationLength(battery_names);
    size += ros::serialization::serializationLength(batteries);
    size += ros::serialization::serializationLength(odometer);
    return size;
  }

  typedef boost::shared_ptr< ::sb_msgs::RobotState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sb_msgs::RobotState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RobotState
typedef  ::sb_msgs::RobotState_<std::allocator<void> > RobotState;

typedef boost::shared_ptr< ::sb_msgs::RobotState> RobotStatePtr;
typedef boost::shared_ptr< ::sb_msgs::RobotState const> RobotStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::sb_msgs::RobotState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::sb_msgs::RobotState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace sb_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::sb_msgs::RobotState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::sb_msgs::RobotState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::sb_msgs::RobotState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4868e8ee5450af403376c7390599c5b8";
  }

  static const char* value(const  ::sb_msgs::RobotState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4868e8ee5450af40ULL;
  static const uint64_t static_value2 = 0x3376c7390599c5b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::sb_msgs::RobotState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sb_msgs/RobotState";
  }

  static const char* value(const  ::sb_msgs::RobotState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sb_msgs::RobotState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string portname    # the port that the microcontroller is attached to\n\
string serial_no   # the unique identifier of the microcontroller\n\
uint32 num_analog  # number of analog devices supported\n\
float64[] analog   # values of analog devices, in volts\n\
float64[] ir #values of IR devices in cm\n\
uint32 num_i2c   # number of I2C bus devices supported\n\
int32[] i2c      # integer values of I2C devices\n\
uint32 num_batteries  # number of batteries the system can monitor\n\
string[] battery_names # the name of each battery\n\
uint32[] batteries    # integer values of battery levels\n\
uint32 odometer   # integer value of odometer ticks since last poll\n\
\n\
\n\
";
  }

  static const char* value(const  ::sb_msgs::RobotState_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sb_msgs::RobotState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.portname);
    stream.next(m.serial_no);
    stream.next(m.num_analog);
    stream.next(m.analog);
    stream.next(m.ir);
    stream.next(m.num_i2c);
    stream.next(m.i2c);
    stream.next(m.num_batteries);
    stream.next(m.battery_names);
    stream.next(m.batteries);
    stream.next(m.odometer);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RobotState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sb_msgs::RobotState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::sb_msgs::RobotState_<ContainerAllocator> & v) 
  {
    s << indent << "portname: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.portname);
    s << indent << "serial_no: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.serial_no);
    s << indent << "num_analog: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_analog);
    s << indent << "analog[]" << std::endl;
    for (size_t i = 0; i < v.analog.size(); ++i)
    {
      s << indent << "  analog[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.analog[i]);
    }
    s << indent << "ir[]" << std::endl;
    for (size_t i = 0; i < v.ir.size(); ++i)
    {
      s << indent << "  ir[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.ir[i]);
    }
    s << indent << "num_i2c: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_i2c);
    s << indent << "i2c[]" << std::endl;
    for (size_t i = 0; i < v.i2c.size(); ++i)
    {
      s << indent << "  i2c[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.i2c[i]);
    }
    s << indent << "num_batteries: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_batteries);
    s << indent << "battery_names[]" << std::endl;
    for (size_t i = 0; i < v.battery_names.size(); ++i)
    {
      s << indent << "  battery_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.battery_names[i]);
    }
    s << indent << "batteries[]" << std::endl;
    for (size_t i = 0; i < v.batteries.size(); ++i)
    {
      s << indent << "  batteries[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.batteries[i]);
    }
    s << indent << "odometer: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.odometer);
  }
};


} // namespace message_operations
} // namespace ros

#endif // SB_MSGS_MESSAGE_ROBOTSTATE_H

