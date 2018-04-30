/******************************
Name: Mohamed Rahaman
Date: November 30, 2017
File: main.cpp
Description:
Display average, min, max.
********************************/

// Headers
#include <iostream>									
#include <cstdlib>									
#include <string>									
#include <fstream>									
#include <iomanip>	
#include <vector>
#include <climits>
using namespace std;

// Structure for month temperatures
struct MonthTemps
{
	string name,
		season;
	double average;
	int max,
		min;
};

// Global variables
const string FILENAME = "HighTemps2014.txt";

// Function declarations
void loadMonthsTemps(vector<MonthTemps>& months, string fileName);
void displayAvgTemp(vector<MonthTemps>& months);
void displayMaxTemp(vector<MonthTemps>& months);
void displayMinTemp(vector<MonthTemps>& months);
string getTempCondition(int temp);
int getLongestNameLength(const vector<MonthTemps>& months);
void swap(MonthTemps & first, MonthTemps & second);
void bubbleSort(vector<MonthTemps>& months,
	bool(*doSwapTest)(MonthTemps&, MonthTemps&));		// pointer to a function
bool doAverageSwapTest(MonthTemps& first, MonthTemps& second);
bool doMaxSwapTest(MonthTemps& first, MonthTemps& second);
bool doMinSwapTest(MonthTemps& first, MonthTemps& second);

int main()
{
	vector<MonthTemps> months;	// MonthTemps Collection
	char choice;				// User's choice

	// Get months and temps
	try
	{
		loadMonthsTemps(months, FILENAME);
	}
	catch (const char *e)
	{
		cout << e << endl; 
		system("PAUSE");
		return -1; 
	}
	
	// Loop until
	do
	{
		// Present the menu
		cout << "\n\nTemperature Report Program\n\n"
			<< "\t1. Display Average\n"
			<< "\t2. Display Maximum\n"
			<< "\t3. Display Minimum\n"
			<< "\t4. Quit Program\n\n"
			<< "Enter Your Choice (1-4): ";
		cin >> choice;

		while (getchar() != '\n');  // flush the stream

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
		case '4':
			break;
		default:
			cout << "\nInvalid option. Please Try again.";
			break;
		}

		if (choice != '4')
		{
			cout << endl;
			system("PAUSE");
			system("CLS");
		}

	} while (choice != '4');

	return 0;
}

void loadMonthsTemps(vector<MonthTemps>& months, string fileName)
{
	ifstream ifile;			// input file stream
	int total = 0,			// accumulator for the total of temps
		max,				// max temp for the month
		min,				// min temp for the month
		currentTemp;		// current temp for the day
	MonthTemps month;		// temporary MonthTemp for getting MonthTemp data
	int numTemps = 0;		// how many temps for the current month

							// Open the file
	ifile.open(fileName);

	if (!ifile)
	{
		throw "Could not open file"; 
	}

	// Read file info
	while (ifile >> month.name >> month.season)
	{
		total = 0;			// zero out the accumulator
		max = INT_MIN;
		min = INT_MAX;
		numTemps = 0;

		while (ifile >> currentTemp)
		{
			numTemps++;
			total += currentTemp;
			if (currentTemp > max) max = currentTemp;
			if (currentTemp < min) min = currentTemp;
		} // end of inner while loop
		ifile.clear(); // clear fail

		if (numTemps > 0)
			month.average = static_cast<double>(total / numTemps);
		else
			month.average = INT_MIN;

		month.max = max;
		month.min = min;
		months.push_back(month);
	}	// end of the outter while loop

	ifile.close();

	// test
	/*for (int i = 0; i < months.size(); i++)
	{
	cout << months[i].name << " "
	<< months[i].season << " "
	<< months[i].average << " "
	<< months[i].max << " "
	<< months[i].min << endl;
	}*/
}

void displayAvgTemp(vector<MonthTemps>& months)
{
	// Get the length of longest name
	int maxLength = getLongestNameLength(months) + 1;

	// Set Output Formatting
	cout << setprecision(1) << fixed << showpoint;

	// Setup the table header
	cout << "\n\nTemperature Averages\n";
	cout << setw(maxLength) << left << "Month"
		<< setw(8) << right << "Average"
		<< setw(10) << "Condition" << endl;

	// Sor monthTemps by average
	bubbleSort(months, doAverageSwapTest);

	// Display table
	for (int i = 0; i < months.size(); i++)
	{
		cout << setw(maxLength) << left
			<< (months[i].name + " " + months[i].season)
			<< setw(8) << right << months[i].average
			<< setw(10) << getTempCondition(months[i].average) << endl;
	}
}

void displayMaxTemp(vector<MonthTemps>& months)
{
	// Get the length of the longest name
	int maxLength = getLongestNameLength(months) + 1;

	// Output formatting
	cout << setprecision(1) << fixed << showpoint;

	// Setup table header
	cout << "\n\nTemperature Maximums\n";
	cout << setw(maxLength) << left << "Month"
		<< setw(8) << right << "Maximum"
		<< setw(10) << "Condition" << endl;

	// Sor monthTemps by average
	bubbleSort(months, doMaxSwapTest);

	// Display table
	for (int i = 0; i < months.size(); i++)
	{
		cout << setw(maxLength) << left
			<< (months[i].name + " " + months[i].season)
			<< setw(8) << right << months[i].max
			<< setw(10) << getTempCondition(months[i].max) << endl;
	}
}

void displayMinTemp(vector<MonthTemps>& months)
{
	// Get the length of the longest name
	int maxLength = getLongestNameLength(months) + 1;

	// Output formatting
	cout << setprecision(1) << fixed << showpoint;

	// Setup table header
	cout << "\n\nTemperature Minimums\n";
	cout << setw(maxLength) << left << "Month"
		<< setw(8) << right << "Minimum"
		<< setw(10) << "Condition" << endl;

	// Sor monthTemps by average
	bubbleSort(months, doMinSwapTest);

	// Display table
	for (int i = 0; i < months.size(); i++)
	{
		cout << setw(maxLength) << left
			<< (months[i].name + " " + months[i].season)
			<< setw(8) << right << months[i].min
			<< setw(10) << getTempCondition(months[i].min) << endl;
	}
}

string getTempCondition(int temp)
{
	if (temp >= 110)
		return "Heck";
	else if (temp >= 100)
		return "Scorching";
	else if (temp >= 90)
		return "Very hot";
	else if (temp >= 80)
		return "Hot";
	else if (temp >= 70)
		return "Mild";
	else if (temp >= 60)
		return "Cold";
	else
		return "Very Cold";
}

int getLongestNameLength(const vector<MonthTemps>& months)
{
	int maxLength = 0;

	for (int i = 0; i < months.size(); i++)
	{
		int length = months[i].name.length() +
			months[i].season.length() + 1;
		if (length > maxLength)
		{
			maxLength = length;
		}
	}

	return maxLength;
}

void swap(MonthTemps & first, MonthTemps & second)
{
	MonthTemps temp = first;
	first = second;
	second = temp;
}

void bubbleSort(vector<MonthTemps>& months,
	bool(*doSwapTest)(MonthTemps &, MonthTemps &))
{
	bool didSwap = false;

	for (int i = months.size() - 1; i > 0; i--)
	{
		didSwap = false;

		for (int j = 0; j < i; j++)
		{
			if ((*doSwapTest)(months[j], months[j + 1]))
			{
				swap(months[j], months[j + 1]);
				didSwap = true;
			}
		} // end of inner for loop
		if (!didSwap) break;
	} // end of outter for loop
}

bool doAverageSwapTest(MonthTemps & first, MonthTemps & second)
{
	return first.average < second.average;
}

bool doMaxSwapTest(MonthTemps & first, MonthTemps & second)
{
	return first.max < second.max;
}

bool doMinSwapTest(MonthTemps & first, MonthTemps & second)
{
	return first.min < second.min;
}
