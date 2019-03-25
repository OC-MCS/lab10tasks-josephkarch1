#pragma once
#include <iostream>
#include<string>
using namespace std;

class Employee
{
public:
	Employee();

	string name;
	string employeeNumber;
	string hiringDate;
	
	string getName();
	void setName(string name1);
	string getEmployeeNumber();
	void setEmployeeNumber(string number1);
	string getHiringDate();
	void setHiringDate(string date1);

};

