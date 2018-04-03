/******************************
   Name: Mohamed Rahaman
   Date: September 09, 2017
   File: crateCost.cpp
   Description: Get dimensions of a crate from user and calculate
				volume of crate and then the cost.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <sstream>			// To convert a double to a string
using namespace std;

// Global variables
const double COST_PER_CUBIC_FOOT = 0.23;
const double CHARAGE_PER_CUBIC_FOOT = 1.75;

int main()
{
	double  length,			// the crates length
			width,			// the crates width
			height,			// the crates hight
			volume,			// the volume of the crate
			cost,			// cost to build the crate
			charge,			// the charge to the customer
			profit;			// the profit mad for the sale
	string customerName;	// full name of the customer

	// Set the desired output formatting for numbers
	cout << fixed << setprecision(2) << showpoint;

	// Get user name
	cout << "Enter your full name: ";
	getline(cin, customerName);

	// Get the crate dimensions
	cout << "Enter the dimesions of the crate (in feet)\n";
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;

	// Calculate volume, cost, charge, and profit
	volume = length * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARAGE_PER_CUBIC_FOOT;
	profit = charge - cost;

	// Dynamic spacing
	ostringstream ss;
	ss << fixed << setprecision(2) << showpoint;
	ss << charge;
	int chargeLength = ss.str().length();

	// Display the calculated data
	cout << endl;
	cout << "Information for customer " << customerName << endl;
	cout << "The volume of the crate is " << volume
		<< " cubic feet.\n\n";

	// Table of data
	cout << setw(25) << "Cost to Build: $"
		<< setw(chargeLength) << cost << endl;
	cout << setw(25) << "Charge to customer: $"
		<< setw(chargeLength) << charge << endl;
	cout << setw(25) << "Profit: $"
		<< setw(chargeLength) << profit << endl;

	//	Make sure we place the end message on a new line
    cout << endl;

	//	The following is system dependent.  It will only work on Windows
    system("PAUSE");

	// A non-system dependent method is below
	// cout << "Press any key to continue";
	// cin.get();

    return 0;
}
