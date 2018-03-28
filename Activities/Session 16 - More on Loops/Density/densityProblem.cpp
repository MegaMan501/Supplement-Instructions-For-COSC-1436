#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void getMass(double & mass);
void getVolume(double & volume, double & length);
double calculateDensity(double mass, double volume);
void displayDensity(double density, double mass, double volume, double length);

int main()
{
	double density = 0.0,
		mass = 0.0,
		volume = 0.0,
		length = 0.0;
	bool status = true;
	char choice;

	do
	{
		cout << "\nDensity Calculator:\n"
			<< "1. Calcute Density\n"
			<< "2. Quit\n"
			<< "Enter your choice (1-2): ";
		cin >> choice;

		while (getchar() != '\n');

		switch (choice)
		{
		case '1':
			getMass(mass);

			getVolume(volume, length);

			density = calculateDensity(mass, volume);

			displayDensity(density, mass, volume, length);
			break;
		case '2':
			status = false;
			break;
		default:
			cout << "Invalid! " << choice << " must be between (1-2).\n";
			break;
		}

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

void getMass(double & mass)
{
	do
	{
		cout << "\nEnter the mass in grams: ";
		cin >> mass;

		if (mass <= 0)
		{
			system("CLS");
			cout << endl << "Invalid! " << mass << " must be less than or equal to zero.\n";
			system("PAUSE");
		}
	} while (mass <= 0);
}

void getVolume(double & volume, double & length)
{
	do
	{
		cout << "\nEnter the length of a cube in cm: ";
		cin >> length;

		if (length <= 0)
		{
			system("CLS");
			cout << endl << "Invalid! " << length << " must be less than or equal to zero.\n";
			system("PAUSE");
		}

	} while (length <= 0);

	volume = length * length * length;
}

double calculateDensity(double mass, double volume)
{
	return mass / volume;
}

void displayDensity(double density, double mass, double volume, double length)
{
	cout << fixed << showpoint << setprecision(3);

	cout << "\nThe Density is: " << density << " grams/cm^3"
		<< "\nThe Volume is: " << volume << " cm^3"
		<< "\nThe Mass is: " << mass << " grams"
		<< "\nThe Length of the cube is: " << length << " cm" << endl;
}
