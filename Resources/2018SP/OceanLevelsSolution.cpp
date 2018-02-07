// Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
// - The number of millimeters higher than the current level that the ocean’s level will be in 6 years
// - The number of millimeters higher than the current level that the ocean’s level will be in 8 years
// - The number of millimeters higher than the current level that the ocean’s level will be in 11 years
#include <iostream>
using namespace std;

// Global Variable
const double CURRENT_OCEAN_LEVEL = 1.5;

int main()
{
    // Print out the ocean's level in 5 years
    cout << "The number of millimeters the ocean level has increase since 6 years is: "
        << CURRENT_OCEAN_LEVEL * 6.0 << endl;

    // Print out the ocean's level in 7 years
    cout << "The number of millimeters the ocean level has increase since 8 years is: "
        << CURRENT_OCEAN_LEVEL * 8.0 << endl;

    // Print out the ocean's level in 10 years
    cout << "The number of millimeters the ocean level has increase since 11 years is: "
        << CURRENT_OCEAN_LEVEL * 11.0 << endl;

    // DON'T CODE BELOW THIS LINE
    cout << endl;
    system("PAUSE");

    return 0;
}
