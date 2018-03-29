# __While__ Loop to __For__ Loop

Covert this while loop to a for loop.
```c++
#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int number;

    cout << "How many times do you what to print out a message to the user? : ";
    cin >> number;

    while (count <= number)
    {
        cout << "This is the " << (count + 1) << " iteration of this loop.\n";
        count++;
    }

    system("PAUSE");
    return 0;
}
```

### Solution
```c++
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "How many times do you what to print out a message to the user? : ";
    cin >> number;

    for(int count = 1; count <= number; count++)
    {
        cout << "This is the " << (count + 1) << " iteration of this loop.\n";
    }

    system("PAUSE");
    return 0;
}
```
