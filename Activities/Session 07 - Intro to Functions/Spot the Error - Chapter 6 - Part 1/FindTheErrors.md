# Spot the Errors - Chapter 6 - Part 1

Find all of the errors in the two examples below.
**Do not correct the errors. Just find them.**

---

1st Problem:
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

1st Problem Solution:
```c++
#include <iostream>; // 1 - remove semicolon
using namespace std;

main // 2 - should be: int main()
{
	int number1, number2;
	cout << "Enter two numbers and I will multiply\n" // 3 - need a semicolon at the end
	cout << "them by 50 for you.\n"	// 4 - need a semicolon at the end
	cin >> number1 >> number2;
	number1 =* 50; //5 - should be: number1 *= 50;
	number2 =* 50; //6 - should be: number2 *= 50;
	cout << number1 << " " << number2;
	return 0;
}
```

---

2nd Problem:
```c++
include <iostream>
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

2nd Problem Solution:
```c++
include <iostream> 	// 1 - missing #
					// 2 - missing #include <string>
using namespace std;

int main()
{
	char name, go; // 3 - should be: string name;
	cout << "Enter your name: ";
	getline >> name;	// 4 - should be: getline(cin, name);
	cout << "Hi " << name << endl;
	return 0;
}
```
