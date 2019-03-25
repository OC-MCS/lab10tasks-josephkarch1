#include "ship.h"
#include <iostream>
#include <string>
using namespace std;



ship::ship(string shipName1, string yearConstructed1)
{
	shipName = shipName1;
	yearConstructed = yearConstructed1;
}

string ship::getShipName() const
{
	return shipName;
}

string ship::getShipYearConstructed()
{
	return yearConstructed;
}

void ship::setShipName(string shipName1)
{
	shipName = shipName1;
}

void ship::setYearConstructed(string yearConstructed1)
{
	yearConstructed = yearConstructed1;
}

 void ship::print() const
{
	cout << shipName;
	cout << " ";
	cout << yearConstructed;
}

