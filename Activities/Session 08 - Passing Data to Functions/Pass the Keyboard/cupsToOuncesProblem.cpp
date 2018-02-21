// This program converts cups to fluid ounces.
// Fill in the missing code one by one as a group.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes

int main()
{
  // Variables for the cups and ounces.
  double cups, ounces;

  // Display an intro screen.

  // Get the number of cups.

  // Convert cups to fluid ounces.

  // Set up numeric output formatting.
  cout << fixed << showpoint << setprecision(1);

  // Display the number of ounces.
  cout << cups << " cups equals "
  << ounces << " ounces.\n";

  system("PAUSE");
  return 0;
}

//******************************************
// The showIntro function displays an      *
// introductory screen.                    *
//******************************************
void showIntro()
{
  cout << "This program converts measurements\n"
  << "in cups to fluid ounces. For your\n"
  << "reference the formula is:\n"
  << " 1 cup = 8 fluid ounces\n\n";
}

//******************************************
// The getCups function prompts the user   *
// to enter the number of cups and then    *
// returns that value as a double.         *
//******************************************
double getCups()
{

}

//******************************************
// The cupsToOunces function accepts a     *
// number of cups as an argument and       *
// returns the equivalent number of fluid  *
// ounces as a double.                     *
//******************************************
double cupsToOunces(double numCups)
{

}
