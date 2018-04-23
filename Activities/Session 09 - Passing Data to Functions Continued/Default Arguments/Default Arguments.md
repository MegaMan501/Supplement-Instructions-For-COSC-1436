# Default Arguments

__What are default arguments?__

`Default arguments` are passed to parameters automatically if no argument
is provided in the function call.

__Make a function that uses a default argument.__

```c++
// Function Prototype
void showArea(double length = 20.0, double width = 10.0);
```

```c++
// Function Definition
void showArea(double length, double width)
{
    double area = length * width;
    cout << "The area is " << area << endl;
}
```
