// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global Variables
const double CONVERSION_FACTOR = 0.621371;

// Functions
bool isNegative(int num);
void pause();

int main()
{
	bool status = true;
	int hours = 0,
	    speed = 0;
	double distanceImperial = 0.0,
	       distanceMetric = 0.0;

	do
	{
		cout << "What is the speed of the vehicle in mph? (As integer): ";
		cin >> speed;
		status = isNegative(speed);
	} while(status);

	do
	{
		cout << "How many hours has it traveled? (As integer): ";
		cin >> hours;
		status = isNegative(hours);
	} while(status);

	cout << fixed << showpoint << setprecision(2);

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

bool isNegative(int num)
{
	if (num < 0)
	{
		cout << "Error, " << num << " is negative.\n";
		return true;
	}

	return false;
}

void pause()
{
	cout << "\n\nPress any key to continue....";
	cin.ignore().get();
}
