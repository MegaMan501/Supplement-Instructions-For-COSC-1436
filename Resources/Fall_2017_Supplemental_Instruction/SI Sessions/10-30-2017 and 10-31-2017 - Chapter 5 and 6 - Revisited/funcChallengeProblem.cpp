// This program demonstrates two value-returning functions.
// The square function is called in a mathematical statement.


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


    // Get the radius of the circle.


    // Calculate the area of the circle.


    // Display the area.
    cout << "The area is " << area << endl;

    system("PAUSE");

    return 0;
}

// Definition of function getRadius.
// This function asks the user to enter the radius of
// the circle and then returns that number as a double.
// - Use a do-while loop for Validation


// Definition of function square.
// This function accepts a double argument and returns
// the square of the argument as a double.
// - Can be completed with one line of code
