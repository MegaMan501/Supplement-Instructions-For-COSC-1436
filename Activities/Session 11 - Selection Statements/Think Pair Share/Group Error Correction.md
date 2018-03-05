# Think Pair Share - Group Error Correction
Find all of the errors in the code below, individually.
Then get into groups of 2 and correct the errors.
Lastly, present your solution to the other group,
with an explanation for each of the corrected errors.

__Useful Resources:__
1. [Tutorials Point C++ Decision Making](https://www.tutorialspoint.com/cplusplus/cpp_decision_making.htm)
2. [Geeks For Geeks C++ Decision Making](https://www.geeksforgeeks.org/decision-making-c-c-else-nested-else/)
3. [Cprogramming If Statements](https://www.cprogramming.com/tutorial/lesson2.html)

## Problem 1 - Has `8` Errors In Total
```c++
// This program averages 3 test scores.
// It uses the variable perfectScore as a flag.
include <iostream>
using namespace std;

int main()
{
    cout << "Enter your 3 test scores and I will ";
        << "average them:";

    int score1, score2, score3,
    cin >> score1 >> score2 >> score3;

    double average;
    average = (score1 + score2 + score3) / 3.0;

    if (average = 100);
        perfectScore = true; // Set the flag variable
        cout << "Your average is " << average << endl;
    bool perfectScore;

    if (perfectScore);
    {
        cout << "Congratulations!\n";
        cout << "That's a perfect score.\n";
        cout << "You deserve a pat on the back!\n";
    return 0;
}
```

<!-- ##  Problem 1 - Solution
```c++
// This program averages 3 test scores.
// It uses the variable perfectScore as a flag.
include <iostream>
using namespace std;

int main()
{

    int score1, score2, score3; // 1 - missing semicolon // 2 - wrong scope
    bool perfectScore; // 5 - Out of scope
    cout << "Enter your 3 test scores and I will ";
        << "average them:";
    cin >> score1 >> score2 >> score3;


    double average;
    average = (score1 + score2 + score3) / 3.0;

    if (average = 100); // 3 - Should not have semicolon
    { // 4 - Missing braces
        perfectScore = true; // Set the flag variable
        cout << "Your average is " << average << endl;
    } // 4
    if (perfectScore); // 6 - Should not have semicolon
    {
        cout << "Congratulations!\n";
        cout << "That's a perfect score.\n";
        cout << "You deserve a pat on the back!\n";
    }   // 7 - Missing Braces

    system("PAUSE"); // 8 - Missing a pause
    return 0;
}
```
-->

## Problem 2 - Also Has `9` Errors
```c++
// This program divides a user-supplied number by another
// user-supplied number. It checks for division by zero.
#include <i0stream>
using namespace std;

int main()
{
    int num1, num2, quotient;

    cout << "Enter a number:" << end1;
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num1;

    if (num2 == 0)
        cout << "Division by zero is not possible.\n";
        cout << "Please run the program again ";
        cout << "and enter a number besides zero.\n";
    else ()
        quotient = num1 / num2;
        cout << "The quotient of " << num1 <<
        cout << " divided by " << num2 << " is ";
        cout << quotient << endl;

    return 0.0;
}
```
<!--
## Problem 2 - Solution
```c++
// This program divides a user-supplied number by another
// user-supplied number. It checks for division by zero.
#include <iostream> // 1 - Use the correct include directive
using namespace std;

int main()
{
    double num1, num2, quotient;

    cout << "Enter a number: "; // 2 - Remove endl
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2; // 3 - Should be num2 not num1

    if (num2 == 0)
    { // 4 - Opening and Closing Missing the braces
        cout << "Division by zero is not possible.\n";
        cout << "Please run the program again ";
        cout << "and enter a number besides zero.\n";
    } // 4 - Opening and Closing Missing the braces
    else // 5 - Incorrect else, should not have parentheses
    { // 6 - Opening and Closing Missing the braces
        quotient = num1 / num2;
        cout << "The quotient of " << num1 // 7
             << " divided by " << num2 << " is ";
        cout << quotient << endl;
    } // 6 - Opening and Closing Missing the braces

    system("PAUSE"); // 8 - Missing a pause
    return 0; // 9 - should be returning 0 not 0.0
}

```
-->
