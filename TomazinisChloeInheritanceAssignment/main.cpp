/// Chloe Tomazinis 
/// CIS 1202.501
/// April 17th, 2024

#include <iostream>
#include <string>
#include "Car.h"
#include "Truck.h"


using namespace std;

//main method
int main()
{
	//local variables
	string localManufacturer;
	int localYearBuilt;
	int localNumberOfDoors;
	int localTowCapacity;
	string selection;
	string cont;

	//loop to make testing easier
	do
	{
		cout << "Do you want to enter in a Vehicle, Car, or Truck: ";
		cin >> selection;

		if (selection == "Vehicle" || selection == "vehicle")
		{
			cin.ignore();//ignore so doesn't skip

			cout << "Vehicle:" << endl;
			cout << "Vehicle Manufacturer: ";
			getline(cin, localManufacturer);
			cout << "Year Built:  ";
			cin >> localYearBuilt;
			Vehicle vehicle(localManufacturer, localYearBuilt);
			vehicle.displayInfo();
		}

		else if (selection == "Car" || selection == "car")
		{
			cin.ignore();//ignore so doesn't skip

			cout << "Car:  " << endl;
			cout << "Car Manufacturer:  ";
			getline(cin, localManufacturer);
			cout << "Year Built:  ";
			cin >> localYearBuilt;
			cout << "Number of Doors:  ";
			cin >> localNumberOfDoors;
			Car car(localNumberOfDoors, localManufacturer, localYearBuilt);
			car.displayInfo();
		}

		else if (selection == "Truck" || selection == "truck")
		{
			cin.ignore();//ignore so doesn't skip

			cout << "Truck:" << endl;
			cout << "Truck Manufacturer:  ";
			getline(cin, localManufacturer);
			cout << "Year Built:  ";
			cin >> localYearBuilt;
			cout << "Tow Capacity:  ";
			cin >> localTowCapacity;
			Truck truck(localTowCapacity, localManufacturer, localYearBuilt);
			truck.displayInfo();
		}

		cin.ignore();//ignore so doesn't skip
		cout << endl;//add a line between sets of info to make reading easier

		//quit if user wants to
		cout << "Enter another set of Information? (yes/no)  ";
		cin >> cont;
		
	} while (cont == "Yes" || cont == "yes");//loop until user wants to quit

}

