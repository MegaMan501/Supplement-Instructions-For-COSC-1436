// 1.)

#include <iostream>
using namespace std;

int main()
{
  double salary, monthly;
  cout << "What is your annual salary? ";
  cin >> salary;                        // Assume the user enters 38700. Use a calculator.
  monthly = static_cast<int>(salary) / 12;
  cout << "Your monthly wages are " << monthly << endl;
  return 0;
}

