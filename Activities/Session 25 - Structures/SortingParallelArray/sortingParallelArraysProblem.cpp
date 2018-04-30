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
void display(double avgWindSpeeds[MONTHS], string monthNames[MONTHS], int size);
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

	// Display the Unsorted Parallel Arrays


	// Sort The Parallel Arrays


	// Display the Sorted Parallel Arrays


    pause(); // Pause the console
    return 0;
}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n\nPress enter to continue....";
	cin.ignore().get();
}

// Sort the Parallel arrays
void bubbleSort(double avgWindSpeeds[MONTHS], string monthNames[MONTHS], int size)
{

}

// Display the Parallel Arrays
void display(double avgWindSpeeds[MONTHS], string monthNames[MONTHS], int size)
{
	// Set Output Format


	// Display a table of the parallel arrays

}

// Swap the first floating point number with the second
void swap(double & first, double & second)
{

}

// Swap the first string with the second
void swap(string & first, string & second)
{

}
