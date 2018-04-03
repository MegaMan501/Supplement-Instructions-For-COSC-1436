// The function displayMessage is repeatedly called from a loop.
#include <iostream>
using namespace std;

void displayMessage(int counter)
{
	cout << "This is the " << counter << " call of displayMessage.\n";
}

int main()
{
	int firstCall = 1;
	cout << "This is the main function.\n";

	// Single call to a function
	displayMessage(firstCall);

	cout << "\nLoop through two to five.\n";
	// Looping through a function
	for (int count = 2; count <= 5; count++)
		displayMessage(count); // Call displayMessage

	cout << "Back in function main again.\n";

	system("PAUSE");
	return 0;
}
