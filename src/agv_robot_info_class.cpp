#include "ros/forwards.h"
#include "ros/node_handle.h"
#include "ros/publisher.h"
#include <ros/ros.h>
#include <robotinfo_msgs/RobotInfo10Fields.h>
#include <robot_info/agv_robot_info_class.h>

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *nohh):RobotInfo(nohh){
    maximum_payload = "maximum_payload: 100 Kg";
    AGVRobotInfo::publish_data();
}

void AGVRobotInfo::publish_data(){
    rob_inf.data_field_01 = robot_description;
    rob_inf.data_field_02 = serial_number;
    rob_inf.data_field_03 = ip_address;
    rob_inf.data_field_04 = firmware_version;
    rob_inf.data_field_05 = maximum_payload;
    robot_info_pub.publish(rob_inf);
} 