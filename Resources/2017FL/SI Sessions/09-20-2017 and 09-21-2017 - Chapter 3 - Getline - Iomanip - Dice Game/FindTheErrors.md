# Find The Errors
1.
```c++
#include <iostream>;
using namespace std;

main
{
	int number1, number2;
	cout << "Enter two numbers and I will multiply\n"
	cout << "them by 50 for you.\n"
	cin >> number1 >> number2;
	number1 =* 50;
	number2 =* 50;
	cout << number1 << " " << number2;
	return 0;
}
```

2.
```c++
#include <iostream>;
using namespace std;

int main()
{
	char name, go;
	cout << "Enter your name: ";
	getline >> name;
	cout << "Hi " << name << endl;
	return 0;
}
```
