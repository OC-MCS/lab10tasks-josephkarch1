#include "Odometer.h" 
#include <iostream>
using namespace std;

Odometer::Odometer()
{
	mileage = 0;
}

Odometer::Odometer(double mileage2)
{
	mileage = mileage2;
}

void Odometer::addMileage()
{
	if (mileage < 999999)
	{
		mileage++;
	}

	else
	{
		cout << "Mileage has exceeded the limit: 999,999 miles!" << endl;
	}
}

double Odometer::getMileage()
{
	return mileage;

}