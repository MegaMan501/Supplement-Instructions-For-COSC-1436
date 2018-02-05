#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	double celsius = 0.0, fahrenheit = 0.0;
	cout << "Enter the temperature as Celsius: ";
	cin >> celsius;

	// Equation
	fahrenheit = (9.0/5.0)*static_cast<double>(celsius) + 32.0;

	cout << "\nThe temperature in Fahrenheit is " << fahrenheit << " degrees Fahrenheit.";

	// Make sure we place the end message on a new line
	cout << endl;

	// The following is system dependent.  It will only work on Windows
	system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
    	return 0;
}
