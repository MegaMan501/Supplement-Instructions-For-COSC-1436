# Review for Finals:

Chapter 7, 8, and 9 Review.

### Chapter 7: Arrays
1. `int cats[80];`
	- The number inside the brackets is the array’s `size declarator`.
	- It indicates the number of `elements`, or values, the array can hold.
2. The individual elements of an array are assigned unique subscripts. These subscripts are used to access the elements.
3. C++ does not prevent you from overwriting an array’s bounds. This reduces CPU time required to check an array's bounds.
	- Off-by-One Error:
	```c++
	const int SIZE = 50;
	double rates[SIZE];

	for(int i = 0; i <= SIZE; i++)		// Array Subscripts start at 0 and end at SIZE - 1;
		rates[i] = 0.5;
	```
4. Arrays can be initialized when they are defined.
	```c++
	const int MONTHS = 12;
	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	```
	- You can have partial array initialization
	```c++
	const int MONTHS = 12;
	int days[MONTHS] = {31, 28, 31, 30, 31};
	```
	__However you cannot initialize an array out of order.__
	```c++
	const int MONTHS = 12;
	int days[MONTHS] = {31, 28, 31, 30, , , , 31, 30, 31, 30, 31};	// This is wrong
	```
5. Range-Base `for` Loop
	- The `range-based` for loop is a loop that iterates once for each element in an array. Each time the loop iterates, it copies an element from the array to a variable. The range-based for loop was introduced in C++ 11.
	- General Format:
		```c++
		for ( dataType rangeVariable : array )
			statement;
		```
	- __dataType__ is the data type of the range variable. It must be the same as the data type of the array elements, or a type that the elements can automatically be converted to.
	- __rangeVariable__ is the name of the range variable. This variable will receive the value of a different array element during each loop iteration. During the first loop iteration, it receives the value of the first element; during the second iteration, it receives the	value of the second element, and so forth.
	- __array__ is the name of an array on which you wish the loop to operate. The loop will iterate once for every element in the array.
	- __statement__ is a statement that executes during a loop iteration. If you need to execute more than one statement in the loop, enclose the statements in a set of braces.
	
	- Example:
	```c++
	int main()
	{
		// Define an array of integers.
		int numbers[] = { 10, 20, 30, 40, 50 };

		// Display the values in the array.
		for (int val : numbers)
			cout << val << endl;

		return 0;
	}

	// Output:
	// 10
	// 20
	// 30
	// 40
	// 50
	```
6. Processing Array Contents
	- __Don't Do This__
	```c++
	const int SIZE = 4;
	int numbers[SIZE] = {10, 100, 200, 300};
	int moreNumbers[SIZE];

	moreNumbers = numbers; 		// Wrong! Don't do this. This does not copy numbers into moreNumbers
	```
	The correct way to copy values from one array to another would be to use a for loop, like this:
	```c++
	for (int i = 0; i < SIZE; i++)
		moreNumbers[i] = numbers[i];
	```
	- Summing the Values in a Numeric Array
	```c++
	const int NUM_UNITS = 24;
	int units[NUM_UNITS];
	int total = 0; // Initialize accumulator

	for (int count = 0; count < NUM_UNITS; count++)
		total += units[count];
	```
	- Getting the Average of the Values in a Numeric Array
	```c++
	const int NUM_SCORES = 10;
	double scores[NUM_SCORES];
	double total = 0;	// Initialize accumulator
	double average;		// Will hold the average

	for (int count = 0; count < NUM_SCORES; count++)
		total += scores[count];

	average = total / NUM_SCORES;
	```
	- Finding the Highest Value in a Numeric Array
	```c++
	const int SIZE = 50;
	int numbers[SIZE];
	int count;
	int highest = numbers[0];

	for (count = 1; count < SIZE; count++)
	{
		if (numbers[count] > highest)
			highest = numbers[count];
	}
	```
	- Finding the Lowest Value in a Numeric Array
	```c++
	const int SIZE = 50;
	int numbers[SIZE];
	int count;
	int lowest = numbers[0];

	for (count = 1; count < SIZE; count++)
	{
		if (numbers[count] < lowest)
			lowest = numbers[count];
	}
	```
7. Parallel Arrays: By using the same subscript, you can build relationships between data stored in two or more arrays.
	```c++
	double avgWindSpeeds[MONTHS] = { 5.0, 16.2, 11.5, 0.2,
									35.3, 8.5, 23.1, 15.2,
									17.5, 10.34, 16.24, 24.3 };
	string monthNames[MONTHS] = { "January", "February", "March",
								  "April", "May", "June",
								  "July", "August", "September",
								  "October", "November", "December"};
	```
8. To pass an array as an argument to a function, pass the name of the array.
	- Example:
	```c++
	#include <iostream>
	using namespace std;

	// Function prototype
	void showValues(int [], int);

	int main()
	{
		const int ARRAY_SIZE = 8;
		int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

		showValues(numbers, ARRAY_SIZE);
		return 0;
	}

	void showValues(int nums[], int size)
	{
		for (int index = 0; index < size; index++)
			cout << nums[index] << " ";
		cout << endl;
	}
	```
9. A two-dimensional array is like several identical arrays put together. It is useful for storing multiple sets of data.
	- Two-dimensional arrays, which are sometimes called `2D arrays`, can hold multiple sets of data. It’s best to think of a two-dimensional array as having rows and columns of elements.
	- Example:
	```c++
	const int ROWS = 5;
	const int COLUMNS = 10;

	double scores[ROWS][COLUMNS];
	```
	- Passing Two-Dimensional Arrays to Functions
		- When a two-dimensional array is passed to a function, the parameter type must contain a size `declarator for the number of columns`.
		```c++
		void showScores(const double scores[][COLUMNS])
		{
			// Something goes here
		}
		```

### Chapter 8: Searching and Sorting Arrays
A search algorithm is a method of locating a specific item in a larger collection of data. This section discusses two algorithms for searching the contents of an array.

1. The `linear search` is a very simple algorithm. Sometimes called a `sequential search`, it uses a loop to sequentially step through an array, starting with the first element. It compares each element with the value being searched for and stops when either the value is found or the end of the array is encountered. If the value being searched for is not in the array, the algorithm will unsuccessfully search to the end of the array.
	- Pseudo-code:
	```
	Set found to false.
	Set position to −1.
	Set index to 0.

	While found is false and index < number of elements
		If list[index] is equal to search value
			found = true.
			position = index.
		End If
		Add 1 to index.
	End While.

	Return position.
	```
	- Implementation:
	```c++
	int searchList(const int list[], int numElems, int value)
	{
		int index = 0;			// Used as a subscript to search array
		int position = -1;		// To record position of search value
		bool found = false;		// Flag to indicate if the value was found

		while (index < numElems && !found)
		{
			if (list[index] == value)	// If the value is found
			{
				found = true;			// Set the flag
				position = index;		// Record the value's subscript
			}
			index++;					// Go to the next element
		}

		return position;				// Return the position, or −1
	}
	```
2. Binary Search:  
	- The `binary search` is a clever algorithm that is much more efficient than the linear search. Its only requirement is that the values in the array be sorted in order. Instead of testing the array’s first element, this algorithm starts with the element in the middle. If that element happens to contain the desired value, then the search is over. Otherwise, the value in the middle element is either greater than or less than the value being searched for. If it is greater, then the desired value (if it is in the list) will be found somewhere in the first half of the array. If it is less, then the desired value (again, if it is in the list) will be found somewhere in the last half of the array. In either case, half of the array’s elements have been eliminated from further searching.
	- Pseudo-code:
	```
		Set first index to 0.
		Set last index to the last subscript in the array.
		Set found to false.
		Set position to −1.

		While found is not true and first is less than or equal to last
			Set middle to the subscript halfway between array[first]
			and array[last].
			If array[middle] equals the desired value
				Set found to true.
				Set position to middle.
			Else If array[middle] is greater than the desired value
				Set last to middle − 1.
			Else
				Set first to middle + 1.
			End If.
		End While.

		Return position.
	```
	- Implementation:
	```c++
	int binarySearch(const int array[], int numElems, int value)
	{
		int first = 0,		// First array element
		last = numElems - 1,		// Last array element
		middle,		// Midpoint of search
		position = -1;		// Position of search value
		bool found = false;		// Flag

		while (!found && first <= last)
		{
			middle = (first + last) / 2; 	// Calculate midpoint
			if (array[middle] == value)		// If value is found at mid
			{
				found = true;
				position = middle;
			}
			else if (array[middle] > value)		// If value is in lower half
				last = middle - 1;
			else
				first = middle + 1;				// If value is in upper half
		}
		return position;
	}
	```
3. Bubble Sort:
	- A `sorting algorithm` is a technique for scanning through an array and rearranging its contents in some specific order. For bubble sort you can do either ascending or descending order.
	- Pseudo-Code:
	```
	  Do
	     Set swap flag to false.

	      For count is set to each subscript in array from 0 through the
	                 next-to-last subscript
	         If array[count] is greater than array[count + 1]
	             Swap the contents of array[count] and array[count + 1].
	             Set swap flag to true.
	         End If.

	      End For.

	  While any elements have been swapped.
	```
	- Implementation:
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

### Chapter 9: Pointers
1. The address operator `&` returns the memory address of a variable.
2. `Pointer variables`, which are often just called `pointers`, are designed to hold memory addresses. With pointer variables you can indirectly manipulate data stored in other variables.
	- In this definition, the word int does not mean that ptr is an integer variable. It means that ptr can hold the address of an integer variable. Remember, pointers only hold one kind of value: an address.
		- `int *ptr`
	- When a pointer is set to the address 0, it is referred to as a `null pointer` because it points to “nothing.”
		- `int *ptr = nullptr;`
	- The __indirection operator__, which is an asterisk `*`. When the indirection operator is placed in front of a pointer variable name, it __dereferences__ the pointer. When you are working with a dereferenced pointer, you are actually working with the value the pointer is pointing to.
3. Array names can be used as constant pointers, and pointers can be used as array names.

### Chapter 11: Structured Data Types
1. What are Abstract Data Types `(ADTs)`?
	- __Abstract data types__ `(ADTs)` are data types created by the programmer.
	ADTs have their own range (or domain) of data and their own sets of
	operations that may be performed on them.

	- __Primitive Data__ Types, or data types that are defined as a basic part of the
	language, as shown blow.

	| Primitive Data Types	|
	|  		---				|
	| bool 					|  
	| char 					|  
	| unsigned char 		|  
	| short int 			|  
	| int 					|
	| long int 				|
	| unsigned short int 	|
	| unsigned int 			|
	| unsigned long int 	|
	| float 				|
	| double 				|
	| long double 			|

2.  Is a __Structure__ an ADT?
	- What does this structure do?
		```c++
		struct PayRoll
		{
			int empNumber;		// Employee number
			string name;		// Employee's name
			double hours;		// Hours worked
			double payRate; 	// Hourly pay rate
			double grossPay;	// Gross pay
		};
		```
	- Who defines it?

3. The __dot operator__ (.) allows you to access structure members in a program.
	```c++
	PayRoll employee;

	employee.name = "Bob Thomas";
	employee.empNumber = 123456;
	```
4. The members of a structure variable may be initialized with starting values when the structure variable is defined.
	- For:
	```c++
		struct CityInfo
		{
			string cityName;
			string state;
			long population;
			int distance;
		};
	```
	- Your are `allowed` to do these:
	```c++
	CityInfo location = {"Fort Worth", "TX", 50000, 28};
	```
	and
	```c++
	CityInfo location = {"Fort Worth", "TX"};
	```
	and
	```c++
		CityInfo location;
		location.cityName = "Fort Worth";
		location.cityName = "TX";
		location.cityName =  50000;
		location.cityName =  28;
	```
	- Your are `NOT allowed` to do this:
	```c++
		CityInfo location = {"Fort Worth", , 50000, 28};
	```
6. Arrays of structures:
	- Example:
	```c++
		struct BookInfo
		{
			string title;
			string author;
			string publisher;
			double price;
		};

		int main ()
		{
			const int NUM_BOOKS = 10;
			BookInfo bookList[NUM_BOOKS];

			for (int i = 0; i < NUM_BOOKS; i++)
			{
				cout << "Enter the title: ";
				cin >> bookList[i].title;
			}

			for (int i = 0; i < NUM_BOOKS; i++)
			{
				cout << "Enter the title is ";
				cout << bookList[i].title << endl;
			}

			return 0;
		}
	```
