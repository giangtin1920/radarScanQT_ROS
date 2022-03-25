// Generated by gencpp from file radarscan_pkg/ttcRadar_msg.msg
// DO NOT EDIT!


#ifndef RADARSCAN_PKG_MESSAGE_TTCRADAR_MSG_H
#define RADARSCAN_PKG_MESSAGE_TTCRADAR_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace radarscan_pkg
{
template <class ContainerAllocator>
struct ttcRadar_msg_
{
  typedef ttcRadar_msg_<ContainerAllocator> Type;

  ttcRadar_msg_()
    : isObj(0)
    , numObj(0)
    , IdObj()
    , isApproach()
    , alpha()
    , posX()
    , posY()
    , distance()
    , velocity()
    , ttc()  {
    }
  ttcRadar_msg_(const ContainerAllocator& _alloc)
    : isObj(0)
    , numObj(0)
    , IdObj(_alloc)
    , isApproach(_alloc)
    , alpha(_alloc)
    , posX(_alloc)
    , posY(_alloc)
    , distance(_alloc)
    , velocity(_alloc)
    , ttc(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _isObj_type;
  _isObj_type isObj;

   typedef uint8_t _numObj_type;
  _numObj_type numObj;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _IdObj_type;
  _IdObj_type IdObj;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _isApproach_type;
  _isApproach_type isApproach;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _alpha_type;
  _alpha_type alpha;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _posX_type;
  _posX_type posX;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _posY_type;
  _posY_type posY;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _distance_type;
  _distance_type distance;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _ttc_type;
  _ttc_type ttc;





  typedef boost::shared_ptr< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> const> ConstPtr;

}; // struct ttcRadar_msg_

typedef ::radarscan_pkg::ttcRadar_msg_<std::allocator<void> > ttcRadar_msg;

typedef boost::shared_ptr< ::radarscan_pkg::ttcRadar_msg > ttcRadar_msgPtr;
typedef boost::shared_ptr< ::radarscan_pkg::ttcRadar_msg const> ttcRadar_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator1> & lhs, const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator2> & rhs)
{
  return lhs.isObj == rhs.isObj &&
    lhs.numObj == rhs.numObj &&
    lhs.IdObj == rhs.IdObj &&
    lhs.isApproach == rhs.isApproach &&
    lhs.alpha == rhs.alpha &&
    lhs.posX == rhs.posX &&
    lhs.posY == rhs.posY &&
    lhs.distance == rhs.distance &&
    lhs.velocity == rhs.velocity &&
    lhs.ttc == rhs.ttc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator1> & lhs, const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace radarscan_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e70fde2e65a20687ebfaaed6f2f230ff";
  }

  static const char* value(const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe70fde2e65a20687ULL;
  static const uint64_t static_value2 = 0xebfaaed6f2f230ffULL;
};

template<class ContainerAllocator>
struct DataType< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "radarscan_pkg/ttcRadar_msg";
  }

  static const char* value(const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 isObj\n"
"uint8 numObj\n"
"uint8[] IdObj\n"
"uint8[] isApproach\n"
"float32[] alpha\n"
"float32[] posX\n"
"float32[] posY\n"
"float32[] distance\n"
"float32[] velocity\n"
"float32[] ttc\n"
;
  }

  static const char* value(const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.isObj);
      stream.next(m.numObj);
      stream.next(m.IdObj);
      stream.next(m.isApproach);
      stream.next(m.alpha);
      stream.next(m.posX);
      stream.next(m.posY);
      stream.next(m.distance);
      stream.next(m.velocity);
      stream.next(m.ttc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ttcRadar_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::radarscan_pkg::ttcRadar_msg_<ContainerAllocator>& v)
  {
    s << indent << "isObj: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isObj);
    s << indent << "numObj: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numObj);
    s << indent << "IdObj[]" << std::endl;
    for (size_t i = 0; i < v.IdObj.size(); ++i)
    {
      s << indent << "  IdObj[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.IdObj[i]);
    }
    s << indent << "isApproach[]" << std::endl;
    for (size_t i = 0; i < v.isApproach.size(); ++i)
    {
      s << indent << "  isApproach[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.isApproach[i]);
    }
    s << indent << "alpha[]" << std::endl;
    for (size_t i = 0; i < v.alpha.size(); ++i)
    {
      s << indent << "  alpha[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.alpha[i]);
    }
    s << indent << "posX[]" << std::endl;
    for (size_t i = 0; i < v.posX.size(); ++i)
    {
      s << indent << "  posX[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.posX[i]);
    }
    s << indent << "posY[]" << std::endl;
    for (size_t i = 0; i < v.posY.size(); ++i)
    {
      s << indent << "  posY[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.posY[i]);
    }
    s << indent << "distance[]" << std::endl;
    for (size_t i = 0; i < v.distance.size(); ++i)
    {
      s << indent << "  distance[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.distance[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "ttc[]" << std::endl;
    for (size_t i = 0; i < v.ttc.size(); ++i)
    {
      s << indent << "  ttc[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ttc[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RADARSCAN_PKG_MESSAGE_TTCRADAR_MSG_H
