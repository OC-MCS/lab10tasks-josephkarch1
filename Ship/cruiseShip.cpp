#include "ship.h"
#include "cruiseShip.h"
#include <iostream>
#include <string>
using namespace std;


cruiseShip::cruiseShip(int maxPassengers1, string shipName1, string yearConstructed1) : ship (shipName1, yearConstructed1)
{
	maxPassengers = maxPassengers1;
}

int cruiseShip::getMaxPassengers()
{
	return maxPassengers;
}

void cruiseShip::setMaxPassengers(int maxPassengers1)
{
	maxPassengers = maxPassengers1;
}

void cruiseShip::print() const
{
	cout << maxPassengers;
	cout << " ";
	cout << getShipName();
}