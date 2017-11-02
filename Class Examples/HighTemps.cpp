/******************************
Name: Mohamed Rahaman
Date: October 31, 2017
File: main.cpp
Description: 
Display average, max, min for 
high temps of various months.
********************************/

// Headers
#include <iostream>									// cout, cin
#include <cstdlib>									// exit, and system
#include <string>									// strings
#include <fstream>									// file processing
#include <iomanip>									// output formating
using namespace std;

// Global variables
const int MAX_MONTH		= 12;						// Maximum months we are will to process
const int MAX_DAYS		= 30;						// Maximum days per month we will process
const string FILENAME	= "HighTemps2014.txt";		// File to open

// Template Function
template <typename T>
T getValidatedInput();

// Function declarations
int loadMonthsTemps ( string months[], int temps[][MAX_DAYS], string filename, int maxMonths );
void displayAvgTemp ( string months[], int temps[][MAX_DAYS], int monthCount );
void displayMaxTemp ( string months[], int temps[][MAX_DAYS], int monthCount );
void displayMinTemp ( string months[], int temps[][MAX_DAYS], int monthCount );
string getTempCondition ( int temp );
int getLongestNameLength ( string months[], int monthCount );


int main()
{
	int monthCount = 0;								// number of months processed
	int temps[MAX_MONTH][MAX_DAYS];					// table of temps
	string months[MAX_MONTH];						// list of month names
	char choice;									// holds user's choice
	
	// Get months and temps
	monthCount = loadMonthsTemps(months, temps, FILENAME, MAX_MONTH);

	// Loop until user says to quit
	do
	{
		// Present the menu
		cout << "\nTemperature Report Program\n\n"
			<< "\t1. Display Average Temperature\n"
			<< "\t2. Display Maximum Temperature\n"
			<< "\t3. Display Minimum Temperature\n"
			<< "\t4. Quit\n"
			<< "\n\tEnter your choice (1-4): ";
		cin >> choice; 

		while (getchar() != '\n');					// Flush the stream
		
		// Process the choice
		switch (choice)
		{
			case '1': // Average
				displayAvgTemp(months, temps, monthCount);
				break;
			case '2':	// Maximum
				displayMaxTemp(months, temps, monthCount);
				break;
			case '3':	// Min
				displayMinTemp(months, temps, monthCount);
				break;
			case '4':	// Quit
				break;
			default:
				cout << "\nInvalid Option, Please Try again.\n";
				break;
		}

		if (choice != '4')
		{
			cout << endl;
			system("PAUSE");
			system("CLS");
		}

	} while (choice != '4'); // end of do-while loop


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

// Load File content in to months, and temps
int loadMonthsTemps(string months[], int temps[][MAX_DAYS], string filename, int maxMonths)
{
	ifstream inFile;								// Input file stream
	string monthName,								// Name of the month
		seasonName;									// Name of season
	int numMonths = 0;								// Number of months actually read

	// Open the file
	inFile.open(FILENAME);
	if (!inFile)
	{
		cout << "Could not open file";
		system("PAUSE");
		exit(EXIT_FAILURE);
	}

	// Loop through each row
	for (int i = 0; 
		i < MAX_MONTH && (inFile >> monthName >> seasonName);
		i++, numMonths++)
	{
		// Loop through all of the temps of each row
		for (int j = 0; j < MAX_DAYS; j++)
		{
			inFile >> temps[i][j];
		}

		// Combine the month name with the season name
		months[i] = monthName + " " + seasonName; 
	}

	// Close the file
	inFile.close(); 

	// Test
	/*for (int i = 0; i < numMonths; i++)
	{
		cout << months[i] << " ";
		for (int j = 0; j < MAX_DAYS; j++)
		{
			cout << temps[i][j] << " ";
		}
		cout << endl;
	}*/

	return numMonths;
}

// Calcualate the average and display the average temperature
void displayAvgTemp(string months[], int temps[][MAX_DAYS], int monthCount)
{
	double average;												// average temp of days in month
	int total;													// total of all temps (accumulator)
	int maxLength = getLongestNameLength(months, monthCount);	// Get longest name

	// Setup table header
	cout << setprecision(1) << fixed << showpoint;
	cout << "\n\nTemperature Averages\n";
	cout << setw(maxLength + 1) << left << "Month"
		<< setw(8) << right << "Average"
		<< setw(10) << "Condition" << endl;
	cout << "-------------------------------\n";

	for (int i = 0; i < monthCount; i++)
	{
		cout << setw(maxLength + 1) << left << months[i];
		total = 0; // zero out the accumulator
		for (int j = 0; j < MAX_DAYS; j++)
		{
			total += temps[i][j];
		}
		average = static_cast<double>(total) / MAX_DAYS; 
		cout << setw(8) << right << average
			<< setw(12) << getTempCondition(static_cast<int>(average)) << endl; 
	}

}

// Calcualate the maximum and display the maximum temperature
void displayMaxTemp(string months[], int temps[][MAX_DAYS], int monthCount)
{
	int maxTemp;												// max temp
	int maxLength = getLongestNameLength(months, monthCount);	// Get longest name

	// Setup the header
	cout << fixed << showpoint << setprecision(1); 
	cout << setw(maxLength + 1) << left << "Month"
		<< setw(4) << right << "Max"
		<< setw(12) << "Condition" << endl; 
	cout << "-------------------------------\n"; 

	// loop through each row
	for (int i = 0; i < monthCount; i++)
	{
		cout << setw(maxLength + 1) << left << months[i];
		maxTemp = temps[1][0]; // initial temperature
		for (int j = 1; j < MAX_DAYS; j++)
		{
			if (maxTemp < temps[i][j])
				maxTemp = temps[i][j];
		}
		cout << setw(4) << right << maxTemp
			<< setw(10) << getTempCondition(maxTemp) << endl;
	}
}

// Calcualate the minimum and display the minimum temperature
void displayMinTemp(string months[], int temps[][MAX_DAYS], int monthCount)
{
	int minTemp;												// max temp
	int maxLength = getLongestNameLength(months, monthCount);	// Get longest name

	// Setup the header
	cout << fixed << showpoint << setprecision(1);
	cout << setw(maxLength + 1) << left << "Month"
		<< setw(4) << right << "Min"
		<< setw(12) << "Condition" << endl;
	cout << "-------------------------------\n";

	// loop through each row
	for (int i = 0; i < monthCount; i++)
	{
		cout << setw(maxLength + 1) << left << months[i];
		minTemp = temps[1][0]; // initial temperature
		for (int j = 1; j < MAX_DAYS; j++)
		{
			if (minTemp > temps[i][j])
				minTemp = temps[i][j];
		}
		cout << setw(4) << right << minTemp
			<< setw(10) << getTempCondition(minTemp) << endl;
	}
}

// Return a description of the temperature
string getTempCondition(int temp)
{
	if (temp > 110)
		return "Heck";
	else if (temp > 100)
		return "Scorching";
	else if (temp > 90)
		return "Very hot";
	else if (temp > 80)
		return "Hot";
	else if (temp > 70)
		return "Mild";
	else if (temp > 60)
		return "Cold";
	else
		return "Very Cold";
}

// Find the longest string in an array of strings
int getLongestNameLength(string months[], int monthCount)
{
	int maxLength = 0;	// Max length so far
	for (int i = 0; i < monthCount; i++)
	{
		// is it longer
		if (months[i].length() > maxLength)
		{
			maxLength = months[i].length();
		}
	}

	return maxLength;
}
