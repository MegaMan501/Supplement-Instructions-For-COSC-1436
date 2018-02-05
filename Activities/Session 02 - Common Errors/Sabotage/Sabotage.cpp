// This program calculates the amount of chariable contribution that will
// be contributed to a charity if 5%, 7%, or 10%
// of monthly chariable contribution is withheld.
#include <iostream>
using namespace std;

// Function declarations
void pause();

int main()
{
    double monthlyChariableContribution = 6000.0,   // Variables to hold the monthly chariable contribution and the
           currentContribution;                     // amount of currentContribution.

    // Calculate and display a 5% currentContribution.
    currentContribution = monthlyChariableContribution * 0.05;
    cout << "5 percent is $" << currentContribution << " per month.\n";

    // Calculate and display a 7% currentContribution.
    currentContribution = monthlyChariableContribution * 0.07;
    cout << "7 percent is $" << currentContribution
         << " per month.\n";

    // Calculate and display a 10% currentContribution.
    currentContribution = monthlyChariableContribution * 0.1;
    cout << "10 percent is $" << currentContribution
         << " per month.\n";

    pause(); // pauses the console
    return 0;
}

// A non-system dependent method to pause the console
void pause()
{
    cin.clear();
	cout << "\n\nPress enter to continue....";
	cin.get();
}
