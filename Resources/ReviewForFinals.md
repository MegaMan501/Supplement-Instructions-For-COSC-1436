# Review Outline for Finals: 

### Chapter 2: 

### Chapter 3: 

### Chapter 4: 

### Chapter 5: 

### Chapter 6: 

### Chapter 8: 

### Chapter 10: 

### Chapter 11: Structured Data Types 
1. What are Abstract Data Types `(ADTs)`? 
	- __Abstract data types__ `(ADTs)` are data types created by the programmer.
	ADTs have their own range (or domain) of data and their own sets of
	operations that may be performed on them.
	- __Primitive Data__ Types, or data types that are defined as a basic part of the
	language, as shown blow.

		| | | |
		| --- | --- | --- |
		| bool | int | unsigned long int |
		| char 	| long int | float |
		| unsigned char | unsigned short int | double |
		| short int | unsigned int | long double |

2.  Is a __Structure__ an ADT? 
	- What does this structure do? 
		```c++
		struct PayRoll
		{
			int empNumber; // Employee number
			string name; // Employee's name
			double hours; // Hours worked
			double payRate; // Hourly pay rate
			double grossPay; // Gross pay
		};
		```
	- It defines a ADT of 
3. The __dot operator__ (.) allows you to access structure members in a program.
	```c++ 
	PayRoll employee; 
	
	employee.name = "Bob Thomas";
	employee.empNumber = 123456; 
	```
