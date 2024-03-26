#include "ros/node_handle.h"
#include <ros/ros.h>
#include <string>


class HydraulicSystemMonitor{

    public:
        HydraulicSystemMonitor(){};
        void put(std::string hydraulic_oil_temperature, std::string hydraulic_oil_tank_fill_level,std::string hydraulic_oil_pressure);
        std::string hydraulic_oil_temperature;
        std::string hydraulic_oil_tank_fill_level;
        std::string hydraulic_oil_pressure;
};