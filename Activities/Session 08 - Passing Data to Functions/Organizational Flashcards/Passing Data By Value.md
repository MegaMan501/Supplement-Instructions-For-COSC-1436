# Organizational Flashcards - Passing Data By value

Order these unorganized flashcards as a group. Explain your choices.

```c++
cout << "number is " << number << endl;
```
```c++
cout << "Now back in main again, the value of ";
cout << "number is " << number << endl;
```
```c++
changeMe(number);
```
```c++
int number = 12;
```
```c++
int main()
{
```
```c++
void changeMe(int);
```

```c++
void changeMe(int myValue)
{
```
```c++
cout << "Now the value is " << myValue << endl;
}
```
```c++
#include <iostream>
using namespace std;
```
```c++
myValue = 0;
```
```c++
return 0;
}
```


## Solution:
```c++
#include <iostream>
using namespace std;

// Function Prototype
void changeMe(int);

int main()
{
    int number = 12;

    // Display the value in number.
    cout << "number is " << number << endl;

    // Call changeMe, passing the value in number
    // as an argument.
    changeMe(number);

    // Display the value in number again.
    cout << "Now back in main again, the value of ";
    cout << "number is " << number << endl;

    system("PAUSE");
    return 0;
}

void changeMe(int myValue)
{
    // Change the value of myValue to 0.
    myValue = 0;

    // Display the value in myValue.
    cout << "Now the value is " << myValue << endl;
}
```
