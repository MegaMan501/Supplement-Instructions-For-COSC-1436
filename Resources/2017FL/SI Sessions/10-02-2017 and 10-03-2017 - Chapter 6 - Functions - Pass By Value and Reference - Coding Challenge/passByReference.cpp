#include <iostream>
using namespace std;

// Function prototype.
void doubleNum(int &);

int main()
{
  int value = 4;

  cout << "In main, value is " << value << endl;
  cout << "Now calling doubleNum..." << endl;

  doubleNum(value);
  cout << "Now back in main. value is " << value << endl;

  system("PAUSE");
  return 0;
}

void doubleNum (int &val)
{
  val *= 2;
}
