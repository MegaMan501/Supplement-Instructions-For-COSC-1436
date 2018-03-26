/*
	Write a program that asks the user for a positive integer value. The program should use
	a loop to get the sum of all the integers from 1 up to the number entered. For example,
	if the user enters 50, the loop will find the sum of 1, 2, 3, 4,...50.

	Input Validation: Do not accept a negative starting number.
*/
#include<iostream>
using namespace std;

// Function Prototypes
void getValue(int & val);
void displayValues(const int val);

int main()
{
	int value; // the number of integers to loop through

	// Get the value
	getValue(value);

	// Display values
	displayValues(value);

	system("PAUSE");
	return 0;
}

void getValue(int & val)
{
	do
	{
		// Prompt user to enter
		cout << "Enter a positive integer: ";
		cin >> val;

		// Validate the user's input
		if (val <= 0)
		{
			cout << endl << val << " is INVALID, please enter a positive integer.\n";
		}
	} while (val <= 0);
}

void displayValues(const int val)
{
	// Use a for loop to count from 1 to the value the user entered
	for (int i = 1; i <= val; i++)
	{
		cout << "> " << i << endl;
	}
}
