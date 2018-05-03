// This code demostrates how to sort a dynamic array.
// Then display the values of the dynamic array.
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Global Variables
const int SIZE = 10;

// Function Declarations
double* bubbleSortScores(double s[], int size);
void displayArray(double s[], int size);
void pause();

// Template Function
template <class T>
void Swap(T & a, T & b);

int main()
{
	double scores[SIZE] = { 12.1, 34.1, 56.2, 78.2, 4.7,	// Unsorted Array
							13.1, 4.1, 70.4, 98.2, 3.7 };
	double * pScores = nullptr;								// Dynamically Sorted Array

	// Display Unsorted Array
	displayArray(scores, SIZE);

	// New Dynamic Array
	pScores = bubbleSortScores(scores, SIZE);

	// Display Sorted Array
	displayArray(pScores, SIZE);

	delete[] pScores;
	pScores = nullptr;

	// Pause the Screen
	pause();
	return 0;
}

// Sort a new dynamically created array
double * bubbleSortScores(double s[], int size)
{
	double * pS = new double[size];
	bool didSwap;

	for (int i = 0; i < size; i++)
	{
		pS[i] = s[i];
	}

	for (int i = 0; i < (size - 1); i++)
	{
		didSwap = false;

		for (int j = 0; j < (size - 1); j++)
		{
			if (pS[j] < pS[j+1])
			{
				Swap<double>(pS[j], pS[j + 1]);
				didSwap = true;
			}
		}

		if (!didSwap) break;
	}

	return pS;
}

// Display the array
void displayArray(double s[], int size)
{
	cout << "Array Values: ";
	for (int i = 0; i < size; i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
}

// Pauses the array
void pause()
{
	cout << endl;
	cout << "Please Press Enter to Exit...";
	while (getchar() != '\n');
	cin.get();
}

// Swapping values
template <class T>
void Swap(T & a, T & b)
{
	T c = a;
	a = b;
	b = c;
}
