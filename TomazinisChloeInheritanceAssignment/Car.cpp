#include "Car.h"
#include <iostream>

using namespace std;

//constructor
Car::Car(int numberOfDoors, string manufacturer, int yearBuilt)
{
	set_numberOfDoors(numberOfDoors);
	set_manufacturer(manufacturer);
	set_yearManufactured(yearBuilt);	
}

//method
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of Doors:  " << get_numberOfDoors() << endl;
}

//getters and setters
int Car::get_numberOfDoors()
{
	return _numberOfDoors;
}

void Car::set_numberOfDoors(int numberOfDoors)
{
	_numberOfDoors = numberOfDoors;
}
