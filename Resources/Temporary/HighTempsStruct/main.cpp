/******************************
Name: Mohamed Rahaman
Date: November 30, 2017
File: main.cpp
Display average, min, max.
********************************/

// Headers
#include <iostream>									
#include <cstdlib>									
#include <string>									
#include <fstream>									
#include <iomanip>	
#include <vector>
using namespace std;

// Structure for month temperatures
struct MonthTemps
{
	string name;
	string season;
	double average;
	int max, min; 
};

// Global variables
const string FILENAME = "HighTemps2014.txt";

// Function declarations
void pause(); 
void loadMonthsTemps(vector<MonthTemps>& months, string fileName);
void displayAvgTemp(vector<MonthTemps>& months);
void displayMaxTemp(vector<MonthTemps>& months);
void displayMinTemp(vector<MonthTemps>& months);
string getTempCondition(int temp);
int getLongestNameLenght(const vector<MonthTemps>& months);
void swap(MonthTemps & first, MonthTemps & second);
void bubbleSort(vector<MonthTemps>& months, 
				bool(*doSwapTest)(MonthTemps&, MonthTemps&));		// pointer to a function
bool doAverageSwapTest(MonthTemps& first, MonthTemps& second);
bool doMaxSwapTest(MonthTemps& first, MonthTemps& second);
bool doMinSwapTest(MonthTemps& first, MonthTemps& second);

// Template Function
template <typename T>
T getValidatedInput();

int main()
{
	vector<MonthTemps> months;	// MonthTemps Collection
	char choice;				// User's choice

	// Get months and temps
	loadMonthsTemps(months, FILENAME);

	// Loop until
	do
	{
		// Present the menu
		cout << "\n\nTemperature Report Program\n\n"
			<< "\t1. Display Average\n"
			<< "\t2. Display Maximum\n"
			<< "\t3. Display Minimum\n"
			<< "\t4. Quit Program\n"
			<< "Enter Your Choice: ";
		cin >> choice;

		while (getchar() != '\n');

		switch (choice)
		{
			case '1': // Average
				displayAvgTemp(months);
				break;
			case '2': // Max
				displayMaxTemp(months);
				break;
			case '3': // Min
				displayMinTemp(months);
				break;
			case '4': break; 
			default:
				cout << "\nInvalid option. Please Try again.";
				break;
		}

		if (choice != '4')
		{
			cout << endl;
			pause();
			exit(EXIT_FAILURE);
		}

	} while (choice != '4');

	//	Make sure we place the end message on a new line
	cout << endl;

	pause(); // Pause the console
	
	return 0;
}

template <typename T>
T getValidatedInput()
{
	// Get input of type T
	T result;
	cin >> result;

	// Check if the failbit has been set, meaning the beginning of the input
	// was not type T. Also make sure the result is the only thing in the input
	// stream, otherwise things like 2b would be a valid int.
	if (cin.fail() || cin.get() != '\n')
	{
		// Set the error state flag back to goodbit. If you need to get the input
		// again (e.g. this is in a while loop), this is essential. Otherwise, the
		// failbit will stay set.
		cin.clear();

		// Clear the input stream using and empty while loop.
		while (cin.get() != '\n');

		// Throw an exception. Allows the caller to handle it any way you see fit
		// (exit, ask for input again, etc.)
		throw ios_base::failure("Invalid input.");
	}

	return result;
}

void pause()
{
	cout << "\n<Press Enter To Continue>";
	cin.ignore().get();
}

void loadMonthsTemps(vector<MonthTemps>& months, string fileName)
{
}

void displayAvgTemp(vector<MonthTemps>& months)
{
}

void displayMaxTemp(vector<MonthTemps>& months)
{
}

void displayMinTemp(vector<MonthTemps>& months)
{
}

string getTempCondition(int temp)
{
	return string();
}

int getLongestNameLenght(const vector<MonthTemps>& months)
{
	return 0;
}

void swap(MonthTemps & first, MonthTemps & second)
{
}

void bubbleSort(vector<MonthTemps>& months, bool(*doSwapTest)(MonthTemps &, MonthTemps &))
{
}

bool doAverageSwapTest(MonthTemps & first, MonthTemps & second)
{
	return false;
}

bool doMaxSwapTest(MonthTemps & first, MonthTemps & second)
{
	return false;
}

bool doMinSwapTest(MonthTemps & first, MonthTemps & second)
{
	return false;
}
