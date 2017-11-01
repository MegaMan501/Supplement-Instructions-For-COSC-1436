/*******************************************************************************************************
    Distance Traveled
    ==========================================================================================
    The distance a vehicle travels can be calculated as follows:

    distance = speed * time

    For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
    120 miles.

    Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
    many hours it has traveled. The program should then use a loop to display the distance the
    vehicle has traveled for each hour of that time period. Here is an example of the output:

    What is the speed of the vehicle in mph? 40
    How many hours has it traveled? 3

		Hour	Distance Traveled			Kilometers
	-----------------------------------------------------------
    	1      	 40 miles  				64.3738 kilometers
    	2      	 80 miles  				128.748 kilometers
    	3   	 120 miles  			193.121 kilometers

    Input Validation: Do not accept a negative number for speed and do not accept any
    value less than 1 for time traveled.
*******************************************************************************************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global variables
const double CONVERSION_FACTOR = 0.621371;

// Function declarations
bool isNegative(int num);
void pause();

int main()
{
	bool status = true;				// Sentinel value for do-while loop as a bool
	int hours = 0,					// Holds time in hours
		speed = 0;					// Holds speed in mph
	double distanceImperial = 0.0,	// Holds distance in imperial
		   distanceMetric = 0.0;	// Holds distance in metric

	// Use do-while loop to get user's input and validate for speed
	do
	{
		cout << "What is the speed of the vehicle in mph? (As integer): ";
		cin >> speed;
		status = isNegative(speed);
	} while(status);

	// Use do-while loop to get user's input and validate for hours
	do
	{
		cout << "How many hours has it traveled? (As integer): ";
		cin >> hours;
		status = isNegative(hours);
	} while(status);

	// Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

	// Output the table
	cout << "\nHour\t\tMiles Traveled\t\tKilometers Traveled"
		 << "\n-------------------------------------------------------------------\n";
	for (int i = 1; i <= hours; i++)
	{
		// Calcuation for distance in imperial
		distanceImperial = static_cast<double>(speed) * static_cast<double>(i);

		// Calcuation for distance in metric
		distanceMetric = distanceImperial / CONVERSION_FACTOR;

		cout << i << "\t\t" << distanceImperial << " miles\t\t" << distanceMetric << " kilometers" << endl;
	}

	pause();
    return 0;
}

// Validation of number
bool isNegative(int num)
{
	if (num < 0)
	{
		cout << "Error, " << num << " is negative.\n";
		return true;
	}

	return false;
}

// A non-system dependent method is below
void pause()
{
	cout << "\n\nPress any key to continue....";
	cin.get();
}
