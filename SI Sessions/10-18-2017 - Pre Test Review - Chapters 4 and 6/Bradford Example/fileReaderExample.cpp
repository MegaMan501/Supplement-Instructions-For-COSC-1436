// This program reads data from a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string FILENAME = "random.txt"; // Holds the file name

int main()
{
    ifstream inputFile;

    int number = 0;
    int counter = 0;

    // Open the file.
    inputFile.open(FILENAME);

    // Read the numbers from the file and display them.
    while (inputFile >> number)
    {
        cout << number << endl;
        counter++;
    }

    // Close the file.
    inputFile.close();

    // Display results
    cout << "\n----------\n" << "The number of items in "
        << FILENAME << " is " << counter << ".\n";

    system("PAUSE");
    return 0;
}
