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
        cout << "How many values do you wish to average? ";
        cin >> numValues;
    } while(numValues < 0.0);

    // Get the values and store them in the vector.
    for (int count = 0; count < numValues; count++)
    {
        double tempValue;
        cout << "Enter a value: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }

    // Set output formating
    cout << fixed << showpoint << setprecision(2);

    // Get the average of the values and display it.
    average = avgVector(values);
    cout << "Average: " << average << endl;

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
        cout << "No values to average.\n";
        return 0.0;
    }

    // Use a loop to accumulate the total
    for (int count = 0; count < vect.size(); count++)
        total += vect[count];

    // Calculate the averge
    avg = total / vect.size();

    return avg;
}

// Pause the console
void pause()
{
	cout << "\n\nPress any key to continue....";
	cin.ignore().get();
}
