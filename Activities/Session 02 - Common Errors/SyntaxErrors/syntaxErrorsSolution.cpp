#include <iostream>
using namespace std; // 1

int main()
{
  // Variables to hold the regular price, the amount of a discount, and the sale price.
  double regularPrice = 59.95,
         discount,
         salePrice; // 2

  // Calculate the amount of a 20% discount.
  discount = regularPrice * 0.2; // 3

  // Calculate the sale price by subtracting the discount from the regular price.
  salePrice = regularPrice - discount;

  // Display the results.
  cout << "Regular price: $" << regularPrice << endl; // 4
  cout << "Discount amount: $" << discount << endl; // 5
  cout << "Sale price: $" << salePrice << endl; // 6

  // New sales price by dividing it by three people
  int people = 3;   // 7 runtime
  salePrice = salePrice / people;
  cout << "Sale price: $" << salePrice << endl; // 8 logic

  // Pause
  cout << endl;
  system("pause");

  return 0;
}
