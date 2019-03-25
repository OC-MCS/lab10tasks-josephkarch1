#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;



Employee::Employee()
{
	employeeNumber = " ";
	name = " ";
	hiringDate = " ";
}

 string Employee::getName()
{
	 return name;
}

 string Employee::getEmployeeNumber()
 {
	 return employeeNumber;
 }

 string Employee::getHiringDate()
 {
	 return hiringDate;
 }

 void Employee::setEmployeeNumber(string number1)
 {
	 employeeNumber = number1;
 }

 void Employee::setHiringDate(string date1)
 {
	 hiringDate = date1;
 }

 void Employee::setName(string name1)
 {
	 name = name1;
 }


