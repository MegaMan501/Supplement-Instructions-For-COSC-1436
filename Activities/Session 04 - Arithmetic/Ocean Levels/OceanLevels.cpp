// Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
// - The number of millimeters higher than the current level that the ocean’s level will be in 5 years
// - The number of millimeters higher than the current level that the ocean’s level will be in 7 years
// - The number of millimeters higher than the current level that the ocean’s level will be in 10 years
#include <iostream>
using namespace std;

// Global Variable
const double CURRENT_OCEAN_LEVEL = 1.5;

int main()
{
    // Print out the ocean's level in 5 years
    cout << "The number of millimeters the ocean level has increase since 5 years is: "
        << CURRENT_OCEAN_LEVEL * 5.0 << endl;

    // Print out the ocean's level in 7 years
    cout << "The number of millimeters the ocean level has increase since 7 years is: "
        << CURRENT_OCEAN_LEVEL * 7.0 << endl;

    // Print out the ocean's level in 10 years
    cout << "The number of millimeters the ocean level has increase since 10 years is: "
        << CURRENT_OCEAN_LEVEL * 10.0 << endl;

    // DON'T CODE BELOW THIS LINE
    cout << endl;
    system("PAUSE");

    return 0;
}
