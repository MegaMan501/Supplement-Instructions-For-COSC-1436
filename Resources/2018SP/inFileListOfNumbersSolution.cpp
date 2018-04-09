// This program lets the user enter a filename name ListOfNumbers
// then display all of the values in the
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Function Declarations
void pause();

int main()
{
    ifstream inputFile;             // Create input stream object for input
    string filename;                // Create a string for user entered filename
    double number;                  // Store input from file into floating point number.

    // Get the filename from the user. Remember to use getline.
    cout << "Enter the filename: ";
    getline(cin, filename);

    // Open the file.
    inputFile.open(filename);

    // If the file successfully opened, process it.
    if (inputFile)
    {
        // Read the numbers from the file and
        // display them.
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // Close the file.
        inputFile.close();
    }
    else
    {
        // Display an error message.
        cout << "Error opening the file.\n";
    }

    pause();
    return 0;
}

// Pauses the console
void pause()
{
	cout << "\n\nPress any key to continue....";
	cin.ignore().get();
}
