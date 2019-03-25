#pragma once
using namespace std;

class FuelGauge
{
public:
	FuelGauge();
	FuelGauge(double fuelAmount1);

	void addFuel();
	void subtractFuel();
	double getFuelAmount();

private:
	double fuelAmount;
};

