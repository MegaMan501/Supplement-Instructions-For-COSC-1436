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
        system("CLS"); //system("clear"); // for Linux or Mac
        break;
      default:
        cout << "\nError! incorrect input."
             << "\nPlease enter a letter between A and F...";
        break;
    } // end of switch statement

    // Clearing the screen and waiting for input
    if (loop)
    {
      cout << endl;
      pause();
      system("CLS"); /* system("clear"); // for Linux or Mac */
    }

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
}

// non-system dependent pause
void pause()
{
  cout << "\nPlease Press enter to continue...";
  cin.get();
}
