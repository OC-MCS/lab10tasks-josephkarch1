#pragma once
#include <iostream>
#include <string>
#include "ship.h"

using namespace std;

class cruiseShip : public ship
{
public:
	int maxPassengers;
	cruiseShip(int maxPassengers1, string shipName1, string yearConstructed1);
	int getMaxPassengers();
	void setMaxPassengers(int maxPassengers1);
	virtual void print() const; 

};
