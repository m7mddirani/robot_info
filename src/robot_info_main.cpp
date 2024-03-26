#include <robot_info/robot_info_class.h>
#include "ros/init.h"
#include "ros/node_handle.h"
#include "ros/rate.h"
#include "ros/ros.h"
#include <robotinfo_msgs/RobotInfo10Fields.h>

int main(int argc, char** argv){

    ros::init(argc,argv,"robot_info_node");
    ros::NodeHandle nh;
    ros::Rate r(1);
    while (ros::ok()) {
        RobotInfo rob = RobotInfo(&nh);
        rob.publish_data();
        ros::spinOnce();
        r.sleep();
    }
    return 0;
}