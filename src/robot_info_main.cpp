#include "robot_info/robot_info_class.h"
#include "ros/node_handle.h"

int main(int argc, char ** argv){
    ros::init(argc,argv,"robot_info");
    ros::NodeHandle nh;
    RobotInfo robot_info(&nh);
    robot_info.publish_data();
    ros::spin();

}