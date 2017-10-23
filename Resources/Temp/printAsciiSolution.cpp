/********************************************************************************
    Print out the ASCII Character Set for:
        1. 0 to 9
        2. A to Z
        3. a to z

    Hints:
        * Use the internet, or even your book's index for the ASCII table.
        * Use a for loop for each part of the code.
        * Convert integer value to char to print out the characters.
********************************************************************************/

// Headers
#include <iostream>
using namespace std;

int main()
{
	// 1. 0 to 9
    for (int i = 48; i <= 57; i++)
        cout << endl << static_cast<char>(i);
    cout << "\n-------";

    // 2. A to Z
    for (int i = 65; i <= 90; i++)
        cout << endl << static_cast<char>(i);
    cout << "\n-------";

    // 3. a to z
    for (int i = 97; i <= 122; i++)
        cout << endl << static_cast<char>(i);
    cout << "\n-------";

	//	Make sure we place the end message on a new line
    cout << endl;

	//	The following is system dependent.  It will only work on Windows
    system("PAUSE");

	// A non-system dependent method is below
	// cout << "Press any key to continue";
	// cin.get();

    return 0;
}
