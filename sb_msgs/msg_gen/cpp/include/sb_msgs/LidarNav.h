/* Auto-generated by genmsg_cpp for file /home/mark/snowbots/src/10-11/ros-pkg/sb_msgs/msg/LidarNav.msg */
#ifndef SB_MSGS_MESSAGE_LIDARNAV_H
#define SB_MSGS_MESSAGE_LIDARNAV_H
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
struct LidarNav_ {
  typedef LidarNav_<ContainerAllocator> Type;

  LidarNav_()
  : direction(0.0)
  , distance(0.0)
  , confidence(0)
  {
  }

  LidarNav_(const ContainerAllocator& _alloc)
  : direction(0.0)
  , distance(0.0)
  , confidence(0)
  {
  }

  typedef float _direction_type;
  float direction;

  typedef float _distance_type;
  float distance;

  typedef int32_t _confidence_type;
  int32_t confidence;


private:
  static const char* __s_getDataType_() { return "sb_msgs/LidarNav"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "f176eab4d8b8cab198d7795b194bf566"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "#Message from LidarNav node to commander\n\
\n\
float32 direction\n\
float32 distance\n\
int32 confidence #a percentage\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, direction);
    ros::serialization::serialize(stream, distance);
    ros::serialization::serialize(stream, confidence);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, direction);
    ros::serialization::deserialize(stream, distance);
    ros::serialization::deserialize(stream, confidence);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(direction);
    size += ros::serialization::serializationLength(distance);
    size += ros::serialization::serializationLength(confidence);
    return size;
  }

  typedef boost::shared_ptr< ::sb_msgs::LidarNav_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sb_msgs::LidarNav_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LidarNav
typedef  ::sb_msgs::LidarNav_<std::allocator<void> > LidarNav;

typedef boost::shared_ptr< ::sb_msgs::LidarNav> LidarNavPtr;
typedef boost::shared_ptr< ::sb_msgs::LidarNav const> LidarNavConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::sb_msgs::LidarNav_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::sb_msgs::LidarNav_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace sb_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::sb_msgs::LidarNav_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::sb_msgs::LidarNav_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::sb_msgs::LidarNav_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f176eab4d8b8cab198d7795b194bf566";
  }

  static const char* value(const  ::sb_msgs::LidarNav_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf176eab4d8b8cab1ULL;
  static const uint64_t static_value2 = 0x98d7795b194bf566ULL;
};

template<class ContainerAllocator>
struct DataType< ::sb_msgs::LidarNav_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sb_msgs/LidarNav";
  }

  static const char* value(const  ::sb_msgs::LidarNav_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sb_msgs::LidarNav_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#Message from LidarNav node to commander\n\
\n\
float32 direction\n\
float32 distance\n\
int32 confidence #a percentage\n\
\n\
";
  }

  static const char* value(const  ::sb_msgs::LidarNav_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::sb_msgs::LidarNav_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sb_msgs::LidarNav_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.direction);
    stream.next(m.distance);
    stream.next(m.confidence);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LidarNav_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sb_msgs::LidarNav_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::sb_msgs::LidarNav_<ContainerAllocator> & v) 
  {
    s << indent << "direction: ";
    Printer<float>::stream(s, indent + "  ", v.direction);
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
    s << indent << "confidence: ";
    Printer<int32_t>::stream(s, indent + "  ", v.confidence);
  }
};


} // namespace message_operations
} // namespace ros

#endif // SB_MSGS_MESSAGE_LIDARNAV_H

