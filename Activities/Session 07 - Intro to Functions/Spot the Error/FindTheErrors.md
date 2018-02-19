# Find The All The Errors

Find all of the errors in two examples below.
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

<!-- 1st Problem Solution:
```c++
#include <iostream>; // 1
using namespace std;

main // 2
{
	int number1, number2;
	cout << "Enter two numbers and I will multiply\n" // 3
	cout << "them by 50 for you.\n"	// 4
	cin >> number1 >> number2;
	number1 =* 50; //5
	number2 =* 50; //6
	cout << number1 << " " << number2;
	return 0;
}
``` -->

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

<!-- 2nd Problem Solution:
```c++
include <iostream> // 1
using namespace std;

int main()
{
	char name, go; // 2
	cout << "Enter your name: " // 3
	getline >> name;	// 4
	cout << "Hi " << name << endl;
	return 0;
}
``` -->
