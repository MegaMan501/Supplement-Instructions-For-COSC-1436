n#include <iostream>
#include <string>
using namespace std;

// Global Variables

// Function Declartions
void printTable(const int START, const int END, string range);
void pause();

int main()
{
    int start = 0,
          end = 0;
    const string zeroToNine = "0 to 9",
                 uppercaseLetters = "A to Z",
                 lowercaseLetters = "a to z";
    // Zero To Nine
    cout << "Enter the ASCII start of range for " << zeroToNine << " : ";
    cin >> start;
    cout << "Enter the ASCII end of range for " << zeroToNine << " : ";
    cin >> end;
    printTable(start, end, zeroToNine);

    // Uppercase Letters
    cout << "Enter the ASCII start of range for " << uppercaseLetters << " : ";
    cin >> start;
    cout << "Enter the ASCII end of range for " << uppercaseLetters << " : ";
    cin >> end;
    printTable(start, end, uppercaseLetters);

    // Uppercase Letters
    cout << "Enter the ASCII start of range for " << lowercaseLetters << " : ";
    cin >> start;
    cout << "Enter the ASCII end of range for " << lowercaseLetters << " : ";
    cin >> end;
    printTable(start, end, lowercaseLetters);

    pause();
    return 0;
}

void printTable(const int START, const int END, string range)
{
    cout << "\nTable for " << range << " range";
    for(int i = START; i <= END; i++)
    {
        cout << endl << static_cast<char>(i);
    }
}

void pause()
{
    cout << "\nPlease Enter any key to continue....";
    cin.get();
}
