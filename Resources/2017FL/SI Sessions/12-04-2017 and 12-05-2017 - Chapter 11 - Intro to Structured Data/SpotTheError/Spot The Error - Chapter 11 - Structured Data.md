# Spot The Error - Chapter 11 - Structured Data
Find all of the errors in the code below.

```c++
// This program demonstrates the use of structures.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function declarations
void pause();

struct PayRoll
{
    int empNumber;      // Employee number
    string name;        // Employee's name
    double hours;       // Hours worked
    double payRate;     // Hourly payRate
    double grossPay;    // Gross pay
};

int main()
{
    PayRoll employee; // employee is a PayRoll structure.

    // Get the employee's number.
    cout << "Enter the employee's number: ";
    cin >> employee.empNumber;

    // Get the employee's name.
    cout << "Enter the employee's name: ";
    cin.ignore();                           // To skip the remaining ‘\n' character
    getline(cin, employee.name);

    // Get the hours worked by the employee.
    cout << "How many hours did the employee work? ";
    cin >> employee.hours;

    // Get the employee's hourly pay rate.
    cout << "What is the employee's hourly payRate? ";
    cin >> employee.payRate;

    // Calculate the employee's gross pay.
    employee.grossPay = employee.hours * employee.payRate;

    // Display the employee data.
    cout << "Here is the employee's payroll data:\n"
         << "Name: " << employee.name << endl
         << "Number: " << employee.empNumber << endl
         << "Hours worked: " << employee.hours << endl
         << "Hourly payRate: " << employee.payRate << endl
         << fixed << showpoint << setprecision(2)
         << "Gross Pay: $" << employee.grossPay << endl;

    pause();
    return 0;
}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n\nPress enter to continue....";
	cin.ignore().get();
}
```
<!--
## Solution:
```c++
// This program demonstrates the use of structures.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function declarations
void pause();

struct payRoll //1 // Styling
{
    int empNumber;      // Employee number
    string name;        // Employee's name
    double hours;       // Hours worked
    double payRate;     // Hourly payRate
    double grossPay;    // Gross pay
} //2 //;

int main()
{
    PayRoll employee; // employee is a PayRoll structure.

    // Get the employee's number.
    cout << "Enter the employee's number: ";
    cin >> employee,empNumber; //3

    // Get the employee's name.
    cout << "Enter the employee's name: ";
                                            //4 //cin.ignore(); // To skip the remaining ‘\n' character
    getline(cin, employeename);

    // Get the hours worked by the employee.
    cout << "How many hours did the employee work? ";
    cin >> employee,hours; //5

    // Get the employee's hourly pay rate.
    cout << "What is the employee's hourly payRate? ";
    cin >> employee,payRate; //6

    // Calculate the employee's gross pay.
    employee,grossPay = employee,hours * employee,payRate; //8

    // Display the employee data.
    cout << "Here is the employee's payroll data:\n"
         << "Name: " << employee.name << endl
         << "Number: " << employee.empNumber << endl; //9
         << "Hours worked: " << employee.hours << endl
         << "Hourly payRate: " << employee.payRate << endl
         << fixed << showpoint << setprecision(2)
         << "Gross Pay: $" << employee.grossPay << endl;

    pause();
    //10 //return 0;
}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n\nPress enter to continue....";
	cin.ignore().get();
}
```
-->
