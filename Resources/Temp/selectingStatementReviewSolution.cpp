// Testing your knowledge of selections statements.
#include<iostream>
using namespace std;

// Function Protoypes
void ifStatement();
void expandedIfStatement();
void ifElseStatement();
void ifElseIfStatement();
void switchStatement();
void pause();

int main()
{
  char choice;          // Storing users input.
  bool loop = true;     // Storing the looping state of the switch statement.

  do
  {
    // Display Menu to user
    cout << "\nThis code will test your knowledge of Selection statements\n"
          << "\tA) If statement\n"
          << "\tB) Expanded If Statement\n"
          << "\tC) If\\Else Statement\n"
          << "\tD) If\\Else if Statement\n"
          << "\tE) Switch Statement\n"
          << "\tF) Quit..."
          << "\nEnter in your choice: ";
    cin >> choice;

    while(getchar() != '\n'); // flushing the stream

    // Menu Driven Calls to functions for user's input
    switch (choice)
    {
      case 'a':
      case 'A':
        ifStatement();
        break;

      case 'b':
      case 'B':
        expandedIfStatement();
        break;

      case 'c':
      case 'C':
        ifElseStatement();
        break;

      case 'd':
      case 'D':
        ifElseIfStatement();
        break;

      case 'e':
      case 'E':
        switchStatement();
        break;

      case 'f':
      case 'F':
        loop = false;
        cout << "\nQuitting...\n";
        pause();
        system("CLS");
        break;

      default:
        cout << "\nError! incorrect input."
             << "\nPlease enter a letter between A and F...";
        break;
    } // end of switch statement

   } while (loop);

  cout << endl;
  pause();

  return 0;
}

// Give an example of an if statement
void ifStatement()
{
  /*
    // This is a If Statement Structure
    if( expression )
      statement;
  */
  cout << "\nStart of If statemet.\n";

  char choice;

  cout << "\nDo you want to output something? (Y/N): ";
  cin >> choice;

  if (choice == 'y' || choice == 'Y')
    cout << "\nYour choice was yes.\n";
}

// Give an example of an expanded if statement
void expandedIfStatement()
{
  /*
    // This is a Expanded If Statement Structure
    if( expression )
    {
      statement1;
      statement2;
      ....
      statementn;
    }
  */
  cout << "\nStart of Expanded If Statement.\n";

  char choice;

  cout << "\nDo you want to output multiple somethings? (Y/N): ";
  cin >> choice;

  if (choice == 'y' || choice == 'Y')
  {
      cout << "\nYou choice was yes.";
      cout << "\nThis is another line of something.\n";
  }
}

// Give an example of an if/else statement
void ifElseStatement()
{
  /*
    // This is a If/Else Statement Structure
    if( expression )
    {
      statement1;
      statement2;
      ....
      statementn;
    }
    else
    {
      statement1;
      statement2;
      ....
      statementn;
    }
  */
  cout << "\nStart of If/Else Statement\n";

  char choice;

  cout << "\nDo you want to output multiple somethings? (Y/N): ";
  cin >> choice;

  if (choice == 'y' || choice == 'Y')
  {
      cout << "\nYou choice was yes.";
      cout << "\nThis is another line of something.\n";
  }
  else
  {
      cout << "\nYou choice was: " << choice << endl;
  }
}

// Give an example of an if/else if statement
void ifElseIfStatement()
{
  /*
    // This is a If\Else if Statement Structure
    if( expression )
    {
      statement1;
      statement2;
      ....
      statementn;
    }
    else if ( expression )
    {
      statement1;
      statement2;
      ....
      statementn;
    }
    else
    {
      statement1;
      statement2;
      ....
      statementn;
    }
  */
  cout << "\nStart of If/Else If Statement.\n";

  char choice;

  cout << "\nDo you want to output multiple somethings? (Y/N): ";
  cin >> choice;

  if (choice == 'y' || choice == 'Y')
  {
      cout << "\nYou choice was yes.";
      cout << "\nThis is another line of something.";
  }
  else if (choice == 'n' || choice == 'N')
  {
      cout << "\nYour choice was No.";

  }
  else
  {
      cout << "\nYour choice was: " << choice << endl;
  }

}

// Give an switch statement
void switchStatement()
{
   /*
     // This is a Switch Statement Structure
     switch ( expression )
     {
        case expression1:
          statement1;
          break;
        case expression2:
          statement2;
          break;
        ....
        case expressionN:
          statementN;
          break;
        default:
          statement;
     }
   */
   cout << "\nStart of Switch Statement.\n";

   char choice;

   cout << "\nEnter either A, B, or C: ";
   cin >> choice;

   switch (choice)
   {
       case 'a':
       case 'A':
        cout << "\nYou entered " << choice << endl;
        break;
       case 'b':
       case 'B':
        cout << "\nYou entered " << choice << endl;
        break;
       case 'c':
       case 'C':
        cout << "\nYou entered " << choice << endl;
        break;
       default:
        cout << "\nError! Please enter either A, B, or C.\n";
   }
}

// non-system dependent pause
void pause()
{
  cout << "\nPlease Press enter to continue...";
  cin.get();
}
