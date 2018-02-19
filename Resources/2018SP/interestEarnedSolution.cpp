/*
  This program asks for the principal, the interest rate, and the number of times the interest is compounded
  to give you the amount in your savings.

  Your task is to take this code and edit the output to make it look good to the user.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  int timesCompounded = 0;
  double interestRate = 0.0,
         principal = 0.0,
         interest = 0.0,
         amount = 0.0;

  // Prompt User to enter the interestRate, timesCompounded, principal, and interest.
  cout << "Interest Rate: ";
  cin >> interestRate;
  cout << "Times Compounded: ";
  cin >> timesCompounded;
  cout << "Principal: ";
  cin >> principal;

  // Formulas
  amount = principal * pow((1 + ((interestRate/100.0) / timesCompounded)), timesCompounded);
  interest = amount - principal;

  // Output Formatting
  cout << endl << setprecision(2) << fixed << showpoint;

  // Output to User
  cout << "\n==================================================\n";
  cout << setw(20) << "Interest Rate: " << interestRate << "%" << endl;
  cout << setw(20) << "Times Compounded: " << timesCompounded << endl;
  cout << setw(20) << "Principal: " << "$ " << principal << endl;
  cout << setw(20) << "Interest: " << "$ " << interest << endl;
  cout << setw(20) << "Amount in Savings: " << "$ " << amount << endl;

  system("PAUSE");
  return 0;
}
