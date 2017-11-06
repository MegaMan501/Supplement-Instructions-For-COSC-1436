# Speed Converter
Write a program that displays a table of speeds in kilometers per hour with their values 
converted to miles per hour. The formula for converting kilometers per hour to miles per hour is:

```
MPH = KPH * 0.6214
```

In the formula, MPH is the speed in miles per hour and KPH is the speed in kilometers per hour.
The table that your program displays should show speeds from 60 kilometers per hour
through 130 kilometers per hour, in increments of 10, along with their values converted to
miles per hour. The table should look something like this:

| KPH | MPH |
| --- | --- |
| 60 | 37.3 |
| 70 | 43.5 |
| 80 | 49.7 |
| . . | . . |
| 130 | 80.8 |

After thinking about this table of values, you decide that you will write a for loop that uses
a counter variable to hold the kilometer-per-hour speeds. The counter’s starting value will
be 60, its ending value will be 130, and you will add 10 to the counter variable after each
iteration. Inside the loop you will use the counter variable to calculate a speed in miles-perhour.

```c++
// This program converts the speeds 60 kph through
// 130 kph (in 10 kph increments) to mph.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Constants for the speeds


  // Constant for the conversion factor, which is 0.6214.

  // Variables
  // To hold speeds in kph
  // To hold speeds in mph

  // Set the numeric output formatting. To one decimal point.

  // Display the table headings.

  // Display the speeds. Use For Loop
  for ( ; ; )
  {
    
    // Calculate mph

    // Display the speeds in kph and mph.
    
  }
  
  return 0;
}
```
