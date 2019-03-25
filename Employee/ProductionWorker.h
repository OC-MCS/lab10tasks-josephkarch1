#include <iostream>
#include <string>
#include"Employee.h"
#pragma once

using namespace std;

class ProductionWorker : public Employee
{

public:
	ProductionWorker();
	ProductionWorker(int shift1, double rate1);
	int shift;
	double hourlyRate;

	void setRate(double rate1);
	double getRate();
	void setShift(int shift1);
	string getShift();
};

