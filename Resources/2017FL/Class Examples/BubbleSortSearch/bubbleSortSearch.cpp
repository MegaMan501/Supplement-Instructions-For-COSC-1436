/******************************
   Mohamed Rahaman
   November 21, 2017
   main.cpp
   Description: Bubble sort program and other stuff.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

// Global variables
const int SIZE = 10000;				// Size of our array
const int MAX_VALUE = 100000;		// max value in array
const int EXP_SIZE = SIZE * 100;	// number of expriement

// Function declarations
void bubbleSort(int arr[], int size);
void swap(int & a, int & b);
void swap(string & a, string & b);
void copyArray(const int s[], int t[], int size);
int linearSearch(const int s[], int e, int size);
int binarySearch(const int s[], int e, int size);

// Template
template <typename T>
T getValidatedInput();

int main()
{
	int unsortedArr[SIZE];		// unsorted data
	int sortedArr[SIZE];		// sorted data
	int searchSequence[SIZE];	// set of search elements
	clock_t startTime;			// time run started
	clock_t endTime;			// time run ended
	double totaltime;			// time run took in seconds

	// Seed the RNG
	srand(unsigned(time(0)));

	// Get some values for our array
	for (int i = 0; i < SIZE; i++)
	{
		unsortedArr[i] = 1 + rand() % MAX_VALUE; // 1 to max value
	}

	// Copy the array to another so we use the value again
	copyArray(unsortedArr, sortedArr, SIZE);

	// Sort it out
	bubbleSort(sortedArr, SIZE);

	// Set the search sequence
	for (int i = 0; i < SIZE; i++)
	{
		searchSequence[i] = 1 + rand() % (MAX_VALUE + 1000);
	}

	// Run the experiment
	// Linear Search
	startTime = clock();
	for (int i = 0, j = 0; i < EXP_SIZE; i++)
	{
		j = i % SIZE;
		linearSearch(unsortedArr, searchSequence[j], SIZE);
	}
	endTime = clock();

	// Get the total time in seconds
	totaltime = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
	cout << "The number of seconds used by Linear Search. " << totaltime << endl;

	// Now for the binary search
	startTime = clock();
	for (int i = 0, j = 0; i < EXP_SIZE; i++)
	{
		j = i % SIZE;
		binarySearch(sortedArr, searchSequence[j], SIZE);
	}
	endTime = clock();

	// Get the total time in seconds
	totaltime = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
	cout << "The number of seconds used by Binary Search. " << totaltime << endl;

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

template <typename T>
T getValidatedInput()
{
	// Get input of type T
	T result;
	cin >> result;

	// Check if the failbit has been set, meaning the beginning of the input
	// was not type T. Also make sure the result is the only thing in the input
	// stream, otherwise things like 2b would be a valid int.
	if (cin.fail() || cin.get() != '\n')
	{
		// Set the error state flag back to goodbit. If you need to get the input
		// again (e.g. this is in a while loop), this is essential. Otherwise, the
		// failbit will stay set.
		cin.clear();

		// Clear the input stream using and empty while loop.
		while (cin.get() != '\n');

		// Throw an exception. Allows the caller to handle it any way you see fit
		// (exit, ask for input again, etc.)
		throw ios_base::failure("Invalid input.");
	}

	return result;
}

// do a acsending order of arr
void bubbleSort(int arr[], int size)
{
	bool didSwap;		// did we swap

	// Go through each element from size - 1 to element 1
	for (int i = 0; i < (size - 1); i++)
	{
		didSwap = false;

		// Check all the remaining element from 0 to i
		for (int j = 0; j < (size - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				didSwap = true;
				//swap(month[j], month[j + 1]);
			}
		} // end of inner loop
		if (!didSwap) break;	// get out here - we are done
	}	// end of the outer loop

}

// Swap values a and b
void swap(int & a, int & b)
{
	int temp = a;	// put a in temp
	a = b;			// a has now become b
	b = temp;		// b is now assign to temp
}

// Swap values a and b
void swap(string & a, string & b)
{
	string temp = a;
	a = b;
	b = temp;
}

// Copys contents of first array to second array.
// Assume both arrays are the same size.
void copyArray(const int s[], int t[], int size)
{
	for (int i = 0; i < size; i++)
	{
		t[i] = s[i];
	}
}

// returns -1 if not found
// returns position of element if found
// searches for e in s[]
int linearSearch(const int s[], int e, int size)
{
	int index = -1;	// hold the index value where e is found

	for (int i = 0; i < size; i++)
	{
		if (s[i] == e)
		{
			index = i;
			break;
		}
	}

	return index;
}

// returns -1 if not found
// returns position of the element if found
// searches for e in s[]
// array s must be sorted in ascending order
int binarySearch(const int s[], int e, int size)
{
	// starting position of first and last element
	int first = 0, last = size - 1;
	// starting position of middle element
	int mid = (first + last) / 2;
	int index = -1; // position where e is found

	while (first <= last)
	{
		if (s[mid] == e)
		{
			index = mid;
			break;
		}
		else if (s[mid] > e) // e is on left side
		{
			last = mid - 1;
		}
		else  //s[mid] < e, e is on right side
		{
			first = mid + 1;
		}
		mid = (first + last) / 2;
	}

	return index;
}
