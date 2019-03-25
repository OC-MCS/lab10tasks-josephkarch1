#include <iostream>
#include <string>
#include "TeamLeader.h"
#include "Employee.h"

using namespace std;

TeamLeader::TeamLeader() : Employee()
{
	annualBonus = 0.0;
	annualSalary = 0.0;
}

TeamLeader::TeamLeader(double annualBonus1, double annualSalary1)
{
	annualBonus = annualBonus1;
	annualSalary = annualSalary1;
}

double TeamLeader::getAnnualSalary()
{
	return annualSalary;
}

double TeamLeader::getAnnualBonus()
{
	return annualBonus;
}
void TeamLeader::setAnnualBonus(double annualBonus1)
{
	annualBonus = annualBonus1;
}
void TeamLeader::setAnnualSalary(double annualSalary1)
{
	annualSalary = annualSalary1;
}


