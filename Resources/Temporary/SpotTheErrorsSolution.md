# Find all of the Errors of this **Parallel Array**

```c++
// This program uses two parallel arrays: one for hours
// worked and one for pay rate.
#include <iostream>
#include <iomanip>                                              // 1
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;    // Number of employees
    int hours[NUM_EMPLOYEES];       // Holds hours worked
    double payRate[NUM_EMPLOYEES];  // Holds pay rates          // 2

    // Input the hours worked and the hourly pay rate.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES
        << " employees and their\n"
        << "hourly pay rates.\n";                               // 3
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Hours worked by employee #" << (index+1) << ": ";
        cin >> hours[index];
        cout << "Hourly pay rate for employee #" << (index+1) << ": ";  // 4
        cin >> payRate[index];
    }

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);

    for (int index = 0; index < NUM_EMPLOYEES; index++)         // 5
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);                    // 6
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
```
