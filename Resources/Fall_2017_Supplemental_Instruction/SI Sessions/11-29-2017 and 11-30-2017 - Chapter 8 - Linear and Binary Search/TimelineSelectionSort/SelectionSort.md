# Timeline of __Selection__ Sorting Algorithm

The bubble sort is inefficient for large arrays because items only move by one element at a time.
The selection sort, however, usually performs fewer exchanges because it moves items immediately
to their final position in the array. It works like this: The smallest value in the array is
located and moved to element 0. Then the next smallest value is located and moved to element 1.

## Example __8-5__:

```c++
// This program uses the selection sort algorithm to sort an
// array in ascending order.
#include <iostream>
using namespace std;

// Function prototypes
void selectionSort(int [], int);
void showArray(int [], int);

int main()
{
   // Define an array with unsorted values
   const int SIZE = 6;
   int values[SIZE] = {5, 7, 2, 8, 9, 1};

   // Display the values.
   cout << "The unsorted values are\n";
   showArray(values, SIZE);

   // Sort the values.
   selectionSort(values, SIZE);

   // Display the values again.
   cout << "The sorted values are\n";
   showArray(values, SIZE);
   return 0;
}

//**************************************************************
// Definition of function selectionSort.                       *
// This function performs an ascending order selection sort on *
// array. size is the number of elements in the array.         *
//**************************************************************

void selectionSort(int array[], int size)
{
   int startScan, minIndex, minValue;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minValue = array[startScan];
      for(int index = startScan + 1; index < size; index++)
      {
         if (array[index] < minValue)
         {
            minValue = array[index];
            minIndex = index;
         }
      }
      array[minIndex] = array[startScan];
      array[startScan] = minValue;
   }
}

//**************************************************************
// Definition of function showArray.                           *
// This function displays the contents of array. size is the   *
// number of elements.                                         *
//**************************************************************

void showArray(int array[], int size)
{
   for (int count = 0; count < size; count++)
      cout << array[count] << " ";
   cout << endl;
}
```
