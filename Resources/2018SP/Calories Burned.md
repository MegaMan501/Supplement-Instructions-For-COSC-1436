# Calories Burned Problem

Running on a particular treadmill you burn 3.6 calories per minute.Write a program that
uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.

<!--
### Solution: 
```c++
//	4. Calories Burned (page 293):
//	Running on a particular treadmill you burn 3.6 calories per minute.Write a program that
//	uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.
#include <iostream>
using namespace std; 

int main()
{
	double caloriesPerMinute = 3.6; 

	for (int i = 5; i <= 30; i+=5)
	{
		cout << "After " << i << " minutes you have burned " 
			<< caloriesPerMinute * i << " calories." << endl; 
	}

	// Pauses the Screen 
	cout << endl; 
	system("PAUSE");
	return 0;
}
```
-->
