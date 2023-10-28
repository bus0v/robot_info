#include "robot_info/agv_robot_info_class.h"
#include "ros/node_handle.h"
#include <ros/ros.h>



int main(int argc, char **argv){
    ros::init(argc,argv,"agv_robot_info");
    ros::NodeHandle nh;
    AGVRobotInfo agv_info = AGVRobotInfo(&nh);
    agv_info.publish_data();
    ros::spin();
}