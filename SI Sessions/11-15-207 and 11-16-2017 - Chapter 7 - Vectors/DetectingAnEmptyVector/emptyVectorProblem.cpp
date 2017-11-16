// This program demonstrates the vector's empty member function.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<double>);
void pause();

int main()
{
    vector<double> values;  // A vector to hold values
    int numValues;          // The number of values
    double average;         // To hold the average

    // Prompt user, then validate their input
    do
    {
        // Get the number of values to averge.

    } while(/*Your test goes here.*/);

    // Get the values and store them in the vector.
    for ()
    {

    }

    // Set output formating
    cout << fixed << showpoint << setprecision(2);

    // Get the average of the values and display it.


    pause();
    return 0;
}

//*************************************************************
// Definition of function avgVector.                          *
// This function accepts an int vector as its argument. If    *
// the vector contains values, the function returns the       *
// average of those values. Otherwise, an error message is    *
// displayed and the function returns 0.0.                    *
//*************************************************************
double avgVector(vector<double> vect)
{
    int total = 0;    // accumulator
    double avg;       // average

    // Determine if the vector is empty
    if (vect.empty())
    {
        // Display that there are no values to average.
        // Then return a value.

    }

    // Use a loop to accumulate the total


    // Calculate the averge


    return avg;
}

// Pause the console
void pause()
{
	cout << "\n\nPress any key to continue....";
	cin.ignore().get();
}
