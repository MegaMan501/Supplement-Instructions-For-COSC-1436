/**************************************************************
    Name: Mohamed Rahaman
    Date: October 26, 2017
    File: main.cpp
    Description: Take a string from user and reverse the string
	to check whether or not string is a palindrome. If the
	string is a palindrome then output to the user that the
	string is a palindrome.
****************************************************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;

// Function Template
template <typename T>
	T getValidatedInput();

// Function Declarations
string reverseString(string word, bool caseLower = false);	// caseLower is a default paramater
bool isPalindrome(string word);


int main()
{
	string theWord;			// string from the user
	string reverseWord;		// holds the reversed word
	char choice;			// holds user's choice

	do
	{
		cout << "Enter a word the you would like to reverse: ";
		getline(cin, theWord);

		// Reverse the word
		reverseWord = reverseString(theWord);

		cout << endl << "The word reversed is " << reverseWord << ".\n";

		// Check if it is palindrome
		cout << endl << theWord << " is ";
		if (!isPalindrome(theWord))
		{
			cout << "not ";
		}
		cout << "a palindrome.\n\n";

		// Alternate palindrome check
		/*cout << theWord << " is "
			<< (isPalindrome(theWord) ? "" : "not ")
			<< "a palindrome.\n"; */

		cout << "Do you want to reverse another word? (y/n): ";
		cin >> choice;

		choice = tolower(choice);	// Convert choice to lower case.
		while (getchar() != '\n');	// Flush the stream.

		cout << endl;

	} while (choice == 'y'); // end of the loop

	//	Make sure we place the end message on a new line
	cout << endl;

	//	The following is system dependent.  It will only work on Windows
	system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
	return 0;
}

template <typename T>
T getValidatedInput()
{
	// Get input of type T
	T result;
	cin >> result;

	// Check if the failbit has been set, meaning the beginning of the input
	// was not type T. Also make sure the result is the only thing in the input
	// stream, otherwise things like 2b would be a valid int.
	if (cin.fail() || cin.get() != '\n')
	{
		// Set the error state flag back to goodbit. If you need to get the input
		// again (e.g. this is in a while loop), this is essential. Otherwise, the
		// failbit will stay set.
		cin.clear();

		// Clear the input stream using and empty while loop.
		while (cin.get() != '\n');

		// Throw an exception. Allows the caller to handle it any way you see fit
		// (exit, ask for input again, etc.)
		throw ios_base::failure("Invalid input.");
	}

	return result;
}

string reverseString(string word, bool caseLower)
{
	const int STACK_SIZE = 80;		// Size of the stack
	char stack[STACK_SIZE];			// Stack of characters
	char reverse[STACK_SIZE];		// c string of character in reverse order
	int top = -1;					// points to the top of the stack
	int length = word.length();		// How many words we have to process

	if (length > STACK_SIZE - 1)
	{
		throw "Word too long";
	}

	// Push letters on the stack
	for (int i = 0; i < length; i++)
	{
		stack[++top] = word.at(i);	// also stack[++top] = word[i];
	}

	// Pop the stack into reverse
	for (int i = 0; top >= 0; top--, i++)
	{
		reverse[i] = stack[top];
	}

	// See if we need to make case all lower
	if (caseLower)
	{
		for (int i = 0; i < length; i++)
		{
			reverse[i] = tolower(reverse[i]);
		}
	}

	// Add the reversed null terminator
	reverse[length] = '\0';

	// Return a C++ string
	return string(reverse);
}

bool isPalindrome(string word)
{
	// Get the word reversed
	string reverse = reverseString(word, true);

	// Make word itself lowercase
	for (int i = 0; i < word.length(); i++)
	{
		word.at(i) = tolower(word.at(i));
	}

	// Loop through all of the letter forward and in reverse
	for (int i = 0; i < word.length(); i++)
	{
		// Are the two letters in same position different
		if (word.at(i) != reverse.at(i))
		{
			return false;
		}
	}

	return true;
}
