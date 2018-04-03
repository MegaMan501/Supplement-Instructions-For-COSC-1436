/****************************************************
	Name: Mohamed Rahaman
	Date: October 10, 2017
	File: geometryCalculator.cpp
	Description: Calculate the area of various shapes.
*****************************************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Throwing exception using an abstract class. (What Mr Atkinson )
class InvalidDimensionException {};

// Global variables
const double PI = 3.14159265;   // PI are round

// Function declarations
double areaCircle(double radius);
double areaRectangle(double width, double length);
double areaTriangle(double base, double height);

int main()
{
	double width,		        // Holds our dimensions for width
           height,              // Holds our dimensions for height
           radius,		        // Holds our radius
  		   area;                // Stores our area to be displayed to user
	char choice;		        // Holds our choice.

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
    			cout << "\nEnter the radius of the circle: ";
    			cin >> radius;

    			try
    			{
    				area = areaCircle(radius);
                    cout << "The area of a circle with radius "
      					<< radius << " is " << area << endl;
    			}
    			catch (InvalidDimensionException)
    			{
    				cout << "\nInvalid radius\n";
    			}
    			break;

    		case '2':   // Rectangle
                cout << "\nEnter the width of the rectangle: ";
                cin >> width;
                cout << "\nEnter the length of the rectangle: ";
                cin >> height;

    			try
    			{
                    area = areaRectangle(width, height);
				    cout << "The area of a rectangle with width of "
					     << width << " and length of " << height
					     << " is " << area << endl;
    			}
    			catch (InvalidDimensionException)
    			{
    				cout << "\nInvalid length or width\n";
    			}
    			break;

    		case '3': // triangle
                cout << "\nEnter the base of the triangle: ";
                cin >> width;
                cout << "\nEnter the height of the triangle: ";
                cin >> height;

    			try
    			{
                    area = areaTriangle(width, height);
				    cout << "The area of a triangle with base of "
                         << width << " and height of " << height
                         << " is " << area << endl;
    			}
    			catch (InvalidDimensionException)
    			{
    				cout << "\nInvalid choice";
    			}
    			break;

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

// Calculate the area of a circle
double areaCircle(double radius)
{
	if (radius < 0)
	{
		throw InvalidDimensionException();
	}
	else
		return PI * radius * radius;
}

// Calculate the area of a rectangle
double areaRectangle(double width, double length)
{
	if ( width < 0 || length < 0 )
		throw InvalidDimensionException();
	else
		return width * length;
}

// Calculate the area of a triangle
double areaTriangle(double base, double height)
{
	if ( base < 0 || height < 0 )
		throw InvalidDimensionException();
	else
		return 0.5 * base * height;
}
