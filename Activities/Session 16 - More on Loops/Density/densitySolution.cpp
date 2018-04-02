/*
*		This program uses pass by reference
*		to calculate the density of a cube.
*
*		The density formula is:
*		P=M/V
*
*		P is the density in g/cm^3
*		M is the mass in g
*		V is the volume in
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Function Prototypes
void getMass(double & mass);
void getVolume(double & volume, double & length);
double calculateDensity(double mass, double volume);
void displayDensity(double density, double mass, double volume, double length);

int main()
{
	double density = 0.0,	// the density
		mass = 0.0,			// the mass
		volume = 0.0,		// the volume
		length = 0.0;		// the length of the cube
	bool status = true;		// status of the menu
	char choice;			// user's choice

	do
	{
		// Print out the menu to the user. 
		cout << "\nDensity Calculator:\n"
			<< "1. Calcute Density\n"
			<< "2. Quit\n"
			<< "Enter your choice (1-2): ";
		cin >> choice;

		while (getchar() != '\n');

		switch (choice)
		{
		case '1':
			// Get the mass from the user
			getMass(mass);

			// Get the volume from the user
			getVolume(volume, length);

			// Calculate the density
			density = calculateDensity(mass, volume);

			// Display The density
			displayDensity(density, mass, volume, length);
			break; 
		case '2':
			status = false;
			break; 
		default:
			cout << "Invalid! " << choice << " must be between (1-2).\n";
			break;
		}

		// Pause to read screen and then clear screen
		if (choice != '2')
		{
			cout << endl;
			system("PAUSE");
			system("CLS");
		}

	} while (status);

	system("PAUSE");
	return 0;
}

// Get the mass from the user
void getMass(double & mass)
{
	do
	{
		// Prompt the user to enter the mass
		cout << "\nEnter the mass in grams: ";
		cin >> mass;
		
		// Validate User's Input
		if (mass <= 0)
		{
			system("CLS");
			cout << endl << "Invalid! " << mass << " must be less than or equal to zero.\n";
			system("PAUSE");
		}
	} while (mass <= 0);
}

// Gets the volume from the user
void getVolume(double & volume, double & length)
{
	do
	{
		// Get the length of a cube from the user
		// Assume that the cube has equal lengths 
		// for hight, width, and length
		cout << "\nEnter the length of a cube in cm: ";
		cin >> length;

		// Validate User's Input
		if (length <= 0)
		{
			system("CLS");
			cout << endl << "Invalid! " << length << " must be less than or equal to zero.\n";
			system("PAUSE");
		}

	} while (length <= 0);
	

	// Calculate the Volume of a cube
	volume = length * length * length; 
}

// Calculates the density
double calculateDensity(double mass, double volume)
{
	return mass / volume; 
}

// Display the density, mass, volume, and length
void displayDensity(double density, double mass, double volume, double length)
{
	// Format the output
	cout << fixed << showpoint << setprecision(3); 

	// Display the results
	cout << "\nThe Density is: " << density << " grams/cm^3"
		<< "\nThe Volume is: " << volume << " cm^3"
		<< "\nThe Mass is: " << mass << " grams"
		<< "\nThe Length of the cube is: " << length << " cm" << endl;
}
