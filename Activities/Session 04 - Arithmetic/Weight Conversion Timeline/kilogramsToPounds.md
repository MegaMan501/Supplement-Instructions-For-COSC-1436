# Weight Conversion `Jumbled Timeline`

Arrange each logical part of the code below in correct order on the timeline.
Be sure to have an explanation for why your choices.

This code is converting kilograms to pounds.

1. Choice
```c++
	// Read in the user's input and save it into kilograms variable
	cin >> kilograms;
```
2. Choice
```c++
 // The following line does the conversion.
 pounds = kilograms * 2.2;
```
3. Choice
```c++
int main()
{
```
4. Choice
```c++
	// Write code here that displays the user's weight in pounds
	cout <<"\nYour weight is " << pounds << " pounds.";
```  
5. Choice
```c++
	cout << endl;
	system("PAUSE");
```
6.  Choice
```c++
	// Write code here that prompts the user to enter their weight in kilograms
	cout << "Please enter how many kilograms you weight (64kg - 145kg): ";
```
7.  Choice
```c++
	double pounds,		// holds the weight in pounds
	       kilograms;	// holds the weight in kilograms
```
8. Choice
```c++
#include <iostream>
using namespace std;
```
9. Choice
```c++
	return 0;
}
```

## Solution
```c++
#include <iostream>
using namespace std;

int main()
{
	double pounds,		// holds the weight in pounds
	       kilograms;	// holds the weight in kilograms

	// Write code here that displays the user's weight in pounds
	cout <<"\nYour weight is " << pounds << " pounds.";

	// Read in the user's input and save it into kilograms variable
	cin >> kilograms;

	// The following line does the conversion.
	pounds = kilograms * 2.2;

	cout << endl;
	system("PAUSE");

	return 0;
}
```
