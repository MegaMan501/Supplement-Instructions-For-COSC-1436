# Organizational Flashcards - Selection Statements

1. Take one flashcard, and then use your flashcard to line up in order
to correctly run the code.
(**Rule: Don't talk about during the first part!**)
2. Discuss your choices with your neighbors and make adjustments as needed.
3. Defend your choices.


```c++
// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;

int main()
{
    int testScore;

    cout << "Enter your test score and I will tell you\n";
    cout << "the letter grade you earned: ";
    cin >> testScore;

    if (testScore >= 90)
        cout << "Your grade is A.\n";
    else if (testScore >= 80)
        cout << "Your grade is B.\n";
    else if (testScore >= 70)
        cout << "Your grade is C.\n";
    else if (testScore >= 60)
        cout << "Your grade is D.\n";
    else if (testScore >= 0)
        cout << "Your grade is F.\n";
    else
        cout << "That is not a valid score.\n";

    system("PAUSE");
    return 0;
}
```
