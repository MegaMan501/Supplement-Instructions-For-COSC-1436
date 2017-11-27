# Predict the output

Figure out the output of these parallel arrays.

```c++
    const int SIZE = 5;
    int time[SIZE] = {1, 2, 3, 4, 5},
        speed[SIZE] = {18, 4, 27, 52, 100},
        dist[SIZE];

    for (int count = 0; count < SIZE; count++)
        dist[count] = time[count] * speed[count];

    for (int count = 0; count < SIZE; count++)
    {
        cout << time[count] << " ";
        cout << speed[count] << " ";
        cout << dist[count] << endl;
    }
```
