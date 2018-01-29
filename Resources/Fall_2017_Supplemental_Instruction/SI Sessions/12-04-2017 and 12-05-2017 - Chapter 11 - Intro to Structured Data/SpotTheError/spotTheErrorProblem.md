# Find All of the Errors: Structures

```c++
// This program demonstrates the use of structures.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function declarations
void pause();

struct payRoll
{
    int empNumber;      // Employee number
    string name;        // Employee's name
    double hours;       // Hours worked
    double payRate;     // Hourly payRate
    double grossPay;    // Gross pay
}

int main()
{
    PayRoll employee; // employee is a PayRoll structure.

    // Get the employee's number.
    cout << "Enter the employee's number: ";
    cin >> employee,empNumber;

    // Get the employee's name.
    cout << "Enter the employee's name: ";
    getline(cin, employee.name);

    // Get the hours worked by the employee.
    cout << "How many hours did the employee work? ";
    cin >> employee,hours;

    // Get the employee's hourly pay rate.
    cout << "What is the employee's hourly payRate? ";
    cin >> employee,payRate;

    // Calculate the employee's gross pay.
    employee,grossPay = employee,hours * employee,payRate;

    // Display the employee data.
    cout << "Here is the employee's payroll data:\n"
         << "Name: " << employee.name << endl
         << "Number: " << employee.empNumber << endl;
         << "Hours worked: " << employee.hours << endl
         << "Hourly payRate: " << employee.payRate << endl
         << fixed << showpoint << setprecision(2)
         << "Gross Pay: $" << employee.grossPay << endl;

    pause();
}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n\nPress enter to continue....";
	cin.ignore().get();
}
```
