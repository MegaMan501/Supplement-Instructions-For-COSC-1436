# Is This A Legal Assignment?

### Is this assignment correct?
```c++
const int SIZE = 4;
int oldValues[SIZE] = {10, 100, 200, 300};
int newValues[SIZE];

newValues = oldValues;
```
### If not, what is the correct way to assign oldValues to newValues?

```c++
for (int count = 0; count < SIZE; count++)
    newValues[count] = oldValues[count];
```
