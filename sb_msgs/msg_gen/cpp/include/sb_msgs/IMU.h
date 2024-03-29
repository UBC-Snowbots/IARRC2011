/* Auto-generated by genmsg_cpp for file /home/mark/snowbots/src/10-11/ros-pkg/sb_msgs/msg/IMU.msg */
#ifndef SB_MSGS_MESSAGE_IMU_H
#define SB_MSGS_MESSAGE_IMU_H
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
struct IMU_ {
  typedef IMU_<ContainerAllocator> Type;

  IMU_()
  : c_x(0)
  , c_y(0)
  , c_z(0)
  , a_x(0)
  , a_y(0)
  , a_z(0)
  , g_x(0)
  , g_y(0)
  , g_z(0)
  {
  }

  IMU_(const ContainerAllocator& _alloc)
  : c_x(0)
  , c_y(0)
  , c_z(0)
  , a_x(0)
  , a_y(0)
  , a_z(0)
  , g_x(0)
  , g_y(0)
  , g_z(0)
  {
  }

  typedef int32_t _c_x_type;
  int32_t c_x;

  typedef int32_t _c_y_type;
  int32_t c_y;

  typedef int32_t _c_z_type;
  int32_t c_z;

  typedef int32_t _a_x_type;
  int32_t a_x;

  typedef int32_t _a_y_type;
  int32_t a_y;

  typedef int32_t _a_z_type;
  int32_t a_z;

  typedef int32_t _g_x_type;
  int32_t g_x;

  typedef int32_t _g_y_type;
  int32_t g_y;

  typedef int32_t _g_z_type;
  int32_t g_z;


private:
  static const char* __s_getDataType_() { return "sb_msgs/IMU"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "b80745dc30b0f0d1cf203fb334331734"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int32 c_x\n\
int32 c_y\n\
int32 c_z\n\
\n\
int32 a_x\n\
int32 a_y\n\
int32 a_z\n\
\n\
int32 g_x\n\
int32 g_y\n\
int32 g_z\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, c_x);
    ros::serialization::serialize(stream, c_y);
    ros::serialization::serialize(stream, c_z);
    ros::serialization::serialize(stream, a_x);
    ros::serialization::serialize(stream, a_y);
    ros::serialization::serialize(stream, a_z);
    ros::serialization::serialize(stream, g_x);
    ros::serialization::serialize(stream, g_y);
    ros::serialization::serialize(stream, g_z);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, c_x);
    ros::serialization::deserialize(stream, c_y);
    ros::serialization::deserialize(stream, c_z);
    ros::serialization::deserialize(stream, a_x);
    ros::serialization::deserialize(stream, a_y);
    ros::serialization::deserialize(stream, a_z);
    ros::serialization::deserialize(stream, g_x);
    ros::serialization::deserialize(stream, g_y);
    ros::serialization::deserialize(stream, g_z);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(c_x);
    size += ros::serialization::serializationLength(c_y);
    size += ros::serialization::serializationLength(c_z);
    size += ros::serialization::serializationLength(a_x);
    size += ros::serialization::serializationLength(a_y);
    size += ros::serialization::serializationLength(a_z);
    size += ros::serialization::serializationLength(g_x);
    size += ros::serialization::serializationLength(g_y);
    size += ros::serialization::serializationLength(g_z);
    return size;
  }

  typedef boost::shared_ptr< ::sb_msgs::IMU_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sb_msgs::IMU_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct IMU
typedef  ::sb_msgs::IMU_<std::allocator<void> > IMU;

typedef boost::shared_ptr< ::sb_msgs::IMU> IMUPtr;
typedef boost::shared_ptr< ::sb_msgs::IMU const> IMUConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::sb_msgs::IMU_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::sb_msgs::IMU_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace sb_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::sb_msgs::IMU_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::sb_msgs::IMU_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::sb_msgs::IMU_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b80745dc30b0f0d1cf203fb334331734";
  }

  static const char* value(const  ::sb_msgs::IMU_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb80745dc30b0f0d1ULL;
  static const uint64_t static_value2 = 0xcf203fb334331734ULL;
};

template<class ContainerAllocator>
struct DataType< ::sb_msgs::IMU_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sb_msgs/IMU";
  }

  static const char* value(const  ::sb_msgs::IMU_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sb_msgs::IMU_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 c_x\n\
int32 c_y\n\
int32 c_z\n\
\n\
int32 a_x\n\
int32 a_y\n\
int32 a_z\n\
\n\
int32 g_x\n\
int32 g_y\n\
int32 g_z\n\
\n\
";
  }

  static const char* value(const  ::sb_msgs::IMU_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::sb_msgs::IMU_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sb_msgs::IMU_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.c_x);
    stream.next(m.c_y);
    stream.next(m.c_z);
    stream.next(m.a_x);
    stream.next(m.a_y);
    stream.next(m.a_z);
    stream.next(m.g_x);
    stream.next(m.g_y);
    stream.next(m.g_z);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct IMU_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sb_msgs::IMU_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::sb_msgs::IMU_<ContainerAllocator> & v) 
  {
    s << indent << "c_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.c_x);
    s << indent << "c_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.c_y);
    s << indent << "c_z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.c_z);
    s << indent << "a_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a_x);
    s << indent << "a_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a_y);
    s << indent << "a_z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a_z);
    s << indent << "g_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.g_x);
    s << indent << "g_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.g_y);
    s << indent << "g_z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.g_z);
  }
};


} // namespace message_operations
} // namespace ros

#endif // SB_MSGS_MESSAGE_IMU_H

