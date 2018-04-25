/******************************
This code demostrates how to swap variables
********************************/
// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Function declarations
void pause();
void swap(int & first, int & second);
void swap(double & first, double & second);
void swap(char & first, char & second);
void swap(string & first, string & second);

int main()
{
	// First and second values that will be swapped
	int firstInt, secondInt;
	double firstDouble, secondDouble;
	char firstChar, secondChar;
	string firstString, secondString;

	// Prompt user to enter two integer and display the values swapped
	cout << "Enter two integers separated by spaces: ";
	cin >> firstInt >> secondInt;
	cout << "The first value is " << firstInt << ". The second value is " << secondInt << ".\n";
	swap(firstInt, secondInt);
	cout << "The first value swapped is "<<  firstInt << ". The second value is " << secondInt << ".\n\n";

	// Prompt user to enter two double and display the values swapped
	cout << "Enter two doubles separated by spaces: ";
	cin >> firstDouble >> secondDouble;
	cout << "The first value is " << firstDouble << ". The second value is " << secondDouble << ".\n";
	swap(firstDouble, secondDouble);
	cout << "The first value swapped is " <<  firstDouble << ". The second value is " << secondDouble << ".\n\n";

	// Prompt user to enter two character and display the values swapped
	cout << "Enter two characters separated by spaces: ";
	cin >> firstChar >> secondChar;
	cout << "The first value is " << firstChar << ". The second value is " << secondChar << ".\n";
	swap(firstChar, secondChar);
	cout << "The first value swapped is " <<  firstChar << ". The second value is " << secondChar << ".\n\n";

	// Prompt user to enter two string and display the values swapped
	cout << "Enter two strings separated by spaces: ";
	cin >> firstString >> secondString;
	cout << "The first value is " << firstString << ". The second value is " << secondString << ".\n";
	swap(firstString, secondString);
	cout << "The first value swapped is " <<  firstString<< ". The second value is " << secondString << ".\n\n";

	// Pause the console
    pause();

    return 0;
}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n\nPress enter to continue....";
	cin.ignore().get();
}

// Swap the first integer with the second
void swap(int & first, int & second)
{
}

// Swap the first floating point number with the second
void swap(double & first, double & second)
{
}

// Swap the first character with the second
void swap(char & first, char & second)
{
}

// Swap the first string with the second
void swap(string & first, string & second)
{
}
