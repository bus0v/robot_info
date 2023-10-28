#pragma once
#include "robot_info/info.h"
#include <ros/ros.h>
#include <string.h>

using namespace std;

class RobotInfo {
    public:
        RobotInfo(){};
        RobotInfo(ros::NodeHandle *node_handle);
        virtual void publish_data();
        
    protected:
        ros::Publisher pub;
        ros::NodeHandle *nh;
        string robot_description = "Mir100";
        string serial_number = "567A359";
        string ip_address = "169.254.5.180";
        string firmware_version = "3.5.8";
        
};