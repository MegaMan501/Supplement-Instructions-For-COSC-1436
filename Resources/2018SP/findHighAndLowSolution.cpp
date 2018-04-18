// Finding the Highest and Lowest Values in a Numeric Array
#include <iostream>
using namespace std; 

// Global Variables
const int SIZE = 10;

// Function Declarations
double getHighest(double pts[], int size); 
double getLowest(double pts[], int size);
void showValues(double highest, double lowest); 

int main()
{
	double points[SIZE] = { 23.12, 343.12, 21.23, 12.23, 2.56,	
							7.3, 15.65, 80, 207.1, 150.4 };
	
	// Get the Highest and Lowest values
	double highest = getHighest(points, SIZE); 
	double lowest = getLowest(points, SIZE); 
	
	// Display the Highest and the Lowest
	showValues(highest, lowest); 

	// Pause the console
	cout << endl; 
	system("PAUSE"); 
	return 0; 
}

// Find the highest point in the array
double getHighest(double pts[], int size)
{
	double highest = pts[0];
	
	for (int i = 0; i < size; i++)
	{
		if (highest < pts[i])
			highest = pts[i];
	}

	return highest;
}

// Find the Lowest point in the array
double getLowest(double pts[], int size)
{
	double lowest = pts[0];

	for (int i = 0; i < size; i++)
	{
		if (lowest > pts[i])
			lowest = pts[i];
	}

	return lowest;
}

// Display the Highest and the Lowest
void showValues(double highest, double lowest)
{
	cout << "The highest value in the points array is " << highest << endl
		<< "The lowest value in the points array is " << lowest << endl;
}
