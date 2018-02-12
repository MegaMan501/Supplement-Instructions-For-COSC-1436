// This program demonstrates integer overflow and underflow.
#include <iostream>
using namespace std;

// Function Declaration
void moreOverAndUnder();

int main()
{
    // testVar is initialized with the maximum value for a short.
    /*
       Data Type: short int
       Typical Size: 2 bytes
       Range: -32,768 to 32,767
    */
    short testVar = 32767;

    // Display testVar.
    cout << testVar << endl;

    // Add 1 to testVar to make it overflow.
    testVar = testVar + 1;
    cout << testVar << endl;

    // Subtract 1 from testVar to make it underflow.
    testVar = testVar - 1;
    cout << testVar << endl;

    cout << endl;
    moreOverAndUnder();

    system("PAUSE");
    return 0;
}

void moreOverAndUnder()
{
  cout << "\nStart of moreOverAndUnder Function\nHit Enter...";
  cin.ignore().get();

  float test;
  test = 2.0e38 * 1000;

  // Should overflow test.
  cout << "\nFirst Output of Test: " << test << endl;
  test = 2.0e-38 / 2.0e38; // Should underflow test.

  cout << "Second Output of Test: " << test << endl;
}
