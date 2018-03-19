# Timeline - Nested `if/else`

Find and Explain:
1. The scope of the variables
2. Each Logical block of the code
3. What each Selection statement is doing?
4. What is nested?
5. What are the trailing else statement?

### Resources
- [tutorialspoint](https://www.tutorialspoint.com/cplusplus/cpp_decision_making.htm)
- [geeksforgeeks](https://www.geeksforgeeks.org/decision-making-c-c-else-nested-else/)
- [geeksforgeeks](https://www.geeksforgeeks.org/execute-else-statements-cc-simultaneously/)

### The Code
```c++
#include <iostream>
using namespace std;

int main()
{
  const int A_SCORE = 90,
            B_SCORE = 80,
            C_SCORE = 70,
            D_SCORE = 60;
  int testScore;

  cout << "Enter your numeric test score and I will\n";
  cout << "tell you the letter grade you earned: ";
  cin >> testScore;

  // Determine the letter grade.
  if (testScore >= A_SCORE)
  {
    cout << "Your grade is A.\n";
  }
  else
  {
    if (testScore >= B_SCORE)
    {
      cout << "Your grade is B.\n";
    }
    else
    {
      if (testScore >= C_SCORE)
      {
        cout << "Your grade is C.\n";
      }
      else
      {
        if (testScore >= D_SCORE)
        {
          cout << "Your grade is D.\n";
        }
        else
        {
          cout << "Your grade is F.\n";
        }
      }
    }
  }

  system("PAUSE");
  return 0;
}
```
