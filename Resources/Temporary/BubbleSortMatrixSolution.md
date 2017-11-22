# Bubble Sort Step-Wise Matrix

## Solution:

### 1. Variables:
```c++
    const int SIZE = 5;
    int unsortedArray[] = { 7, 2, 3, 8, 9, 1 };
```  

### 2. Matrix:  

| Steps: | Element 0 | Element 1 | Element 2 | Element 3 | Element 4 | Element 5 |
| --- | --- | --- | --- | --- | --- | --- |
| __(1)__ | 7        | 2         | 3         | 8         | 9         | 1         |
| __(2)__ | 2        | 7         | 3         | 8         | 9         | 1         |
| __(3)__ | 2        | 3         | 7         | 8         | 9         | 1         |
| __(4)__ | 2        | 3         | 7         | 8         | 1         | 9         |
| __(5)__ | 2        | 3         | 7         | 1         | 8         | 9         |
| __(6)__ | 1        | 2         | 3         | 7         | 8         | 9         |
