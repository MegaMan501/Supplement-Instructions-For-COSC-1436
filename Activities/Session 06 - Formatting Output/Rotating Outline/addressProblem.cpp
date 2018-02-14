// This program demonstrates using the getline function
// to read character data into a string object.
#include <iostream>
#include <string>

int main()
{
    string name, city, state;

    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Enter the city you live in: ";
    std::cin >> city;
    std::cout << "Enter the state you live in: ";
    std::cin >> city;

    std::cout << std::endl;
    std::cout << "Hello, " << name << std::endl;
    std::cout << "The city you live in is: " << city
          << "\nThe state you live in is: " << state << std::endl;

    return 0;
}
