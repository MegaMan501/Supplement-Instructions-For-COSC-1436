# __For__ Loop to __While__ Loop

Covert this for loop to while loop.
```c++
#include <iostream>
using namespace std;

int main()
{
    for(int count = 1; count <= 10; count++)
    {
        cout << "\nWe are on " << count << " count.";
    }

    system("PAUSE");
    return 0;
}
```
<!--
### Solution
```c++
#include <iostream>
using namespace std;

int main()
{
    int count = 1;

    while (count <= 10)
    {
        cout << "\nWe are on " << count << " count.";
        count++;
    }

    system("PAUSE");
    return 0;
}
```M
-->
