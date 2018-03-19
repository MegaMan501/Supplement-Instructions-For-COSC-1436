/****************************************************
Name: Mohamed Rahaman
Date: March 7, 2018
File: geomCalc.cpp
Description: Calculate the area of various shapes.
*****************************************************/
// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Throwing exception using an abstract class.
class InvalidDimensionException {};

// Global variables
const double PI = 3.14159265;   // PI are round

// Function declarations
double areaCircle(double radius);
double areaRectangle(double width, double length);
double areaTriangle(double base, double height);

// Template functions
template <typename T> 
T getValidatedInput();

int main()
{
	double width,	// Holds our dimensions for width
		height,		// Holds our dimensions for height
		radius,		// Holds our radius
		area;		// Stores our area to be displayed to user
	
	char choice;	// Holds the users inputs

	do
	{
		// Display the menu and get the choice
		cout << "\nGeometry Calculator:"
			<< "\n--------------------------------"
			<< "\n\t1. Calculate the are of Circle"
			<< "\n\t2. Calculate the are of Rectangle"
			<< "\n\t3. Calculate the are of Triangle"
			<< "\n\t4. Quit"
			<< "\nEnter Your Choice: ";
		cin >> choice;

		while (getchar() != '\n');		// Flush the buffer

		// Process Choice and Display the Results
		switch (choice)
		{
			case '1':   // Circle
				try
				{
					cout << "\nEnter the radius of the circle: ";
					radius = getValidatedInput<double>(); 
					area = areaCircle(radius); 
					
					cout << "\nThe area of a circle with radius "
						<< radius << " is " << area << endl;
				}
				catch (ios_base::failure e)
				{
					cout << e.what() << endl; 
				}
				catch (InvalidDimensionException)
				{
					cout << "Invalid radius\n";
				}
				break; // case '1'

			case '2':   // Rectangle
				try
				{
					cout << "\nEnter the width of the rectangle: ";
					width = getValidatedInput<double>();
					cout << "\nEnter the length of the rectangle: ";
					height = getValidatedInput<double>(); 
					area = areaRectangle(width, height);
					
					cout << "\nThe area of a rectangle with width of "
						<< width << " and length of " << height
						<< " is " << area << endl;
				}
				catch (ios_base::failure e)
				{
					cout << e.what() << endl;
				}
				catch (InvalidDimensionException)
				{
					cout << "Invalid width or length\n";
				}
				break; // case '2'

			case '3': // Triangle
				try
				{
					cout << "\nEnter the base of the triangle: ";
					width = getValidatedInput<double>();
					cout << "\nEnter the height of the triangle: ";
					height = getValidatedInput<double>();
					area = areaTriangle(width, height);
					
					cout << "\nThe area of a triangle with base of "
						<< width << " and height of " << height
						<< " is " << area << endl;
				}
				catch (ios_base::failure e)
				{
					cout << e.what() << endl;
				}
				catch (InvalidDimensionException)
				{
					cout << "Invalid width or hight\n";
				}
				break; // case '3'

			case '4':
				cout << "\nQuitting...\n"; 
				break;
			default:
				cout << endl << choice << " is not a valid choice\n"; 
				break;
		}	// end of switch

		// Pause to read screen and then clear screen
		if (choice != '4')
		{
			cout << endl;
			system("PAUSE");
			system("CLS");
		}

	} while (choice != '4');

	//	Make sure we place the end message on a new line
	cout << endl;

	//	The following is system dependent.  It will only work on Windows
	system("PAUSE");

	// A non-system dependent method is below
	// cout << "Press any key to continue";
	// cin.get();

	return 0;
}

// Get Validated Input
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

// Calculate the area of a circle
double areaCircle(double radius)
{
	if (radius < 0)
		throw InvalidDimensionException(); 
	
	return PI * radius * radius;
}

// Calculate the area of a rectangle
double areaRectangle(double width, double length)
{
	if (width < 0 || length < 0)
		throw InvalidDimensionException();
	
	return width * length;
}

// Calculate the area of a triangle
double areaTriangle(double base, double height)
{
	if (base < 0 || height < 0)
		throw InvalidDimensionException();

	return 0.5 * base * height;
}
