#pragma once
#include <string>

class Vehicle
{
private:
	std::string _manufacturer;
	int _yearManufactured;

public:
	Vehicle();
	Vehicle(std::string manufacturer, int yearBuilt);
	void displayInfo();
	std::string get_manufacturer();
	void set_manufacturer(std::string manufacturerName);
	int get_yearManufactured();
	void set_yearManufactured(int yearManufactured);

};

