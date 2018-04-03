// This program displays the number of days in each month.
//
// Your Output should look like this:
//      Month 1 has 31 days.
//      Month 2 has 28 days.
//      Month 3 has 31 days.
//      Month 4 has 30 days.
//      Month 5 has 31 days.
//      Month 6 has 30 days.
//      Month 7 has 31 days.
//      Month 8 has 31 days.
//      Month 9 has 30 days.
//      Month 10 has 31 days.
//      Month 11 has 30 days.
//      Month 12 has 31 days.

#include <iostream>
using namespace std;

// Function Declaration
void pause();

int main()
{
    const int MONTHS = 12;
    int days[MONTHS] = { 31, 28, 31, 30,
                         31, 30, 31, 31,
                         30, 31, 30, 31};
    /*
        Use your knowledge of C++ to figure out what goes here?
    */

    pause(); 
    return 0;
}


// Pause the console
void pause()
{
	cout << "\nPress any key to continue....";
	cin.ignore().get();
}
