//This program will ask the user for her name, ask for the names
//and cost of three items then calculate the total.

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global variables
const int NUM_ITEMS = 3;

// Function Declaration
string getCostumerName();
void getItemNames(string names[], int size);
void getItemCost(double cost[], string names[], int size);
double getTotalCost(double cost[], int size);
double getAverageCost(double cost[], int size);
void displayInvoice(string custName, string names[], double cost[], int size);

int main()
{
	string customerName;			// Full Name of the customer
	string itemNames[NUM_ITEMS];	// Names of the three items
	double itemCost[NUM_ITEMS];		// Cost of each of the three items

	// Get the customer name
	customerName = getCostumerName();

	// Get the names of the three items.
	getItemNames(itemNames, NUM_ITEMS);

	// Get the cost of the three items.
	getItemCost(itemCost, itemNames, NUM_ITEMS);

	// Display the invoice to customer
	displayInvoice(customerName, itemNames, itemCost, NUM_ITEMS);

	//	Make sure we place the end message on a new line
    cout << endl;

	system("PAUSE");

	return 0;
}

// Get costumer name from user and return it
string getCostumerName()
{
	string custName;		//  name of the costumer

	// Get the customer name
	cout << "Enter the full name of the customer: ";
	getline(cin, custName);

	return custName;
}

// Get the Item names from the user
void getItemNames(string names[], int size)
{
	// Get the name of the three items
	cout << "\nEnter the name of the three items for the invoice.\n";
	cout << "Item 1: ";
	getline(cin, names[0]);
	cout << "Item 2: ";
	getline(cin, names[1]);
	cout << "Item 3: ";
	getline(cin, names[2]);
}

void getItemCost(double cost[], string names[], int size)
{
	// Get the cost of the three items
	cout << "\nEnter the cost of the three items\n";
	cout << "Cost of " << names[0] << ": $";
	cin >> cost[0];
	cout << "Cost of " << names[1] << ": $";
	cin >> cost[1];
	cout << "Cost of " << names[2] << ": $";
	cin >> cost[2];
}

// Get the total cost of the items
double getTotalCost(double cost[], int size)
{
	return cost[0] + cost[1] + cost[2];
}

// Get the avrage cost of the total items
double getAverageCost(double cost[], int size)
{
	return  getTotalCost(cost, size) / size;
}

// Output a report for invoice
void displayInvoice(string custName, string names[], double cost[], int size)
{
	// Display invoice to the customer
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nInvoice for Customer: " << custName << endl << endl;
	cout << "Items purchased:\n";
	cout << setw(30) << left << "Item" << " "
		<< setw(10) << right << "Cost" << endl; // Table header
	for (int i = 0; i < size; i++)
		cout << setw(30) << left << names[i] << "$"
		<< setw(10) << right << cost[i] << endl;
	cout << setw(30) << left << "Total Cost" << "$"
		<< setw(10) << right << getTotalCost(cost, size) << endl;
	cout << setw(30) << left << "Average Cost" << "$"
		<< setw(10) << right << getAverageCost(cost, size) << endl;
	cout << "\nThank you for shoping SMart.";
}
