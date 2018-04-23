# Spot The Error - Chapter 7

1. First Problem
```c++
    vector<int> numbers = { 1, 2, 3, 4 };
```
<!-- Solution:
```c++
    vector<int> numbers { 1, 2, 3, 4 };
``` -->

2. Second Problem
```c++
    void showValues(int nums[4][])
    {
        for (rows = 0; rows < 4; rows++)
            for (cols = 0; cols < 5; cols++)
                cout << nums[rows][cols];
    }
```
<!-- Solution:
```c++
    void showValues(int nums[4][5])
    {
        for (int rows = 0; rows < 4; rows++)
            for (int cols = 0; cols < 5; cols++)
                cout << nums[rows][cols];
    }
``` -->

3. Bonus Problem
```c++
    char greeting[] = {'H', 'e', 'l', 'l', 'o'};
    cout << greeting;
```
<!-- Solution:
```c++
    char greeting[] = {'H', 'e', 'l', 'l', 'o'};

    for ( auto letter : greeting)
        cout << letter;
``` -->
