// This program uses overloaded functions
// get the cube ( x^3 ) of a number the user enters.
// Complete this code in groups.
#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
void getUsersInput(unsigned int & u, int & i, float & f, double & d);
void displayCubes(unsigned int u, int i, float f, double d);

// Function Prototypes Using Overload Functions
unsigned int cube(unsigned int c);
int cube(int c);
float cube(float c);
double cube(double c);

int main()
{
    unsigned int cubeUnsignedInt;
    int cubeInt;
    float cubeFloat;
    double cubeDouble;

    // Get Users input
    getUsersInput(cubeUnsignedInt, cubeInt, cubeFloat, cubeDouble);

    // Display their cubes
    displayCubes(cubeUnsignedInt, cubeInt, cubeFloat, cubeDouble);

    // Pauses the console in Windows
    cout << endl;
    system("PAUSE");

    return 0;
}

// Get User's input for unsigned int, int, float, and doube
void getUsersInput(unsigned int & u, int & i, float & f, double & d)
{
    cout << "Enter a unsigned int variable that you would like to cube: ";
    cin >> u;
    cout << "Enter a int variable that you would like to cube: ";
    cin >> i;
    cout << "Enter a double variable that you would like to cube: ";
    cin >> f;
    cout << "Enter a double variable that you would like to cube: ";
    cin >> d;
}

// Display the values of the cubed variables
void displayCubes(unsigned int u, int i, float f, double d)
{
    // Set Output format
    cout << fixed << showpoint << setprecision(2);

    // Display the Cubes
    cout << "\n\t\tHere are the cubed values\n"
        << "=====================================================\n"
        << "Cubed Unsigned Int: " << cube(u) << endl
        << "Cubed Int: " << cube(i) << endl
        << "Cubed Float: " << cube(f) << endl
        << "Cubed Double: " << cube(d) << endl;
}

//**************************************************************
// Definition of overloaded function cube.
// This function uses an unsigned int parameter, c. It returns the
// cube of c as an unsigned int.
//**************************************************************
unsigned int cube(unsigned int c)
{
    return c * c * c;
}

//**************************************************************
// Definition of overloaded function cube.
// This function uses an int parameter, c. It returns the
// cube of c as an int.
//**************************************************************
int cube(int c)
{
   return c * c * c;
}

//***************************************************************
// Definition of overloaded function cube.
// This function uses a float parameter, c. It returns
// the cube of c as a float.
//***************************************************************
float cube(float c)
{
    return c * c * c;
}

//***************************************************************
// Definition of overloaded function cube.
// This function uses a double parameter, c. It returns
// the cube of c as a double.
//***************************************************************
double cube(double c)
{
   return c * c * c;
}
