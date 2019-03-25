#pragma once
#include <iostream>
#include<string>
using namespace std;

class ship
{
public:
	string shipName;
	string yearConstructed;

	ship(string shipName1, string yearConstructed1);
	string getShipName() const;
	string getShipYearConstructed();
	void setShipName(string shipName1);
	void setYearConstructed(string yearConstructed1);
	virtual void print()const;
};


