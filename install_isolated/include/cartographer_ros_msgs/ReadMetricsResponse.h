// Generated by gencpp from file cartographer_ros_msgs/ReadMetricsResponse.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_READMETRICSRESPONSE_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_READMETRICSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cartographer_ros_msgs/StatusResponse.h>
#include <cartographer_ros_msgs/MetricFamily.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct ReadMetricsResponse_
{
  typedef ReadMetricsResponse_<ContainerAllocator> Type;

  ReadMetricsResponse_()
    : status()
    , metric_families()
    , timestamp()  {
    }
  ReadMetricsResponse_(const ContainerAllocator& _alloc)
    : status(_alloc)
    , metric_families(_alloc)
    , timestamp()  {
  (void)_alloc;
    }



   typedef  ::cartographer_ros_msgs::StatusResponse_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef std::vector< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >> _metric_families_type;
  _metric_families_type metric_families;

   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ReadMetricsResponse_

typedef ::cartographer_ros_msgs::ReadMetricsResponse_<std::allocator<void> > ReadMetricsResponse;

typedef boost::shared_ptr< ::cartographer_ros_msgs::ReadMetricsResponse > ReadMetricsResponsePtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::ReadMetricsResponse const> ReadMetricsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator1> & lhs, const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.metric_families == rhs.metric_families &&
    lhs.timestamp == rhs.timestamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator1> & lhs, const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1fe8d7dcf3708e96e015774b1df470e";
  }

  static const char* value(const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1fe8d7dcf3708e9ULL;
  static const uint64_t static_value2 = 0x6e015774b1df470eULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/ReadMetricsResponse";
  }

  static const char* value(const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/StatusResponse status\n"
"cartographer_ros_msgs/MetricFamily[] metric_families\n"
"time timestamp\n"
"\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/StatusResponse\n"
"# Copyright 2018 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"# A common message type to indicate the outcome of a service call.\n"
"uint8 code\n"
"string message\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/MetricFamily\n"
"# 2018 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"string name\n"
"string description\n"
"cartographer_ros_msgs/Metric[] metrics\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/Metric\n"
"# 2018 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"uint8 TYPE_COUNTER=0\n"
"uint8 TYPE_GAUGE=1\n"
"uint8 TYPE_HISTOGRAM=2\n"
"\n"
"uint8 type\n"
"cartographer_ros_msgs/MetricLabel[] labels\n"
"\n"
"# TYPE_COUNTER or TYPE_GAUGE\n"
"float64 value\n"
"\n"
"# TYPE_HISTOGRAM\n"
"cartographer_ros_msgs/HistogramBucket[] counts_by_bucket\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/MetricLabel\n"
"# 2018 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"string key\n"
"string value\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/HistogramBucket\n"
"# 2018 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"# A histogram bucket counts values x for which:\n"
"#   previous_boundary < x <= bucket_boundary\n"
"# holds.\n"
"float64 bucket_boundary\n"
"float64 count\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.metric_families);
      stream.next(m.timestamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReadMetricsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::ReadMetricsResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    s << std::endl;
    Printer< ::cartographer_ros_msgs::StatusResponse_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "metric_families[]" << std::endl;
    for (size_t i = 0; i < v.metric_families.size(); ++i)
    {
      s << indent << "  metric_families[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >::stream(s, indent + "    ", v.metric_families[i]);
    }
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_READMETRICSRESPONSE_H
