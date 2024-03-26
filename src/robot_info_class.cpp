#include "ros/forwards.h"
#include "ros/node_handle.h"
#include "ros/publisher.h"
#include <ros/ros.h>
#include <robotinfo_msgs/RobotInfo10Fields.h>
#include <robot_info/robot_info_class.h>
#include <string>

RobotInfo::RobotInfo(ros::NodeHandle *noh){
    nh = noh;
    robot_description = "robot_description: Mir100";
    serial_number = "serial_number: 567A359";
    ip_address = "ip_address: 169.254.5.180";
    firmware_version ="firmware_version: 3.5.8";
    robot_info_pub = nh -> advertise<robotinfo_msgs::RobotInfo10Fields>("robot_info", 1000);
}

void RobotInfo::publish_data(){
    rob_inf.data_field_01 = robot_description;
    rob_inf.data_field_02 = serial_number;
    rob_inf.data_field_03 = ip_address;
    rob_inf.data_field_04 = firmware_version;
    robot_info_pub.publish(rob_inf);
} 