#include <iostream>
#include <string>
#include "ProductionWorker.h"
#include "Employee.h"
#include "TeamLeader.h"

using namespace std;

int main()
{
	ProductionWorker bob;
	ProductionWorker jimmy(2,13.50);
	TeamLeader tommy(10000.00, 50000.00);

	bob.setEmployeeNumber("12345");
	bob.setHiringDate("3/11/2019");
	bob.setName("Robert Smith");
	bob.setRate(12.50);
	bob.setShift(1);

	cout << "Example 1: Robert Smith" << endl;
	cout << bob.getEmployeeNumber() << endl;
	cout << bob.getHiringDate() << endl;
	cout << bob.getName() << endl;
	cout << "$" << bob.getRate() << endl;
	cout << bob.getShift() << endl;
	cout << endl;

	jimmy.setEmployeeNumber("54321");
	jimmy.setHiringDate("3/25/2019");
	jimmy.setName("James Jones");

	cout << "Example 2: James Jones" << endl;
	cout << jimmy.getEmployeeNumber() << endl;
	cout << jimmy.getHiringDate() << endl;
	cout << jimmy.getName() << endl;
	cout << "$" << jimmy.getRate() << endl;
	cout << jimmy.getShift() << endl;
	cout << endl;

	
	tommy.setEmployeeNumber("000000");
	tommy.setHiringDate("2/14/2019");
	tommy.setName("Tommy Tommyson");

	cout << "Example 3: Tommy Tommyson" << endl;
	cout << tommy.getEmployeeNumber() << endl;
	cout << tommy.getHiringDate() << endl;
	cout << tommy.getName() << endl;
	cout << "annual bonus is $" << tommy.getAnnualBonus() << endl;
	cout << "annual salary is $" << tommy.getAnnualSalary() << endl;


	return 0; 
}