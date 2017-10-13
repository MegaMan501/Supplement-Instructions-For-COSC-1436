/******************************
   Name: Mohamed Rahaman
   Date: 09/12/2017
   File: tempConvert.cpp
   Description: Ask for the date and the temperature in F
   and convert to C.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Global variables
const string MONTHS[] = {"Jan","Feb","Mar","Apr",
						 "May","Jun","Jul","Aug",
						 "Sep","Oct","Nov","Dec"};

void main()
{
	int month,		// month number ( 1 - Jan, 12 - Dec)
		day,		// day of the month (1 througth 31)
		year;		// current year
	double fahr,	// temp. in fahrenheit
		   celc;	// temp. in celcius

	// Get info from user
	cout << "What is the current year: ";
	cin >> year;
	cout << "What is the current month (1 - 12 for Jan-Dec): ";
	cin >> month;
	cout << "What is the current day (1 - 31): ";
	cin >> day;
	cout << "What is the current temperature in fahrenheit: ";
	cin >> fahr;

	// Convert fahrenheit to celcius
	celc = (5.0 / 9.0) * (fahr - 32.0);

	// Output the results
	cout << endl << endl;
	cout << "Date: " << MONTHS[month - 1] << " " << day
		 << ", " << year << endl;
	cout << "Fahrenheit: " << fahr << "\370" << "F\n";
	cout << "Celicus: " << celc << "\370" << "C\n";

	//	Make sure we place the end message on a new line
    cout << endl;

	//	The following is system dependent.  It will only work on Windows
    system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
    //return 0;
}
