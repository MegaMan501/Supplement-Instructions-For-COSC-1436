#include<iostream>
using namespace std;

// Global Variables

// Global Functions

#include <iostream>
using namespace std;

int main()
{
  // Variables to hold the regular price, the
  // amount of a discount, and the sale price.
  double regularPrice = 59.95, discount, salePrice;

  // Calculate the amount of a 20% discount.
  discount = regularPrice * 0.2;
  // Calculate the sale price by subtracting the
  // discount from the regular price.
  salePrice = regularPrice - discount;

  // Display the results.
  cout << "Regular price: $" << regularPrice << endl;
  cout << "Discount amount: $" << discount << endl;
  cout << "Sale price: $" << salePrice << endl;


  /*
  // Can Be use on any platflorm to pause your program.
  cout << "\nPress Any Key to Continue...\n";
  cin.get();
  */
  return 0;
}
