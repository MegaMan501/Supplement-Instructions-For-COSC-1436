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
/*cube for unsigned int*/
/*cube for int*/
/*cube for float*/
/*cube for double*/

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

}

// Display the values of the cubed variables
void displayCubes(unsigned int u, int i, float f, double d)
{
    // Set Output format

    // Display the Cubes
}

//**************************************************************
// Definition of overloaded function cube.
// This function uses an unsigned int parameter, c. It returns the
// cube of c as an unsigned int.
//**************************************************************
unsigned int cube(unsigned int c)
{

}

//**************************************************************
// Definition of overloaded function cube.
// This function uses an int parameter, c. It returns the
// cube of c as an int.
//**************************************************************
int cube(int c)
{

}

//***************************************************************
// Definition of overloaded function cube.
// This function uses a float parameter, c. It returns
// the cube of c as a float.
//***************************************************************
float cube(float c)
{

}

//***************************************************************
// Definition of overloaded function cube.
// This function uses a double parameter, c. It returns
// the cube of c as a double.
//***************************************************************
double cube(double c)
{

}
