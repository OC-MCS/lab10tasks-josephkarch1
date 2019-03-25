#include <iostream>
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"

#pragma once

class TeamLeader : public Employee
{
public:
	double annualSalary;
	double annualBonus;

	TeamLeader();
	TeamLeader(double annualBonus1, double annualSalary1);
	double getAnnualSalary();
	double getAnnualBonus();
	void setAnnualBonus(double annualBonus1);
	void setAnnualSalary(double annualSalary1);
};

