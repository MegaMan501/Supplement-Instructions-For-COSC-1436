// This program uses the bubble sort algorithm to sort an
// array in ascending order.
#include <iostream>
using namespace std;

// Function prototypes
void sortArray(int [], int);
void showArray(const int [], int);
void pause();

int main()
{
    // Array of unsorted values
    const int SIZE = 6;
    int values[SIZE] = { 7, 2, 3, 8, 9, 1 };

    // Display the current values.


    // Sort the values.


    // Display the sorted values.


    pause();
    return 0;
}

//***********************************************************
// Definition of function sortArray                         *
// This function performs an ascending order bubble sort on *
// array. size is the number of elements in the array.      *
//***********************************************************
void sortArray(int array[], int size)
{

}

//*************************************************************
// Definition of function showArray.                          *
// This function displays the contents of array. size is the  *
// number of elements.                                        *
//*************************************************************
void showArray(const int array[], int size)
{

}

// A non-system dependent method to pause the console
void pause()
{
	cout << "\n<Press ENTER to continue>";
    cin.clear();
    cin.ignore().get();
}
