// The switch statement in this program uses the "fall through"
// feature to catch both uppercase and lowercase letters entered
// by the user.
#include <iostream>
using namespace std;

int main()
{
  char choice;

  cout << "Enter A, B, or C: ";
  cin >> choice;

  // Display the price.
  switch(choice)
  {
    case 'a':
    case 'A': cout << "You entered A.\n";
      break;
    case 'b':
    case 'B': cout << cout << "You entered B.\n";
      break;
    case 'c':
    case 'C': cout << cout << "You entered Cs.\n";
      break;
    default: cout << "That is an invalid choice.\n";
  }

  system("PAUSE");
  return 0;
}
