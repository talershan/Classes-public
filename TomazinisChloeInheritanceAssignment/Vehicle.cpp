#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

//constructors
Vehicle::Vehicle()
{
	set_manufacturer("Guess");
	set_yearManufactured(1900);
}

Vehicle::Vehicle(string manufacturer, int yearBuilt)
{
	set_manufacturer(manufacturer);
	set_yearManufactured(yearBuilt);
}

//methods
void Vehicle::displayInfo()
{
	cout << "Manufacturer:  " << get_manufacturer() << endl;
	cout << "Year Built:  " << get_yearManufactured() << endl;
}

//getters and setters
std::string Vehicle::get_manufacturer()
{
	return _manufacturer;
}

void Vehicle::set_manufacturer(std::string manufacturerName)
{
	_manufacturer = manufacturerName;
}

int Vehicle::get_yearManufactured()
{
	return _yearManufactured;
}

void Vehicle::set_yearManufactured(int yearManufactured)
{
	_yearManufactured = yearManufactured;
}
