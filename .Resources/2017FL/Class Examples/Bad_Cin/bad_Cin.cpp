/******************************
   Name: Mohamed Rahaman
   Date: 09/19/2017
   File: bad_Cin.cpp
   Description: Demostrate poor and good use of cin.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int age;		// age in years
	char gender;	// gender (pre: PC)

	cout << "Enter your age: ";
	cin >> age;		// reads in the <crage return> cause issues with cin.get()

	while (cin.get() != '\n') continue; // to correct the issues with cin

	cout << "Enter your gender (M = Male, F = Female): ";
	cin.get(gender);

	cout << endl;
	cout << age << " " << gender << endl;
	cout << "Done";

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
