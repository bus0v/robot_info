#include "robot_info/robot_info_class.h"
#include "ros/init.h"
#include "ros/ros.h"



RobotInfo::RobotInfo(ros::NodeHandle *node_handle){
    nh = node_handle;
    //publish the robot info
    pub = nh->advertise<robot_info::info>("robot_info",1000);
    
    
}

void RobotInfo::publish_data(){
    robot_info::info Info_msg;
    
    Info_msg.robot_description = robot_description;
    Info_msg.serial_number = serial_number;
    Info_msg.ip_address = ip_address;
    Info_msg.firmware_version = firmware_version;
    ROS_INFO("publishing data");
    
    ROS_INFO("firmware data %s",Info_msg.firmware_version.c_str());
    while(ros::ok()){
     pub.publish(Info_msg);
     ros::spinOnce();
    }
}