#include "robot_info/robot_info_class.h"
#include "ros/init.h"
#include "ros/ros.h"
#include "robot_info/agv_robot_info_class.h"
AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *node_handle){
    nh = node_handle;
    pub = nh->advertise<robot_info::info>("robot_info",1000);
}

void AGVRobotInfo::publish_data(){
    robot_info::info Info_msg;
    Info_msg.robot_description = robot_description;
    Info_msg.serial_number = serial_number;
    Info_msg.ip_address = ip_address;
    Info_msg.firmware_version = firmware_version;
    Info_msg.maximum_payload = maximum_payload;
    Info_msg.hydraulic_oil_temperature = monitor.hydraulic_oil_temperature;
    Info_msg.hydraulic_oil_tank_fill_level = monitor.hydraulic_oil_tank_fill_level;
    Info_msg.hydraulic_oil_pressure = monitor.hydraulic_oil_pressure;
    ROS_INFO("Publishing AGV details");
    while(ros::ok()){
     pub.publish(Info_msg);
     ros::spinOnce();
    }
   
    //publish the robot info
    
}