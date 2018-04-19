/******************************
Name: Mohamed Rahaman
Date: April 4, 2018
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

// Function declarations
int loadMonthsTemps ( string months[], int temps[][MAX_DAYS], string filename, int maxMonths );
void displayAvgTemp ( string months[], int temps[][MAX_DAYS], int monthCount );
void displayMaxTemp ( string months[], int temps[][MAX_DAYS], int monthCount );
void displayMinTemp ( string months[], int temps[][MAX_DAYS], int monthCount );
string getTempCondition ( int temp );
int getLongestNameLength ( string months[], int monthCount );

int main()
{
	int monthCount = 0;					// number of months processed
	int temps[MAX_MONTH][MAX_DAYS];		// table of temps
	string months[MAX_MONTH];			// list of month names
	char choice;						// holds user's choice

	// Load months and temps arrays
	try
	{
		monthCount = loadMonthsTemps(months, temps, FILENAME, MAX_MONTH);
	}
	catch (const char* e)
	{
		cout << e << endl << endl;
		system("PAUSE");
		return 0;
	}

	// Loop until user says to quit
	do
	{
		// Present the menu
		cout << "\n\tTemperature Report Program\n\n"
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

// Load File content in to months, temps array and temps array
int loadMonthsTemps(string months[], int temps[][MAX_DAYS], string filename, int maxMonths)
{
	ifstream inFile;		// Input file stream
	string monthName,		// Name of the month
		seasonName;			// Name of season
	int numMonths = 0;		// Number of months actually read

	// Open the file
	inFile.open(filename);
	if (!inFile)
	{
		throw "File cannot be opened";
	}

	// Loop through each row
	for (int i = 0; i < maxMonths && (inFile >> monthName >> seasonName); i++, numMonths++)
	{
		// Combine the month name with the season name
		months[i] = monthName + " " + seasonName;

		// Loop through all of the temps of each row
		for (int j = 0; j < MAX_DAYS; j++)
		{
			inFile >> temps[i][j];
		}
	}

	// Close the file
	inFile.close();

	// Test
	//	for (int i = 0; i < numMonths; i++)
	//	{
	//		cout << months[i] << " ";
	//		for (int j = 0; j < MAX_DAYS; j++)
	//			cout << temps[i][j] << " ";
	//		cout << endl;
	//	}

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
		<< setw(12) << "Condition" << endl;
	cout << "-----------------------------------\n";

	// Output the Table
	for (int i = 0; i < monthCount; i++)
	{
		// Output the month name
		cout << setw(maxLength + 1) << left << months[i];
		total = 0;	// zero out the accumulator
		for (int j = 0; j < MAX_DAYS; j++)
		{
			total += temps[i][j];
		}
		average = static_cast<double>(total) / MAX_DAYS;
		cout << setw(8) << right << average
			<< setw(12) << getTempCondition(static_cast<int>(average))
			<< endl;
	}

}

// Calculate the maximum and display the maximum temperature
void displayMaxTemp(string months[], int temps[][MAX_DAYS], int monthCount)
{
	int maxTemp;												// max temp
	int maxLength = getLongestNameLength(months, monthCount);	// Get longest name

	// Setup the header
	cout << fixed << showpoint << setprecision(1);
	cout << "\n\nTemperature Maximums\n";
	cout << setw(maxLength + 1) << left << "Month"
		<< setw(4) << right << "Max"
		<< setw(12) << "Condition" << endl;
	cout << "-----------------------------------\n";

	// loop through each row
	for (int i = 0; i < monthCount; i++)
	{
		cout << setw(maxLength + 1) << left << months[i];
		maxTemp = temps[i][0]; // initial temperature
		for (int j = 1; j < MAX_DAYS; j++)
		{
			if (maxTemp < temps[i][j])
				maxTemp = temps[i][j];
		}
		cout << setw(4) << right << maxTemp
			<< setw(10) << getTempCondition(maxTemp)
			<< endl;
	}
}

// Calculate the minimum and display the minimum temperature
void displayMinTemp(string months[], int temps[][MAX_DAYS], int monthCount)
{
	int minTemp;												// max temp
	int maxLength = getLongestNameLength(months, monthCount);	// Get longest name

	// Setup the header
	cout << fixed << showpoint << setprecision(1);
	cout << "\n\nTemperature Minimums\n";
	cout << setw(maxLength + 1) << left << "Month"
		<< setw(4) << right << "Min"
		<< setw(12) << "Condition" << endl;
	cout << "-----------------------------------\n";

	// loop through each row
	for (int i = 0; i < monthCount; i++)
	{
		cout << setw(maxLength + 1) << left << months[i];
		minTemp = temps[i][0]; // initial temperature
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
		return "Hot";
	else if (temp > 80)
		return "Warm";
	else if (temp > 70)
		return "Mild";
	else if (temp > 60)
		return "Cool";
	else
		return "Cold";
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
