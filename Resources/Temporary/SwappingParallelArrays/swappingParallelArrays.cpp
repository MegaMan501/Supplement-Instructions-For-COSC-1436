/******************************
This code demostrates how to swap variables
********************************/
// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Function declarations
void pause();
void swap(double & first, double & second);
void swap(string & first, string & second);

int main()
{
	const int MONTHS = 12;
	double avgWindSpeeds[MONTHS] = { 5.0, 16.2, 11.5, 0.2
                                    35.3, 8.5, 23.1, 15.2
                                    17.5, 60.34, 86.24, 34.3 };
	string monthNames[MONTHS] = { January, February, March
                                  April, May, June
                                  July, August, September
                                  October, November, December};


	// Pause the console
    pause();

    return 0;
}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n\nPress enter to continue....";
	cin.ignore().get();
}

// Swap the first floating point number with the second
void swap(double & first, double & second)
{
}

// Swap the first string with the second
void swap(string & first, string & second)
{
}
