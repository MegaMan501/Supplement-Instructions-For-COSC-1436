#include <iostream>
using namespace std;

// Function Prototype
void changeMe(int);

int main()
{
  int number = 12;

  // Display the value in number.
  cout << "number is " << number << endl;

  changeMe(number);

  // Display the value in number again.
  cout << "Now back in main again, the value of ";
  cout << "number is " << number << endl;

  system("PAUSE");
  return 0;
}

void changeMe(int myValue)
{
  // Change the value of myValue to 0.
  myValue = 0;

  // Display the value in myValue.
  cout << "Now the value is " << myValue << endl;
}
