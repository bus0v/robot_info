#include <string.h>
#include <ros/ros.h>

using namespace std;
class HydraulicSystemMonitor{
    public:
        string hydraulic_oil_temperature ="45C";
        string hydraulic_oil_tank_fill_level = "100%";
        string hydraulic_oil_pressure = "250 bar";
        HydraulicSystemMonitor();

};