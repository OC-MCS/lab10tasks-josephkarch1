#pragma once

using namespace std;

class Odometer
{
public:
	Odometer();
	Odometer(double mileage2);
	double getMileage();
	void addMileage();

private:
	double mileage;
};

