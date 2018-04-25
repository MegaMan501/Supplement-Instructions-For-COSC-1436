// This program demonstrates the vector's empty member function.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<double>);

int main()
{
    vector<double> values;  // A vector to hold values
    int numValues;          // The number of values
    double average;         // To hold the average
    double tempValue;

    // Prompt user, then validate their input
    do
    {
        // Get the number of values to averge.
        cout << "How many values do you wish to average? ";
        cin >> numValues;
    } while(numValues < 0);

    // Get the values and store them in the vector.
    for (int i = 0; i < numValues; i++)
    {
        cout << "Enter a value: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }

    // Set output formating
    cout << fixed << showpoint << setprecision(2);

    // Get the average of the values and display it.
    average = avgVector(values);
    cout << "Average: " << average << endl;

    system("PAUSE");
    return 0;
}

//*************************************************************
// Definition of function avgVector.                          *
// This function accepts an double vector as its argument. If    *
// the vector contains values, the function returns the       *
// average of those values. Otherwise, an error message is    *
// displayed and the function returns 0.0.                    *
//*************************************************************
double avgVector(vector<double> vect)
{
    double total = 0;    // accumulator
    double avg;       // average

    // Determine if the vector is empty
    if (vect.empty())
    {
        // Display that there are no values to average.
        // Then return a value.
        cout << "No values to average.\n";
        return -1.0;
    }

    // Use a loop to accumulate the total
    for (int i = 0; i < vect.size(); i++)
        total += vect[i];

    // Calculate the averge
    avg = total / vect.size();

    return avg;
}
