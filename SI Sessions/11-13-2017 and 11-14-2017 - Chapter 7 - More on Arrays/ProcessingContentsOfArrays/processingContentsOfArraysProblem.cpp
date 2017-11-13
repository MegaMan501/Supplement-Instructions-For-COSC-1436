// This program stores, in an array, the hours worked by
// employees who all make the same hourly wage.
#include <iostream>
#include <iomanip>
using namespace std;

// Function Declaration
void pause();

int main()
{
    const int NUM_EMPLOYEES = 5;                //Number of employees
    int hours[NUM_EMPLOYEES];                   //Array to hold hours
    double payrate;                             //Hourly pay rate
    double grossPay;                            //To hold the gross pay

    // Input the hours worked.

    // Input the hourly rate for all employees.

    // Display each employee's gross pay.

    pause();
    return 0;
}

// Pause the console
void pause()
{
	cout << "\nPress any key to continue....";
	cin.ignore().get();
}
