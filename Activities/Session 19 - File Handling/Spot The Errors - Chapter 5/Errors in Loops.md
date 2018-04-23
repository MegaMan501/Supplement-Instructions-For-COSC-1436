# Spot the Errors - Chapter 5

```c++
// This program adds two numbers entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char again;

    while (again == 'y' || again == 'Y')
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;
        cout << "Their sum is << (num1 + num2) << endl;
        cout << "Do you want to do this again? ";
        cin >> again;
    return 0;
}
```

### Solution
```c++
// This program adds two numbers entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char again;

    do // use a do-while
    {                                       // missing {
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;

        cout << "Their sum is " << (num1 + num2) << endl; // missing "

        cout << "Do you want to do this again? ";
        cin >> again;

        while(getchar() != '\n'); // need to flush the stream

    }  while (again == 'y' || again == 'Y');             // missing } // and the while part should be moved here

    return 0;
}
```
