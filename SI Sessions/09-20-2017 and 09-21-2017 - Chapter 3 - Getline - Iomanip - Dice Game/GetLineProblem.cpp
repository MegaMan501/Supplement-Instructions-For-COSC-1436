// This program demonstrates using the getline function
// to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string city;
    string state;

    cout << "Please enter your name: ";
    // use getline here

    cout << "Enter the city you live in: ";
    // use getline here

    cout << "Enter the state you live in: ";
    // use getline here

    cout << endl;
    cout << "Hello, " << name << endl;
    cout << "The city you live in is: " << city
          << "\nThe state you live in is: " << state << endl;

    return 0;
}
