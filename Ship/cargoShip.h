#pragma once
#include <iostream>
#include <string>
#include "ship.h"
#include "cruiseShip.h"

class cargoShip : public ship
{
public:
	int cargoCapacity;
	cargoShip(int cargoCapacity1, string shipName1, string yearConstructed1);
	int getCargoCapacity();
	void setCargoCapacity(int cargoCapacity1);
	virtual void print() const;
};
