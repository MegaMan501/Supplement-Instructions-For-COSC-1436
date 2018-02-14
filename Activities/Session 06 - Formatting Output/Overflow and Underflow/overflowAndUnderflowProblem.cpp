// This program demonstrates integer/character overflow and underflow.
#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
using namespace std;

int main()
{
	int maxInt = INT_MAX;			// Maximum value for integer in c++
	int minInt = INT_MIN;			// Minimum value for integer in c++
	char maxChar = CHAR_MAX;		// Maximum value for character's in c++
	char minChar = CHAR_MIN;		// Minimum value for integer in c++

	// Current Values
	for (int i = 0; i < 60; i++) { cout << "-"; }
	cout << showpoint;
	cout << "\nMaximum value for integers in c++ is : " << maxInt << endl
		<< "Minimum value for integers in c++ is : " << minInt << endl << endl
		<< "Maximum value for characters in c++ is : " << maxChar << endl
		<< "Minimum value for characters in c++ is : " << minChar << endl;
	for (int i = 0; i < 60; i++) { cout << "-"; }
	cout << endl;

	// Make Char Overflow and Underflow


	// Make Int Overflow and Underflow


	// DON'T CODE BELOW THIS LINE
	cout << endl;
	system("PAUSE");
	return 0;
}
