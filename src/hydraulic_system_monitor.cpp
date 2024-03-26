#include "ros/node_handle.h"
#include <ros/ros.h>
#include <string>
#include<robot_info/hydraulic_system_monitor.h>

void HydraulicSystemMonitor::put(std::string hydraulic_oil_temperature, std::string hydraulic_oil_tank_fill_level,std::string hydraulic_oil_pressure){
    this->hydraulic_oil_temperature = hydraulic_oil_temperature;
    this->hydraulic_oil_tank_fill_level = hydraulic_oil_tank_fill_level ;
    this->hydraulic_oil_pressure = hydraulic_oil_pressure;
}