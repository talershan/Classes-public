#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;

//constructor
Truck::Truck(int towCapacity, string manufacturer, int yearBuilt)
{
	set_towCapcity(towCapacity);
	Vehicle::set_manufacturer(manufacturer);
	set_yearManufactured(yearBuilt);
}

//methods
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Tow Capacity: " << get_towCapcity() << endl;
}

//getters and setters
void Truck::set_towCapcity(int towCapacity)
{
	_towCapacity = towCapacity;
}

int Truck::get_towCapcity()
{
	return _towCapacity;
}
