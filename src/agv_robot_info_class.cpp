#include "ros/forwards.h"
#include "ros/node_handle.h"
#include "ros/publisher.h"
#include <robot_info/agv_robot_info_class.h>
#include <robotinfo_msgs/RobotInfo10Fields.h>
#include <ros/ros.h>

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *nohh) : RobotInfo(nohh) {
  maximum_payload = "maximum_payload: 100 Kg";
  hsm.put("hydraulic_oil_temperature: 45C",
          "hydraulic_oil_tank_fill_level: 100%",
          "hydraulic_oil_pressure: 250 bar");
  AGVRobotInfo::publish_data();
}

void AGVRobotInfo::publish_data() {
  rob_inf.data_field_01 = robot_description;
  rob_inf.data_field_02 = serial_number;
  rob_inf.data_field_03 = ip_address;
  rob_inf.data_field_04 = firmware_version;
  rob_inf.data_field_05 = maximum_payload;
  rob_inf.data_field_06 = hsm.hydraulic_oil_temperature;
  rob_inf.data_field_07 = hsm.hydraulic_oil_tank_fill_level;
  rob_inf.data_field_08 = hsm.hydraulic_oil_pressure;
  robot_info_pub.publish(rob_inf);
}