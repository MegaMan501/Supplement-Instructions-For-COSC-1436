// This program demonstrates two value-returning functions.
// The square function is called in a mathematical statement.
#include <iostream>
#include <iomanip>
using namespace std;

// Global Variables
const double PI = 3.14159; // Constant for pi

//Function prototypes
double getRadius();
double square(double num);

int main()
{
    double radius = 0.0,  // To hold the circle's radius
           area = 0.0;    // To hold the circle's area

    // Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    // Get the radius of the circle.
    cout << "This program calculates the area of ";
    cout << "a circle.\n";
    radius = getRadius();

    // Calculate the area of the circle.
    area = PI * square(radius);

    // Display the area.
    cout << "The area is " << area << endl;

    system("PAUSE");

    return 0;
}

// Definition of function getRadius.
// This function asks the user to enter the radius of
// the circle and then returns that number as a double.
// - Use a do-while loop for Validation
double getRadius()
{
    double rad = 0.0;

    do
    {
        cout << "Enter the radius of the circle: ";
        cin >> rad;

    } while( rad < 0 );

    return rad;
}

// Definition of function square.
// This function accepts a double argument and returns
// the square of the argument as a double.
// - Can be completed with one line of code
double square(double num)
{
    return num * num;
}
