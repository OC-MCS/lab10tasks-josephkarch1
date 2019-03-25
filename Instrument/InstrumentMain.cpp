#include "FuelGauge.h"
#include "Odometer.h"
#include <iostream>

using namespace std;

int main()
{
	FuelGauge NissanVersaFuelGague (0);
	Odometer NissanVersaOdometer(100000);
	

	cout << "Fuel Gague current amount: " << endl;
	cout << "Fuel Amount = " << NissanVersaFuelGague.getFuelAmount() << endl;
	cout << "Here is the current mileage: " << NissanVersaOdometer.getMileage() << endl;
	cout << endl;
	cout << "Adding Fuel!" << endl;
		
	for (int x = 0; x < 15; x++)
	{
		NissanVersaFuelGague.addFuel();
	}

	cout << "Fuel Gague current amount: " << endl;
	cout << "Fuel Amount = " << NissanVersaFuelGague.getFuelAmount() << endl;


	cout << endl;
	cout << "Burning all the fuel!" << endl;

	for (int y = 0; y < 361; y++)
	{
		
		if (y != 0)
		{
			if (y % 24 == 0)
			{
				NissanVersaFuelGague.subtractFuel();
				cout << "Used a Gallon of Fuel!" << endl;
				cout << "Current Mileage: " << NissanVersaOdometer.getMileage() << endl;
				cout << endl;
			}
		}
		NissanVersaOdometer.addMileage();
	}

	cout << "End of trip! " << endl;
	cout << "Fuel Gague current amount: " << endl;
	cout << "Fuel Amount = " << NissanVersaFuelGague.getFuelAmount() << endl;
	
	return 0;

}


