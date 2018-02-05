/*
   Write a program that computes the tax and tip on a restaurant bill for a patron with
   a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
   be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
   amount, and total bill on the screen.
*/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Global variables
const double TAX_PERCENTAGE = 0.0675;
const double TIP_PERCENTAGE = 0.20;

int main()
{
	double mealCost = 88.67,   // patron's meal cost
        tax,                   // holds the tax of the meal
        tip,                   // holds the tip of the meal
        total;                 // total cost of meal

    // Calcutions for total after taxes and tips
    tax = mealCost * TAX_PERCENTAGE;
    tip = (mealCost + tax) * TIP_PERCENTAGE;
    total = mealCost + tax + tip;

    // Display the results
    cout << "Meal Cost: " << mealCost << endl
        << "Tax: " << tax << endl
        << "Tip: " << tip << endl
        << "---------------\n"
        << "Total: " << total;

	//	Make sure we place the end message on a new line
    cout << endl;

	//	The following is system dependent.  It will only work on Windows
    system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
    return 0;
}
