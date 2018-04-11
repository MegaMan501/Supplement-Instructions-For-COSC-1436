/*
* This program prompts the user to enter a number of scores.
* Then the program will display back to the user the average,
* minimum, and maximum scores.
* When calcualating the average the min and max scores will
* be subtracted from the sum of all of the scores and then
* divided by the number of scores minus two.
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global Variables
const int NUM_SCORES = 6;               // The number of scores we want to hold.
const double MIN_VALUE = 0.0;           // The minimum value for scores.
const double MAX_VALUE = 100.0;         // The maximum value for scores.

// Function Declarations
void getScores(double scores[]);
void calcScoreAndDisplay(double scores[]);
double getLowest(double scores[]);
double getHighest(double scores[]);
void pause();

int main()
{
    double scores[/*What goes here?*/];         // An Array of Scores

    getScores(/*What goes here?*/);             // Get Scores
    calcScoreAndDisplay(/*What goes here?*/);   // Calculate Scores and Display them

    pause();                                    // Pauses the console
    return 0;
}

// Get user's input and store the value in the array.
void getScores(double scores[])
{
    // Iterate through all of the scores
    for (/*What goes here?*/)
    {
        // Prompt user to enter the score


        // Input Validation for min and max value
        while(/*What goes here?*/)
        {
            // Display Error message, then get user's input.

        }
    }
}

void calcScoreAndDisplay(double scores[])
{
    // Declare variable for lowest score and assign it a the lowest score
    // Declare variable for highest score and assign it a the highest score
    // Accumulator for the sum of scores.
    // Holds the average of the scores minus the high and low score.

    // Sum all of the values
    for (/*What goes here?*/)
    {
        // Sum all of the values using a combined operator
    }

    // Calculate the average of the number of scores minus two
    average = (/*What goes here?*/) / (/*What goes here?*/);

    // Set Output Formatting
    cout << fixed << showpoint << setprecision(2);
    cout << "\n-----------------------------------------\n";    // Header

    // Display all of the scores with a for loop
    for(/*What goes here?*/)
    {
        /*What goes here?*/
    }

    // Display the average, low, and high scores
    cout << "\n-----------------------------------------\n";    // Header

}

// Get the lowest score
double getLowest(double scores[])
{
    // Assign the lowest score to the first element

    // Loop through all of scores to find the lowest score
    for (/*What goes here?*/)
    {
        // Logic for finding the lowest score

    }

    // Return the lowest score

}

// Get the Highest score
double getHighest(double scores[])
{
    // Assign the highest score to the first element

    // Loop through all of scores to find the highest score
    for (/*What goes here?*/)
    {
        // Logic for finding the lowest score

    }

    // Return the highest score

}

// Pause the console
void pause()
{
	cout << "\nPress any key to continue....";
	cin.ignore().get();
}
