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
    double scores[NUM_SCORES];          // An Array of Scores

    getScores(scores);                  // Get Scores
    calcScoreAndDisplay(scores);        // Calculate Scores and Display them

    pause();                            // Pauses the console
    return 0;
}

// Get user's input and store the value in the array.
void getScores(double scores[])
{
    // Iterate through all of the scores
    for (int i = 0; i < NUM_SCORES; i++)
    {
        // Prompt user to enter the score
        cout << "Enter the " << (i + 1) << " score: ";
        cin >> scores[i];

        // Input Validation for min and max value
        while(scores[i] < MIN_VALUE || scores[i] > MAX_VALUE)
        {
            // Display Error message, then get user's input.
            cout << "Error! " << scores[i]
                << " must be between " << MIN_VALUE << " to " << MAX_VALUE
                << endl << "Please enter the " << (i + 1) << " again: ";
            cin >> scores[i];
        }
    }
}

void calcScoreAndDisplay(double scores[])
{
    double low = getLowest(scores),     // Declare variable for lowest score and assign it a the lowest score
        high = getHighest(scores),      // Declare variable for highest score and assign it a the highest score
        sum = 0.0,                      // Accumulator for the sum of scores.
        average = 0.0;                  // holds the average of the scores minus the high and low score

    // Sum all of the values
    for (int i = 0; i < NUM_SCORES; i++)
    {
        sum += scores[i];
    }

    // Calculate the average of the number of scores minus two
    average = (sum - low - high) / (NUM_SCORES - 2);

    // Set Output Formatting
    cout << fixed << showpoint << setprecision(2);
    cout << "\n-----------------------------------------\n";    // Header

    // Display all of the scores with a for loop
    for(int i = 0; i < (NUM_SCORES - 2); i++)
    {
        cout << "Score " << (i + 1) << ": " << right << scores[i] << endl;
    }

    // Display the average, low, and high scores
    cout << "\n-----------------------------------------\n";    // Header
    cout << "Average: " << right << average << endl;
    cout << "Lowest : " << right << low << endl;
    cout << "Highest: " << right << high << endl;
}

// Get the lowest score
double getLowest(double scores[])
{
    double lowestScore = scores[0];     // Assign the lowest score to the first element

    // Loop through all of scores to find the lowest score
    for ( int i = 0; i < NUM_SCORES; i++ )
    {
        // Logic for finding the lowest score
        if (scores[i] < lowestScore)
            lowestScore = scores[i];
    }

    // Return the lowest score
    return lowestScore;
}

// Get the Highest score
double getHighest(double scores[])
{
    double highestScore = scores[0];    // Assign the highest score to the first element

    // Loop through all of scores to find the highest score
    for ( int i = 0; i < NUM_SCORES; i++ )
    {
        // Logic for finding the lowest score
        if (scores[i] > highestScore)
            highestScore = scores[i];
    }

    // Return the highest score
    return highestScore;
}

// Pause the console
void pause()
{
	cout << "\nPress any key to continue....";
	cin.ignore().get();
}
