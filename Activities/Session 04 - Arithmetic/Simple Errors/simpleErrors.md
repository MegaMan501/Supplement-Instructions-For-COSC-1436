# Simple Errors
Find all of the errors.

### Problem
```c++
#include <i0stream>
using namespace std;

int main()
{
  int month = 2; days = 28;

  cout << "Month " << month
    << " has " << days << " days./n";

  // Pauses the output
  cout << endl;
  system("stop");

  return 0;
}
```

### Solution
```c++
#include <iostream> // First Error
using namespace std;

int main()
{
  int month = 2, days = 28; // Second Error

  cout << "Month " << month
    << " has " << days << " days.\n";   // Third Error

  // Pauses the output
  cout << endl;
  system("PAUSE");  // Last Error

  return 0;
}
```
