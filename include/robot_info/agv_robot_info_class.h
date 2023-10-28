#pragma once
#include "robot_info/robot_info_class.h"
#include "robot_info/hydraulic_system_monitor.h"
#include <ros/ros.h>
#include <string.h>
using namespace std;
class AGVRobotInfo: public RobotInfo{
    public:
        string maximum_payload = "100kg";
        void publish_data();
        AGVRobotInfo(ros::NodeHandle *node_handle);
        HydraulicSystemMonitor monitor;

};