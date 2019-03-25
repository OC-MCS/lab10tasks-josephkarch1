#include "ship.h"
#include "cruiseShip.h"
#include "cargoShip.h"
#include <iostream>
#include <string>

using namespace std;

cargoShip::cargoShip(int cargoCapacity1, string shipName1, string yearConstructed1) : ship(shipName1, yearConstructed1)
{
	cargoCapacity = cargoCapacity1;
}
int cargoShip::getCargoCapacity()
{
	return cargoCapacity;
}
void cargoShip::setCargoCapacity(int cargoCapacity1)
{
	cargoCapacity = cargoCapacity1;
}

void cargoShip::print() const
{
	cout << cargoCapacity;
	cout << " ";
	cout << getShipName();
	
}