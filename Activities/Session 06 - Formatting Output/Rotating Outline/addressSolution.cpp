// This program demonstrates using the getline function
// to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, // name of the user
           city, // city where the user lives
           state; // sate where the user lives

    // Get User's input for there name,
    // city, and state
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Enter the city you live in: ";
    getline(cin, city);
    cout << "Enter the state you live in: ";
    getline(cin, state);

    // Display the name, city, and state
    cout << endl;
    cout << "Hello, " << name << endl;
    cout << "The city you live in is: " << city
          << "\nThe state you live in is: " << state << endl;

    // Pause the screen
    cout << endl;
    system("PAUSE");
    return 0;
}
