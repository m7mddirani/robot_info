#include "ros/forwards.h"
#include "ros/node_handle.h"
#include "ros/publisher.h"
#include <ros/ros.h>
#include <robotinfo_msgs/RobotInfo10Fields.h>
#include <robot_info/robot_info_class.h>
#include <string>

class AGVRobotInfo: public RobotInfo{
    public:
        AGVRobotInfo(){};
        AGVRobotInfo(ros::NodeHandle *nohh);
        void publish_data();
    protected:
        std::string maximum_payload;

};