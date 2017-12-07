// This program uses an array of structures.
#include <iostream>
#include <iomanip>
using namespace std;

struct PayInfo
{
	double hours;      // Hours worked
	double payRate; // Hourly pay rate
};

// Function Prototypes
void pause();
void showOutput(PayInfo workers[], int index, int size);

int main()
{
	const int NUM_WORKERS = 3;      // Number of workers
	PayInfo workers[NUM_WORKERS];   // Array of structures
	int index;                      // Loop counter

	// Get employee pay data.
	cout << "Enter the hours worked by " << NUM_WORKERS
		<< " employees and their hourly rates.\n";

	for (index = 0; index < NUM_WORKERS; index++)
	{
		// Get the hours worked by an employee.
		cout << "Hours worked by employee #" << (index + 1);
		cout << ": ";
		cin >> workers[index].hours;

		while (workers[index].hours <= 0 || workers[index].hours > 60)
		{
			system("cls");
			cout << "The hours worked must be in between 0 and 60.\n";
			cout << "Hours worked by employee #" << (index + 1);
			cout << ": ";
			cin >> workers[index].hours;
		}

		// Get the employee's hourly pay rate.
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin >> workers[index].payRate;
		cout << endl;

		while (workers[index].payRate <= 0 || workers[index].payRate > 30)
		{
			system("cls");
			cout << "Hourly pay rate for employee #";
			cout << (index + 1) << ": ";
			cin >> workers[index].payRate;
			cout << endl;
		}
	}

	showOutput(workers, index, NUM_WORKERS);

	pause();
	return 0;
}

void pause()
{
	cout << "\nPress Enter to Continue";
	cin.ignore().get();
}

void showOutput(PayInfo workers[], int index, int size)
{
	// Display each employee's gross pay.
	cout << "Here is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < size; index++)
	{
		double gross;
		gross = workers[index].hours * workers[index].payRate;
		cout << "Employee #" << (index + 1);
		cout << ": $" << gross << endl;
	}
}
