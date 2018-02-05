// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Global variables
const int SIZE = 5;

// Function declarations
void pause();
int searchList(const int list[], int size, int value);

int main()
{
    int tests[SIZE] = {87, 75, 98, 100, 82};
    int results;

    // Search the array for 100.
    results = searchList(tests, SIZE, 100);

    // If searchList returned −1, then 100 was not found.
    if (results == -1)
        cout << "You did not earn 100 points on any test\n";
    else
    {
        // Otherwise results contains the subscript of
        // the first 100 found in the array.
        cout << "You earned 100 points on test ";
        cout << (results + 1) << endl;
    }

    // Pause the console
    pause();

    return 0;
}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n\nPress enter to continue....";
	cin.ignore().get();
}

/*
* The searchList function performs a linear search on an
* integer array. The array list, which has a maximum of size
* elements, is searched for the number stored in value. If the
* number is found, its array subscript is returned. Otherwise,
* −1 is returned indicating the value was not in the array.
*/
int searchList(const int list[], int size, int value)
{
    int index = 0;                      // Used as a subscript to search array
    int position = -1;                  // To record position of search value
    bool found = false;                 // Flag to indicate if the value was found

    while (index < size && !found)
    {
        if (list[index] == value)   // If the value is found
        {
            found = true;           // Set the flag
            position = index;       // Record the value's subscript
        }

        index++;                    // Go to the next element
    }

    return position;                // Return the position, or −1
}
