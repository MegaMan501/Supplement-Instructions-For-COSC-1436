# How to Compare Arrays in C++? 

### 1. Why should you __not__ compare arrays like this? 

```c++
int main()
{
    const int SIZE = 5;
	int arrayOne[SIZE] = { 50, 10, 15, 20, 25 };
	int arrayTwo[SIZE] = { 50, 10, 15, 20, 25 };
    
	if (arrayOne == arrayTwo)	// This type of comparison is false
		cout << "The arrays are equal.\n";
	else
		cout << "The arrays are not equal.\n";
}
```

### 2. Why is this the correct why to compare arrays? 

```c++
#include <iostream>
using namespace std; 

int main()
{
    const int SIZE = 5; 
	int arrayOne[SIZE] = { 50, 10, 15, 20, 25 };
	int arrayTwo[SIZE] = { 50, 10, 15, 20, 25 };
	bool isEqual = true; 

	for (int i = 0; i < SIZE; i++)
	{
		cout << "arrayOne[" << i << "] = " << arrayOne[i] 
			<< "\t" << "arrayTwo[" << i << "] = " << arrayTwo[i] << endl; 
		if (arrayOne[i] != arrayTwo[i])
			isEqual = false; 
	}

	if (isEqual)
		cout << "The arrays are equal.\n";
	else
		cout << "The arrays are not equal.\n"; 

	cout << endl; 
	system("PAUSE"); 
	return 0; 
}
```
