#pragma once
#include "Vehicle.h"

class Car :
    public Vehicle//inherit vehicle class 
{
private:
    int _numberOfDoors;

public:
    Car(int numberOfDoors, std::string manufacturer, int yearBuilt);
    void displayInfo();
    int get_numberOfDoors();
    void set_numberOfDoors(int numberOfDoors);
};

