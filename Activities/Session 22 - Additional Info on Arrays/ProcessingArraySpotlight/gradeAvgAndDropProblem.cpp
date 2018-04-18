// This program gets a series of test scores and
// calculates the average of the scores with the
// lowest score dropped.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void pause();
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4;         // Array size

    double testScores[SIZE],    // Array of test scores
           total,               // Total of the scores
           lowestScore,         // Lowest test score
           average;             // Average test score

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // Get the test scores from the user.

    // Get the total of the test scores.
   
    // Get the lowest test score.
   
    // Subtract the lowest score from the total.
   
    // Calculate the average. Divide by 3 because
    // the lowest test score was dropped.
   
    // Display the average.
    cout << "The average with the lowest score "
        << "dropped is " << average << ".\n";

    pause();
    return 0;
}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n\nPress enter to continue....";
	cin.ignore().get();
}

//***********************************************************
// The getTestScores function accepts an array and its size *
// as arguments. It prompts the user to enter test scores,  *
// which are stored in the array.                           *
//***********************************************************
void getTestScores(double scores[], int size)
{

}

//*****************************************************
// The getTotal function accepts a double array       *
// and its size as arguments. The sum of the array's  *
// elements is returned as a double.                  *
//*****************************************************
double getTotal(const double numbers[], int size)
{

}

//*****************************************************
// The getLowest function accepts a double array and  *
// its size as arguments. The lowest value in the     *
// array is returned as a double.                     *
//*****************************************************
double getLowest(const double numbers[], int size)
{

}
