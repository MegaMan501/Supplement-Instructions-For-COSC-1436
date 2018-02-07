/******************************
	Mohamed Rahaman
	February 5, 2018
	TempConvert.cpp
	Ask for the date and temperature
	in F and convert to C.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global variables
const string MONTHS_NAMES[] = { "JAN","FEB","MAR","APR",
								"MAY","JUN","JUL","AUG",
								"SEP","OCT","NOV","DEC" };

int main()
{
	int month,			// month number from 1 through 12
		day,			// day of the month from 1 through 31
		year;			// the current year
	double fahrenheit,	// temperature in fahrenheit
		   celcius;		// temperature in celcius
    
	// Get User Input
	cout << "What is the current year: ";
	cin >> year; 
	cout << "What is the current month (1 - 12 for JAN - DEC): ";
	cin >> month; 
	cout << "What is the current date (1 - 31): ";
	cin >> day; 
	cout << "What is the current temperature in fahrenheit: ";
	cin >> fahrenheit; 
    
	// Convert fahrenheit to celcius
	celcius = (5.0 / 9.0) * (fahrenheit - 32.0);

	// Set output formatting 
	cout << fixed << showpoint << setprecision(2);

	// Output the results
	cout << endl << endl;
	cout << "Date: " << MONTHS_NAMES[month - 1] << " " << day
		<< ", " << year << endl;
	cout << "Fahrenheit: " << fahrenheit << "\370" << "F\n";
	cout << "Celicus: " << celcius << "\370" << "C\n";

	//	Make sure we place the end message on a new line
    cout << endl;

	//	The following is system dependent. It will only work on Windows
    system("PAUSE");

	/* 
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
    return 0;
}