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
    getline(cin, name);

    cout << "Enter the city you live in: ";
    getline(cin, city);

    cout << "Enter the state you live in: ";
    getline(cin, state);

    cout << endl;
    cout << "Hello, " << name << endl;
    cout << "The city you live in is: " << city
          << "\nThe state you live in is: " << state << endl;

    system("PAUSE");
    return 0;
}
