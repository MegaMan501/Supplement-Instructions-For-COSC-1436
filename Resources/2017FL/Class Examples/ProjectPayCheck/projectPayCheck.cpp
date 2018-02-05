/******************************
   Name: Mohamed Rahaman
   Date: September 28, 2017
   File: projectPayCheck.cpp
   Description: Calculate the
   gross pay based on hourly
   rate and hours worked.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Global variables
const double REGULAR_TIME_MAX = 40.0;	// max hours before overtime
const double OVERTIME_FACTOR = 1.5;		// multipler on over time

// Function declarations
string getEmployeeName();
double getHoursWorked();
double getHourlyWage();
double calculateRegTimeWage(double totalHoursWorked,
							double hourlyWage,
							double regTimeMax);
double calculateOverTimeWage(double totalHoursWorked,
							 double hourlyWage,
							 double regTimeMax,
							 double otFactor);
double calculateTotalWage(double totalHoursWorked,
						  double hourlyWage,
						  double regTimeMax,
						  double otFactor);

int main()
{
	string employeeName;	// name of the employee
	double hourlyWage;		// what do we make per an hour
	double hoursWorked;		// How many hours employee worked
	double totalWage;		// total wage

	// Get the name of the employee
	employeeName = getEmployeeName();

	// Get the hourly wage
	cout << endl;
	hourlyWage = getHourlyWage();

	// Get the number of hours worked per a week
	cout << endl;
	hoursWorked = getHoursWorked();

	// Get the total wage
	totalWage = calculateTotalWage(hoursWorked, hourlyWage,
									REGULAR_TIME_MAX, OVERTIME_FACTOR);

	// Print our report
	cout << "\n\nPaycheck Report:\n";
	cout << "Employee: " << employeeName << endl;
	cout << "Hourly Wage: " << hourlyWage << endl;
	cout << "Total Hours worked this month: " << hoursWorked << endl;
	cout << "Total salary for this week: $" << totalWage << endl;

	//	Make sure we place the end message on a new line
    cout << endl;

	//	The following is system dependent.  It will only work on Windows
    system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
    return 0;
}

// Gets the name of the employee from the user
string getEmployeeName()
{
	string name = "";	// Name input from user
	cout << "Enter the name of the employee: ";
	getline(cin, name);

	return name;
}

// Get the hours worked from the user
double getHoursWorked()
{
	double hours = 0.0;	// Hours input from user
	cout << "Enter the total hours worked: ";
	cin >> hours;

	return static_cast<double>(hours);
}

// Get the hourly wage from the user
double getHourlyWage()
{
	double wage = 0.0;		// Hourly wage
	cout << "Enter the hourly wage: ";
	cin >> wage;

	return static_cast<double>(wage);
}

// Calculate regular wage
double calculateRegTimeWage(double totalHoursWorked, double hourlyWage, double regTimeMax)
{
	if (totalHoursWorked > regTimeMax)
	{
		return regTimeMax * regTimeMax;
	}
	else
	{
		return hourlyWage * totalHoursWorked;
	}
}

// Calculate pay for time over REGTIME_MAX
double calculateOverTimeWage(double totalHoursWorked, double hourlyWage, double regTimeMax, double otFactor)
{
	if (totalHoursWorked > regTimeMax)
	{
		return (totalHoursWorked - regTimeMax) * hourlyWage * otFactor;
	}
	else
	{
		return 0.0;
	}
}

// Calculates the total wage from regular time
// and overtime
double calculateTotalWage(double totalHoursWorked, double hourlyWage, double regTimeMax, double otFactor)
{
	return  calculateRegTimeWage(totalHoursWorked,hourlyWage, REGULAR_TIME_MAX) +
		calculateOverTimeWage(totalHoursWorked, hourlyWage, REGULAR_TIME_MAX, otFactor);
}
