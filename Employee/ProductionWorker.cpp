#include <iostream>
#include <string>
#include "ProductionWorker.h"

using namespace std;


ProductionWorker::ProductionWorker() : Employee()
{
	shift = 0;
	hourlyRate = 0.0;
}

ProductionWorker::ProductionWorker(int shift1, double rate1) : Employee()
{
	shift = shift1;
	hourlyRate = rate1;
}

void ProductionWorker::setRate(double rate1)
{
	hourlyRate = rate1;
}

double ProductionWorker::getRate()
{
	return hourlyRate;
}

void ProductionWorker::setShift(int shift1)
{
	shift = shift1;
}

string ProductionWorker::getShift()
{
	string returnString;

	if (shift == 1)
	{
		returnString = "day shift";
	}

	else if (shift == 2)
	{
		returnString = "night shift";
	}

	return returnString;
}




