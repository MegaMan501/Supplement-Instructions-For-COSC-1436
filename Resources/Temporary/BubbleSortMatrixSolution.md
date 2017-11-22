# Bubble Sort Step-Wise Matrix

## Solution:

### 1. Variables:
```c++
    const int SIZE = 5;
    int unsortedArray[] = { 7, 2, 3, 8, 9, 1 };
```  

### 2. Matrix:  

| Steps: | Element 0 | Element 1 | Element 2 | Element 3 | Element 4 | Element 5 |
| --- | --- |
| __(1)__ | 7        | 2         | 3         | 8         | 9         | 1         |
| __(2)__ | 2        | 7         | 3         | 8         | 9         | 1         |
| __(3)__ | 2        | 3         | 7         | 8         | 9         | 1         |
| __(4)__ | 2        | 3         | 7         | 8         | 1         | 9         |
| __(5)__ | 2        | 3         | 7         | 1         | 8         | 9         |
| __(6)__ | 1        | 2         | 3         | 7         | 8         | 9         |

### 3. Functional Algorithm:

```c++
void sortArray(int array[], int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int count = 0; count < (size − 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}            
```

### 4. Matrix Solution:

| Element 0 | Element 1 | Element 2 | Element 3 | Element 4 | Element 5 |
| --- | --- |
|  1        | 2         | 3         | 7         | 8         | 9         |
