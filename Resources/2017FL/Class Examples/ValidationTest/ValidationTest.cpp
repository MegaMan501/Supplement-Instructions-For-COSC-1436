/******************************
Validation of user input with
Mr. Atkinson's new template.cpp.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Function declarations
template <typename T>
T getValidatedInput(/*T result*/);

int main()
{
	//	Your code goes here
	int age = 0;
	bool status = false;

	while (!status)
	{
		try
		{
			cout << "Enter your age: ";
			age = getValidatedInput<int>();

			while (age < 0 || age > 115)
			{
				cout << "\nPlease enter a realistic age: ";
				age = getValidatedInput<int>();
			}
			status = true;
		}
		catch (...)
		{
			cout << "Please enter an integer. ";
		}
	}

	cout << "\nAre you really " << age << " old." << endl;

	//	Make sure we place the end message on a new line
	cout << endl;

	//	The following is system dependent.  It will only work on Windows
	system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
	return 0;
}

template <typename T>
T getValidatedInput()
{
	// Get input of type T
	T result;
	cin >> result;

	// Check if the failbit has been set, meaning the beginning of the input
	// was not type T. Also make sure the result is the only thing in the input
	// stream, otherwise things like 2b would be a valid int.
	if (cin.fail() || cin.get() != '\n')
	{
		// Set the error state flag back to goodbit. If you need to get the input
		// again (e.g. this is in a while loop), this is essential. Otherwise, the
		// failbit will stay set.
		cin.clear();

		// Clear the input stream using and empty while loop.
		while (cin.get() != '\n');

		// Throw an exception. Allows the caller to handle it any way you see fit
		// (exit, ask for input again, etc.)
		throw ios_base::failure("Invalid input.");
	}

	return result;
}
