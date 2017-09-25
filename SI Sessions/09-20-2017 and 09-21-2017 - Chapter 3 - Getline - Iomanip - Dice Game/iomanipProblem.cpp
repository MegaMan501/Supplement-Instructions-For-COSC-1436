// This program displays three rows of numbers.
#include <iostream>
#include <iomanip>    // Required for setw
using namespace std;

int main()
{
  // Arrays start at the zeroth element
  int numArray[9] = {2897, 5, 837,
                       34, 7, 1623,
                      390, 3456, 12};

  // Display the first row of numbers
  cout << setw(6) << numArray[0] << setw(6)
  << numArray[1] << setw(6) << numArray[2] << endl;

  // Display the second row of numbers


  // Display the third row of numbers


  return 0;
}
/*
  Your Output should look like this:
  2897      5     837
    34      7    1623
    390  3456      12
*/
