/******************************
	Mohamed Rahaman
	Febraury 12, 2018
	invoice.cpp
	Description: This program will ask the user for 
	her name, ask for the names and cost of three 
	items then calculate the total cost and average 
	of the three items.
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
	totalItemCost = itemCost[0] + itemCost[1] + itemCost[2];
	averageItemCost = totalItemCost / NUM_ITEMS;

	// Set format outputing using the IOMANIP header file methods
	cout << fixed << setprecision(2) << showpoint;

	// Display invoice to the customer
	cout << "\nInvoice for Customer: " << customerName << endl << endl;
	cout << "Items purchased:\n";
	cout << setw(30) << left << "Item" << " " << setw(10) << right << "Cost" << endl; // Table header
	cout << setw(30) << left << itemNames[0] << "$" << setw(10) << right << itemCost[0] << endl;
	cout << setw(30) << left << itemNames[1] << "$" << setw(10) << right << itemCost[1] << endl;
	cout << setw(30) << left << itemNames[2] << "$" << setw(10) << right << itemCost[2] << endl;
	cout << setw(30) << left << "Total Cost" << "$" << setw(10) << right << totalItemCost << endl;
	cout << setw(30) << left << "Average Cost" << "$" << setw(10) << right << averageItemCost << endl;
	cout << "\nThank you for shoping SMart.";
	
	// Make sure we place the end message on a new line
	cout << endl;
	system("PAUSE");

	// A non-system dependent method is below
	//cout << "\nPress any key to continue...";
	//cin.get();

	return 0;
}