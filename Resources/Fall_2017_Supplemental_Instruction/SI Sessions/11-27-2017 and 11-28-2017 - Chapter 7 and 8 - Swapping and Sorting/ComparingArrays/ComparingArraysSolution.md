# Comparing Arrays

Is this how you __compare__ arrays?

```c++
    int firstArray[] = { 5, 10, 15, 20, 25 };
    int secondArray[] = { 5, 10, 15, 20, 25 };
    if (firstArray == secondArray)
        cout << "The arrays are the same.\n";
    else
        cout << "The arrays are not the same.\n";
```
## Questions:
1. If yes, explain what this is doing?
2. If no, explain what is wrong and how you might compare arrays.

__Hint:__ Got to __Chapter 7__ and read about comparing arrays in section __7.7__


## Solution:

```c++
    const int SIZE = 5;
    int firstArray[SIZE] = { 5, 10, 15, 20, 25 };
    int secondArray[SIZE] = { 5, 10, 15, 20, 25 };
    bool arraysEqual = true;    // Flag variable
    int count = 0;              // Loop counter variable

    // Determine whether the elements contain the same data.
    while (arraysEqual && count < SIZE)
    {
        if (firstArray[count] != secondArray[count])
        arraysEqual = false;
        count++;
    }

    if (arraysEqual)
        cout << "The arrays are equal.\n";
    else
        cout << "The arrays are not equal.\n";
```
