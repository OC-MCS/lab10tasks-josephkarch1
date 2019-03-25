#include "FuelGauge.h"
#include <iostream>
using namespace std;

FuelGauge::FuelGauge()
{
	fuelAmount = 0;
}

FuelGauge::FuelGauge(double fuelAmount1)
{
	fuelAmount = fuelAmount1;
}

void FuelGauge::addFuel()
{
	if (fuelAmount < 15)
	{
		fuelAmount++;
	}
	else
	{
		cout << "Tank is full!" << endl;
	}
	
}

void FuelGauge::subtractFuel()
{
	if (fuelAmount > 0)
	{
		fuelAmount--;
	}

	else
	{
		cout << "Tank is empty!" << endl;
	}

}

double FuelGauge::getFuelAmount()
{
	return fuelAmount;
}


