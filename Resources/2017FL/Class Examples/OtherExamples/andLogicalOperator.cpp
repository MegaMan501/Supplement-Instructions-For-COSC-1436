// 10/05/2017
// In class example
#include <iostream>
using namespace std;

const int MIN_INCOME = 2000;
const int MIN_YEARS = 5;

int main()
{
  int income = 0, years = 0;

  cout << "Enter your income:  ";
  cin >> income;
  cout << "Enter your years: ";
  cin >> years;

  // normal
  cout << endl << "Normal \n";
  if (income >= MIN_INCOME || years > MIN_YEARS)
  {
    cout << "You qualify.\n";
  }
  else
  {
    cout << "You must earn at least $" << MIN_INCOME << " or have been employed more than " << MIN_YEARS << " years.\n";
  }

  // !(Logic with && )
  cout << endl << " not logic with && \n";
  if (!(income < MIN_INCOME && years <= MIN_YEARS))
  {
    cout << "You qualify.\n";
  }
  else
  {
    cout << "You must earn at least $" << MIN_INCOME << " or have been employed more than " << MIN_YEARS << " years.\n";
  }

  // Reverse Logic
  cout << "\nReverse Logic\n";
  if (income <= MIN_INCOME && years < MIN_YEARS)
  {
    cout << "You must earn at least $" << MIN_INCOME << " or have been employed more than " << MIN_YEARS << " years.\n";
  }
  else
  {
    cout << "You qualify.\n";
  }

  system("PAUSE");
  
  return 0;
}
