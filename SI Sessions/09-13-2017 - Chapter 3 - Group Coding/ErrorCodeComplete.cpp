/*
* This program calculates the area of a circle.
* The formula for the area of a circle is Pi times
*  the radius squared. Pi is 3.14159.
*/
#includes <iostreams>
using namespace std;

// Global Variables
double PI = 3.14159;  // This is the constant value of PI

// Functions

int main()
{
  double area  = 0.0;

  cout << "/nThis program calculates the area of a circle.\n";
  cout << "What is the radius of the circle?: ";
  cin << radius;

  area = pi * (radius * radius);

  cout << "The area is " < area << endl;

  system("wait");
  return 0;
}
