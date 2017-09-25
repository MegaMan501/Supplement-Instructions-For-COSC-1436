// What will these print out on to the console?

//A)
#include <iostream>
using namespace std;

int main()
{
  int freeze = 32, boil = 212;
  freeze = 0;
  boil = 100;
  cout << freeze << endl << boil << endl;
  return 0;
}

//B)
#include <iostream>
using namespace std;

int main()
{
  int x = 0, y = 2;
  x = y * 4;
  cout << x << endl << y << endl;
  return 0;
}

//C)
#include <iostream>
using namespace std;

int main()
{
  cout << "I am the incredible";
  cout << "computing\nmachine";
  cout << "\nand I will\namaze\n";
  cout << "you.";
  return 0;
}
