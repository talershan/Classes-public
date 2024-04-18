#pragma once
#include "Vehicle.h"

class Truck :
    public Vehicle//inherit vehicle class
{
private:
    int _towCapacity;
     
public:
    Truck(int towCapacity, std::string manufacturer, int yearBuilt);
    void displayInfo();
    void set_towCapcity(int towCapacity);
    int get_towCapcity();
};
