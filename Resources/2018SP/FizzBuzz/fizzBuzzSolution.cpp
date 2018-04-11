// Write a program that prints the numbers from 1 to 100
// and for multiples of '3' print "Fizz" instead of the
// number and for the multiples of '5' print "Buzz".
#include <iostream>

// Function Declaration
void pause();

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if ( (i % 3) == 0 && (i % 5) == 0 ) //Alternative: // if ((i % 15) == 0)
			printf("FizzBuzz");		// std::cout << "FizzBuzz";
		else if ((i % 3) == 0)
			printf("Fizz");			// std::cout << "Fizz";
		else if ((i % 5) == 0)
			printf("Buzz");			// std::cout << "Buzz";
		else
			printf("%d", i);			// std::cout << i;
		std::cout << std::endl;
	}

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
