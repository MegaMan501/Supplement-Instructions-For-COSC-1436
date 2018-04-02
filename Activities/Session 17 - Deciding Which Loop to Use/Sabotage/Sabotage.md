# Sabotage - Sentinels
You have 3 minutes to create as many errors as possible on this code.
Then you have to switch with another student and correct their errors,
within 5 minutes.

Rules:
1. Don't delete all of the code.
2. Don't look at the solution.
3. You are not required to find all of the errors. 

```c++
// This program calculates the total number of points a
// soccer team has earned over a series of games. The user
// enters a series of point values, then −1 when finished.
// This program demonstrates how sentinels are used.

#include <iostream>
using namespace std;

int main()
{
    int game = 1,   // Game counter
        points,     // To hold a number of points
        total = 0;  // Accumulator

    cout << "Enter the number of points your team has earned\n";
    cout << "so far in the season, then enter −1 when finished.\n\n";
    cout << "Enter the points for game " << game << ": ";
    cin >> points;

    while (points != −1)
    {
        total += points;
        game++;
        cout << "Enter the points for game " << game << ": ";
        cin >> points;
    }

    cout << "\nThe total points are " << total << endl;

    system("PAUSE");
    return 0;
}
```
