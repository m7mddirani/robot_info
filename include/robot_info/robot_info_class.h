#include "ros/forwards.h"
#include "ros/node_handle.h"
#include "ros/publisher.h"
#include <ros/ros.h>
#include <robotinfo_msgs/RobotInfo10Fields.h>

class RobotInfo{

    public:
        RobotInfo(){};
        RobotInfo(ros::NodeHandle *noh);
        void publish_data();
    protected:
        ros::NodeHandle *nh;
        std::string robot_description;
        std::string serial_number;
        std::string ip_address;
        std::string firmware_version;
        ros::Publisher robot_info_pub;
        robotinfo_msgs::RobotInfo10Fields rob_inf;
};