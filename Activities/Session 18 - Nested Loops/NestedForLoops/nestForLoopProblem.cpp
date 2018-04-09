// Nested for loops
#include <iostream>
using namespace std;

int main()
{
	const int ROWS_MAX = 10;
	const int ROWS_MIN = 1;

	cout << "Half Pyramid:\n\n";
	for (int row = ROWS_MIN; row <= ROWS_MAX; row++)
	{
		for (int col = ROWS_MIN; col <= row; col++)
		{
			cout << "+";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Upside Down Half Pyramid:\n\n";
	for (;;)
	{
		for (;;)
		{
			cout << "+";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Full Pyramid:\n\n";
	for (;;)
	{
		for (;;)
		{
			cout << " ";
		}
		for (;;)
		{
			cout << "+";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Upside Down Full Pyramid:\n\n";
	for (int row = ROWS_MAX; row >= ROWS_MIN; row--)
	{
		for (int col = ROWS_MIN; col <= ROWS_MAX - row; col++)
		{
			cout << " ";
		}
		for (int col = ROWS_MIN; col < row * 2; col++)
		{
			cout << "+";
		}
		cout << endl;
	}

	// Pauses the Screen
	cout << endl;
	system("PAUSE");
	return 0;
}
