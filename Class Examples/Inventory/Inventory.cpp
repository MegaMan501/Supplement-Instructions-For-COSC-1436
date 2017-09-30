/******************************
   Name: Mohamed Rahaman
   Date: September 21, 2017
   File: main.cpp
   Description: This program will ask the user for her name, ask for the names
   and cost of three items then calculate the total.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global variables
const int NUM_ITEMS = 3;

int main()
{
	string customerName;			// Full Name of the customer
	string itemNames[NUM_ITEMS];	// Names of the three items // [Static arrays]
	double itemCost[NUM_ITEMS];		// Cost of each of the three items
	double totalItemCost = 0.0;		// Total cost of the three items (scalar)
	double averageItemCost = 0.0;   // The average cost of the three items (scalar)

	// Get the customer name
	cout << "Enter the full name of the customer: ";
	getline(cin, customerName);

	// Get the name of the three items
	cout << "\nEnter the name of the three items for the invoice.\n";
	cout << "Item 1: ";
	getline(cin, itemNames[0]);
	cout << "Item 2: ";
	getline(cin, itemNames[1]);
	cout << "Item 3: ";
	getline(cin, itemNames[2]);

	// Get the cost of the three items
	cout << "\nEnter the cost of the three items\n";
	cout << "Cost of " << itemNames[0] << ": $";
	cin >> itemCost[0];
	cout << "Cost of " << itemNames[1] << ": $";
	cin >> itemCost[1];
	cout << "Cost of " << itemNames[2] << ": $";
	cin >> itemCost[2];

	// Calculate total and Average cost of items (In class example)
	/*
		totalItemCost = itemCost[0] + itemCost[1] + itemCost[2];
		averageItemCost = totalItemCost / NUM_ITEMS;
	*/

	// Calculate total and Average cost of items (Alternate example)
	for (int i = 0; i < NUM_ITEMS; i++)
		totalItemCost += itemCost[i];
	averageItemCost = totalItemCost / NUM_ITEMS;

	// Display invoice to the customer
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nInvoice for Customer: " << customerName << endl << endl;
	cout << "Items purchased:\n";
	cout << setw(30) << left << "Item" << " "
		<< setw(10) << right << "Cost" << endl; // Table header
	for (int i = 0; i < NUM_ITEMS; i++)
		cout << setw(30) << left << itemNames[i] << "$"
		<< setw(10) << right << itemCost[i] << endl;
	cout << setw(30) << left << "Total Cost" << "$"
		<< setw(10) << right << totalItemCost << endl;
	cout << setw(30) << left << "Average Cost" << "$"
		<< setw(10) << right << averageItemCost << endl;
	cout << "\nThank you for shoping SMart.";

	// Make sure we place the end message on a new line
        cout << endl;

	//system("PAUSE");
	// A non-system dependent method is below
	//cout << "\nPress any key to continue...";
	//cin.get();

	return 0;
}
