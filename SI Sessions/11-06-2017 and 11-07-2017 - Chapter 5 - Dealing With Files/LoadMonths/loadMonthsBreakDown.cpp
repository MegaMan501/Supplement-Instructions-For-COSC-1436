#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Global Variables
const int MAX_MONTH		= 12;						// Maximum months we are will to process
const int MAX_DAYS		= 30;						// Maximum days per month we will process
const string FILENAME	= "HighTemps2014.txt";		// File to open

// Function Declarations
void pause();

int main()
{
    ifstream inFile;								// Input file stream
    string months[MAX_MONTH];                       // List of month names
    string monthName,								// Name of the month
        seasonName;									// Name of season
    int temps[MAX_MONTH][MAX_DAYS];                 // table of temps
	int numMonths = 0;								// Number of months actually read

	// Open the file
	inFile.open(FILENAME);
	if (!inFile)
	{
		cout << "Could not open file";
		pause();
		exit(EXIT_FAILURE);
	}

	// Loop through each row
	for (int i = 0; i < MAX_MONTH && (inFile >> monthName >> seasonName); i++, numMonths++)
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

    // Display Results
    cout << endl;
    for (int i = 0; i < numMonths; i++)
	{
		cout << months[i] << " ";
		for (int j = 0; j < MAX_DAYS; j++)
		{
			cout << temps[i][j] << " ";
		}
		cout << endl;
	}
    cout << "\nNumber of months read: " << numMonths << endl;

    pause();
    return 0;
}

void pause()
{
	cout << "\n\nPress any key to continue....";
	cin.ignore().get();
}
