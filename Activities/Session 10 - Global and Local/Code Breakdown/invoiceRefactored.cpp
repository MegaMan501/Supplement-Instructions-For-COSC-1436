/******************************
Read through is code and identify the scope of each of
variables. Then categorize each section of the code by
there function in lines below.
********************************/
// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global variables
const int NUM_ITEMS = 3;

// Function Declarations
string getCustomerName();
void getItemNames(string names[], int size);
void getItemCost(double costs[], string names[], int size);
double getTotalCost(double costs[], int size);
double getAverageCost(double costs[], int size);
void displayInvoice(string custName, string names[], double costs[], int size);

int main()
{
	string customerName;
	string itemNames[NUM_ITEMS];
	double itemCost[NUM_ITEMS];

	customerName = getCustomerName();

	getItemNames(itemNames, NUM_ITEMS);

	getItemCost(itemCost, itemNames, NUM_ITEMS);

	displayInvoice(customerName, itemNames, itemCost, NUM_ITEMS);

	// Make sure we place the end message on a new line
	cout << endl;
	system("PAUSE");

	return 0;
}

string getCustomerName()
{
	string customerName;
	cout << "Enter the full name of the customer: ";
	getline(cin, customerName);

	return customerName;
}

void getItemNames(string names[], int size)
{
	cout << "\nEnter the name of the three items for the invoice.\n";
	cout << "Item 1: ";
	getline(cin, names[0]);
	cout << "Item 2: ";
	getline(cin, names[1]);
	cout << "Item 3: ";
	getline(cin, names[2]);
}

void getItemCost(double costs[], string names[], int size)
{
	// Get the cost of the three items
	cout << "\nEnter the cost of the three items\n";
	cout << "Cost of " << names[0] << ": $";
	cin >> costs[0];
	cout << "Cost of " << names[1] << ": $";
	cin >> costs[1];
	cout << "Cost of " << names[2] << ": $";
	cin >> costs[2];
}

double getTotalCost(double costs[], int size)
{
	return (costs[0] + costs[1] + costs[2]);
}

double getAverageCost(double costs[], int size)
{
	return getTotalCost(costs, size) / size;
}

void displayInvoice(string custName, string names[], double costs[], int size)
{
	cout << "\nInvoice for Customer: " << custName << endl << endl;
	cout << "\t\tItems Purchased\n";
	cout << "===============================================\n";
	cout << setw(30) << left << "Item" << " " << setw(10) << right << "Cost" << endl; // Table header
	cout << "===============================================\n";
	cout << setw(30) << left << names[0] << "$" << setw(10) << right << costs[0] << endl;
	cout << setw(30) << left << names[1] << "$" << setw(10) << right << costs[1] << endl;
	cout << setw(30) << left << names[2] << "$" << setw(10) << right << costs[2] << endl;
	cout << setw(30) << left << "Total Cost" << "$" << setw(10) << right << getTotalCost(costs, size) << endl;
	cout << setw(30) << left << "Average Cost" << "$" << setw(10) << right << getAverageCost(costs, size) << endl;
	cout << "\nThank you for shoping S-Mart.";
}
