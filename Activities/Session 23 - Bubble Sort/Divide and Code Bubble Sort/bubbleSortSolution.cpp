// This program uses the bubble sort algorithm to sort an
// array in ascending order.
#include <iostream>
using namespace std;

// Function prototypes
void sortArray(int [], int);
void showArray(const int [], int);

int main()
{
    // Array of unsorted values
    const int SIZE = 6;
    int values[SIZE] = {7, 2, 3, 8, 9, 1};

    // Display the current values.
    cout << "The unsorted values are: \n";
    showArray(values, SIZE);

    // Sort the values.
    sortArray(values, SIZE);

    // Display the sorted values.
    cout << "The sorted values are:\n";
    showArray(values, SIZE);

    system("PAUSE");
    return 0;
}

//***********************************************************
// Definition of function sortArray                         *
// This function performs an ascending order bubble sort on *
// array. size is the number of elements in the array.      *
//***********************************************************
void sortArray(int array[], int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;

        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }

    } while (swap);
}

//*************************************************************
// Definition of function showArray.                          *
// This function displays the contents of array. size is the  *
// number of elements.                                        *
//*************************************************************
void showArray(const int array[], int size)
{
    for (int count = 0; count < size; count++)
       cout << array[count] << " ";

    cout << endl;
}
