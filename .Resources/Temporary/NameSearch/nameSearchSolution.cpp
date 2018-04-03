// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vectors>
using namespace std;

// Global variables
const string FILENAME = "BoysAndGirlNameRank.txt";

// Function declarations
void pause();
void loadFile(vector<string> & boyName, vector<string> & girlName, int & rank, string fileName);
string getName();
string getPopularityStatus(string name, int rank);

int main()
{
    vector<string> boyName;
    vector<string> girlName;
    string popularityStatus;
    bool status = true;
    int rank;

    // Load the text file into the vectors
    loadFile(boyName, girlName, FILENAME);

    // Menu for user's choice
    do
    {
        char choice;
        cout << "\nName Search\n"
            << "\t1.) Boy Names\n"
            << "\t2.) Girl Names\n"
            << "\t3.) Quit\n"
            << "Enter your choice: ";
        cin >> choice;

        while(getchar != '\n');

        switch (choice)
        {
            case '1':
                
            case '2':
            case '3':
                status = false;
            default:
        }

    } while(true);

	// A non-system dependent method
    pause();

    return 0;
}

// Pause the console
void pause()
{
	cout << "\n\nPress any key to continue....";
	cin.ignore().get();
}

void loadFile(vector<string> & boyName, vector<string> & girlName, string fileName)
{
    ifstream inFile;
    string bName,
           gName;

    inFile.open();

    if(!inFile)
    {
        cout << "ERROR! File failed to open";
        inFile.close();
        pause();
        exit(EXIT_FAILURE);
    }



    inFile.close();
}

string getPopularityStatus(vector<string> & girlName, vector<string> & boyName, int rank)
{

}
