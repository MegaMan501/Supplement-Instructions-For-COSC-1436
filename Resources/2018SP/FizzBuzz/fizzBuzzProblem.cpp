// Write a program that prints the numbers from 1 to 100
// and for multiples of '3' print "Fizz" instead of the
// number and for the multiples of '5' print "Buzz".
#include <iostream>

// Function Declaration
void pause();

int main()
{

	// Don't Code Below this Line
	pause();
	return 0;
}

// pauses the console
void pause()
{
	std::cout << "\n\nPress ENTER to exit...";
	std::cin.ignore(1000, '\n').get();
}
