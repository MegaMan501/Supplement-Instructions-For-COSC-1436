/*
  This program asks for the principal, the interest rate, and the number of times the interest is compounded
  to give you the amount in your savings.
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

  // Output Formatting
  cout << endl << setprecision(2) << fixed << showpoint;

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

  // Output to User
  cout << "\n==================================================\n";
  cout << "Interest Rate:     " << setw(15) << interestRate << "%" << endl;
  cout << "Times Compounded:  " << setw(14) << timesCompounded << endl;
  cout << "Principal:         " << setw(10) << "$ " << principal << endl;
  cout << "Interest:          " << setw(10) << "$ " << interest << endl;
  cout << "Amount in Savings: " << setw(10) << "$ " << amount << endl;

  //system("PAUSE");
  return 0;
}
