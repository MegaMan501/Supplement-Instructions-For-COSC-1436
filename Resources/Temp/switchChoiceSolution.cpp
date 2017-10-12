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
    case 'C': cout << cout << "You entered C.\n";
<<<<<<< HEAD
=======
      break;
    default:
      cout << "That is an invalid choice.\n";
>>>>>>> d4bf9e7aa002ca600a4d2827b20c1b74be8ff6ad
      break;
  }

  system("PAUSE");
  return 0;
}
