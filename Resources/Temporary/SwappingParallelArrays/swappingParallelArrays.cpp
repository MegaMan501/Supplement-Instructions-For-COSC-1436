/******************************
This code demostrates how to swap variables
********************************/
// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global Variables
const int MONTHS = 12;

// Function declarations
void pause();
void bubbleSort(double avgWindSpeeds[MONTHS], string monthNames[MONTHS], int size);
void swap(double & first, double & second);
void swap(string & first, string & second);

int main()
{
	double avgWindSpeeds[MONTHS] = { 5.0, 16.2, 11.5, 0.2,
                                    35.3, 8.5, 23.1, 15.2,
                                    17.5, 60.34, 86.24, 34.3 };
	string monthNames[MONTHS] = { "January", "February", "March",
                                  "April", "May", "June",
                                  "July", "August", "September",
                                  "October", "November", "December"};
	string sortedMonthNames[MONTHS];

	for (int i = 0; i < MONTHS; i++)
		cout << left << avgWindSpeeds[i] << right << "\t" << monthNames[i] << endl;
	cout << endl;

	bubbleSort(avgWindSpeeds, monthNames, MONTHS);

	for (int i = 0; i < MONTHS; i++)
		cout << left << avgWindSpeeds[i] << right << "\t" << monthNames[i] << endl;

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

void bubbleSort(double avgWindSpeeds[MONTHS], string monthNames[MONTHS], int size)
{
	// Mr Atkinson's Bubble Sort
	bool didSwap;		// did we swap

	// Go through each element from size - 1 to element 1
	for (int i = 0; i < (size - 1); i++)
	{
		didSwap = false;

		// Check all the remaining element from 0 to i
		for (int j = 0; j < (size - 1); j++)
		{
			if (avgWindSpeeds[j] > avgWindSpeeds[j + 1])
			{
				swap(avgWindSpeeds[j], avgWindSpeeds[j + 1]);
				swap(monthNames[j], monthNames[j + 1]);
				didSwap = true;
			}

		} // end of inner loop
		if (!didSwap) break;	// get out here - we are done
	}	// end of the outer loop

	/*
	//Alternate Method
	bool didSwap;

	 do
	 {
	 	didSwap = false;
	 	for (int i = 0; i < (size - 1); i++)
	 	{
	 		if (avgWindSpeeds[i] < avgWindSpeeds[i + 1])
	 		{
	 			swap(avgWindSpeeds[i], avgWindSpeeds[i + 1]);
	 			swap(monthNames[i], monthNames[i+1]);
	 			didSwap = true;
	 		}
	 	}
	 } while (didSwap);
	*/
}

// Swap the first floating point number with the second
void swap(double & first, double & second)
{
	double temp = first;
	first = second;
	second = temp;
}

// Swap the first string with the second
void swap(string & first, string & second)
{
	string temp = first;
	first = second;
	second = temp;
}
