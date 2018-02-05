// This program converts seconds to minutes and seconds.
#include <iostream>
using namespace std;

int main()
{
	// The total seconds is 145.
	int totalSeconds = 145;

	// Variables for minutes and seconds
	int minutes, seconds;

	// Get the number of minutes.
	minutes = totalSeconds / 60;

	// Get the remaining seconds.
	seconds = totalSeconds % 60;

	// Display the results.
	cout << totalSeconds << " is equivalent to:\n";
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;

    system("pause");
    return 0;
}
