# Predict The output

1.
```c++
#include <iostream>
using namespace std;

int main()
{
  double salary, monthly;
  cout << "What is your annual salary? ";
  cin >> salary;                        // Assume the user enters 38700. Use a calculator.
  monthly = static_cast<int>(salary) / 12;
  cout << "Your monthly wages are " << monthly << endl;
  return 0;
}
```

2.
```c++
#include <iostream>
using namespace std;

int main()
{
  long x, y, z;
  x = y = z = 4;
  x += 2;
  y −= 1;
  z *= 3;
  cout << x << " " << y << " "  << z << endl;
  return 0;
}

```
