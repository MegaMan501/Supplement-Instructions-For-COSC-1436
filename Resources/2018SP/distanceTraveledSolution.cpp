//	Distance Traveled:
//
//	The distance a vehicle travels can be calculated as follows :
//		distance = speed * time
//	
//  For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
//	120 miles.
//
//	Write a program that asks the user for the speed of a vehicle(in miles per hour) and how
//	many hours it has traveled.The program should then use a loop to display the distance the
//	vehicle has traveled for each hour of that time period.Here is an example of the output :
//
//	What is the speed of the vehicle in mph ? 40
//	How many hours has it traveled ? 3
//
//	Hour	Distance Traveled
//	--------------------------------
//	1		40
//	2		80
//	3		120
//
//	Input Validation : Do not accept a negative number for speed and do not accept any
//	value less than 1 for time traveled.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Function declarations
int getDistance(int speed, int time);

int main()
{
	int speed,			// the speed of the vehicle
		time;			// the hours that the vehicle has traveled

	do
	{
		// Prompt user to enter the speed and time 
		cout << "What is the speed of the vehicle in mph? : ";
		cin >> speed; 
		cout << "How many hours has it traveled? : "; 
		cin >> time; 

		// Validate the user's input
		if (speed < 0)
			cout << "\n!Invalid, you entered " << speed 
				<< " for the speed. It cannot be a negative number.\n"; 
		if (time < 1)
			cout << "\n!Invalid, you entered " << time 
				<< " for the time. It cannot be less than 1.\n";

	} while (speed < 0 || time < 1 );
	
	// Output the table using a for loop to display 
	// the hour and the distance traveled for that hour.
	cout << "Hour\tDistance Traveled"
		<< "\n--------------------------------\n"; 
	for (int i = 1; i <= time; i++)
	{
		cout << i << "\t" << getDistance(speed, i) << endl; 
	}
	
	//	Pauses the output
	cout << endl;
	system("PAUSE");

	return 0;
}

// Calculate the distance and return it as an integer
int getDistance(int speed, int time)
{
	return speed * time; 
}