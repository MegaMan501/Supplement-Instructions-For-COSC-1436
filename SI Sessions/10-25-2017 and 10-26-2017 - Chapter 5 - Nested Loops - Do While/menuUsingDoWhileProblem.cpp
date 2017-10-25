// This program displays a menu and asks the user to make a
// selection. A do-while loop repeats the program until the
// user selects item 4 from the menu.
#include <iostream>
#include <iomanip>

using namespace std;

// Global Variables
const int ADULT_CHOICE = 1, // Constants for menu choices
        CHILD_CHOICE = 2,
        SENIOR_CHOICE = 3,
        QUIT_CHOICE = 4;
const double ADULT = 40.0, // Constants for membership rates
            CHILD = 20.0,
            SENIOR = 30.0;

// Function Declartion
int getChoice(int & choice);

int main()
{
    // Variables
                     // Menu choice
                     // Number of months
                     // Monthly charges

    do
    {
                     // Get user's choice

        // Process the user's choice.
        if ()
        {
            // Get the number of months.


            // Respond to the user's menu selection.
            switch ()
            {
                // case 1
                // calcuation of charges, month * rates

                // case 2
                // calcuation of charges, month * rates

                // case 3
                // calcuation of charges, month * rates

            }

            // Set up numeric output formatting.
            cout << fixed << showpoint << setprecision(2);

            // Display the monthly charges.

        }

    } while ();

    system("PAUSE");
    return 0;
}

// Display the menu of choices to the user
int getChoice(int & choice)
{
    cout << "\n\t\tHealth Club Membership Menu\n\n"
        << "1. Standard Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
            // Get user's choice

    // Validate the menu selection.
    while ()
    {

    }

    // return a variable
}
