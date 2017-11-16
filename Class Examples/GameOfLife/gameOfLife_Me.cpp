/******************************
Mohamed Rahaman
November 07, 2017
main.cpp
Description:
Simulate Conway's Game of Life.
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <chrono>		// time units
#include <thread>		// pause the thread
#include <ctime>		// randomization
#include <vector>		// use for vectors
#include <fstream>		// use for file processing
#include <Windows.h>	// process mouse clicks
using namespace std;

// Global variables
const int GRID_ROWS = 20;
const int GRID_COLUMNS = 20;
const string FILENAME = "GOLstarters.txt";

struct Life
{
	bool currentAlive;
	bool futureAlive;
};

struct LifeGrid
{
	Life grid[GRID_ROWS][GRID_COLUMNS];
};

// Function Template
template <typename T>
T getValidatedInput();

// Function declarations
void loadStartingPositions(vector<LifeGrid> & startGrid, 
						   vector<string> & startingNames, 
						   string fileName);
void initializeGrid(Life grid[][GRID_COLUMNS],
					int numRows, int capacityFull); // random
void initializeGrid(Life grid[][GRID_COLUMNS],
					const vector<LifeGrid> & startGrid, 
					int numRows, int gridNum); // pre-config
int updateGrid(Life grid[][GRID_COLUMNS], int numRows);
void drawGrid(Life grid[][GRID_COLUMNS], int numRows);
int clampAround(int num, int min, int max);
void displayRules();

int main()
{
	Life gameGrid[GRID_ROWS][GRID_COLUMNS]; // Grid the game is played on
	vector<LifeGrid> startGridVector;		// Starting Configuration
	vector<string> startingNames;			// names of the starting configuration
	char choice = 'Y';						// user's choice
	int liveCell = 1;						// number of cell alive
	int initialCapacity;					// for random figure configuration
	bool mouseClick;						// did she click the mouse

	// Handle mouse clicks 
	HANDLE hStdin;			// handle to standard in
	DWORD fdwSaveOldMode;	// initial console configuration
	INPUT_RECORD irInBut;	// pointer to an input record
	DWORD cNumRead;			// number of interrupts read at the console

	// Explain the game
	displayRules();

	// Load the starting positions
	loadStartingPositions(startGridVector, startingNames, FILENAME);

	// Seed the rng
	srand(unsigned(time(0)));

	// Loop for individual simulations
	while(true)
	{
		// Present the menu
		cout << "Select starting Grid\n";
		for (char i = 'a'; i < 'a' + startingNames.size(); i++)
		{
			cout << "\t" << i << ") "
				<< startingNames[i - 'a'] << endl; 
		}
		cout << "\t" << (char)(startingNames.size() + 'a')
			<< ") Random" << endl;
		cout << "\t" << (char)(startingNames.size() + 1 + 'a')
			<< ") Quit" << endl;
		cout << "Enter choice (a-"
			<< (char)(startingNames.size() + 1 + 'a') << "): ";
		cin >> choice; 

		if (choice == (char)(startingNames.size() + 1 + 'a'))
		{
			cout << "\n\nThanks for playing\n\n";
			system("pause");
			return 0; 
		}

		while (getchar() != '\n');	// flush the buffer

		// Configure the Grid
		if (choice < (char)(startingNames.size() + 'a'))
		{
			// Pre-config choice
			initializeGrid(gameGrid, startGridVector, GRID_ROWS, int(choice - 'a'));
		}
		else
		{
			cout << "\nWhat percentage of cell do you want to be alive (1 - 100): ";
			cin >> initialCapacity; 
			initializeGrid(gameGrid, GRID_ROWS, initialCapacity); 
		}

		// Setup to get mouse clicks
		hStdin = GetStdHandle(STD_INPUT_HANDLE);
		GetConsoleMode(hStdin, &fdwSaveOldMode);

		// While loop for our game
		while (true)
		{
			// So we can draw
			SetConsoleMode(hStdin, fdwSaveOldMode);

			// Draw and update the grid
			drawGrid(gameGrid, GRID_ROWS);
			liveCell = updateGrid(gameGrid, GRID_ROWS);

			// Set the console for mouse capture
			SetConsoleMode(hStdin, ENABLE_WINDOW_INPUT | 
								   ENABLE_MOUSE_INPUT | 
								   ENABLE_EXTENDED_FLAGS);

			// Take a nap
			this_thread::sleep_for(chrono::milliseconds(500));

			if (!liveCell) break;

			// Check if we clicked the mouse
			mouseClick = false; 
			bool peeked = PeekConsoleInput(hStdin, &irInBut,
											1, &cNumRead);

			if (peeked)
			{
				if (irInBut.EventType == MOUSE_EVENT &&
					irInBut.Event.MouseEvent.dwButtonState ==
					FROM_LEFT_1ST_BUTTON_PRESSED)
				{
					mouseClick = true; 
					irInBut.EventType = 0; 
				}
			}

			FlushConsoleInputBuffer(hStdin);

			if (mouseClick) break;
		} // simulate while loop

		SetConsoleMode(hStdin, fdwSaveOldMode);

		drawGrid(gameGrid, GRID_ROWS);
		if (!mouseClick)
			cout << "All cells are dead\n";

		cout << endl;
		system("pause");

	} // outer while

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

// Load the starting positions of life grid
void loadStartingPositions(vector<LifeGrid>& startGrid, 
						   vector<string>& startingNames, 
							string fileName)
{
	ifstream inFile;	// stream to file
	string gridName;	// name of grid configuration
	LifeGrid lifeGrid;	// holds a particular configuration
	char mark;			// used to hold symbol for alive

	inFile.open(fileName);
	if(!inFile)
	{
		cout << "Cannot open file";
		system("pause");
		exit(EXIT_FAILURE);
	}
	
	while (getline(inFile,gridName))
	{
		startingNames.push_back(gridName);			// Saves the starting name
		for (int i = 0; i < GRID_ROWS; i++)			// i is a row
		{
			for (int j = 0; j < GRID_COLUMNS; j++)	// j is a column
			{
				inFile >> mark;
				lifeGrid.grid[i][j].futureAlive = false; 
				if (mark == 'O')
				{
					lifeGrid.grid[i][j].currentAlive = true; 
				}
				else
				{
					lifeGrid.grid[i][j].currentAlive = false; 
				}				
			}	// end of inner for loop
		}	// end of outer for loop
		
		startGrid.push_back(lifeGrid);
		
		if (inFile.peek() == '\n')
			inFile.get(); 
	
	}	// end of while loop
	
	inFile.close(); 
}

// initialize the grid randomly 
void initializeGrid(Life grid[][GRID_COLUMNS], 
					int numRows, int capacityFull)
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < GRID_COLUMNS; col++)
		{
			if (rand() % 100 < capacityFull)
				grid[row][col].currentAlive = true;
			else
				grid[row][col].currentAlive = false;
			grid[row][col].futureAlive = false; 
		}
	}
}

// initialize grid with a particular life grid configuration
void initializeGrid(Life grid[][GRID_COLUMNS], 
					const vector<LifeGrid>& startGrid, 
					int numRows, int gridNum)
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < GRID_COLUMNS; col++)
		{
			grid[row][col].currentAlive = 
				startGrid[gridNum].grid[row][col].currentAlive;
			grid[row][col].futureAlive = false; 
		}
	}
}

// update the grid
int updateGrid(Life grid[][GRID_COLUMNS], int numRows)
{
	const int STAY_ALIVE = 2;	// min cells to stay alive
	const int DIE = 4;			// min cells to die
	const int BORN = 3;			// cell need to be born

	int liveCells = 0;	
	int neighbors = 0; 

	// Pass 1 which cells will live, die, and be born
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < GRID_COLUMNS; col++)
		{
			neighbors = 0; 
			for (int nRow = row - 1; nRow < row + 2; nRow++)
			{
				for (int nCol = col; nCol < col + 1; nCol++)
				{
					if ((nRow != row || nCol != col) &&
						grid[clampAround(nRow, 0, GRID_ROWS - 1)][clampAround(nCol, 0, GRID_COLUMNS - 1)].currentAlive)
					{
						neighbors++;
					}
				}
			} // end subgrid (local world)
			if (neighbors < STAY_ALIVE)
				grid[row][col].futureAlive = false;
			else if (neighbors == DIE)
				grid[row][col].futureAlive = false;
			else if (neighbors == BORN)
				grid[row][col].futureAlive = true;
			else
				grid[row][col].futureAlive = true;
		}
	}	// end of pass 1

	return liveCells;
}

// draw the grid
void drawGrid(Life grid[][GRID_COLUMNS], int numRows)
{
	// clear the screen
	system("CLS");

	// draw each grid with a border
	for (int i = 0; i < GRID_COLUMNS + 2; i++)
		cout << "-";
	cout << endl; 

	// display the grid
	for (int row = 0; row < numRows; row++)
	{
		for (int col = -1; col < GRID_COLUMNS + 1; col++)
		{
			if (col == -1 || col == GRID_COLUMNS)
				cout << "|";
			else
			{
				if (grid[row][col].currentAlive)
					cout << "o";
				else
					cout << " ";
			}
		}	// end of inner loop
		cout << endl;

	}// end of outer loop
	for (int i = 0; i < GRID_COLUMNS + 2; i++)
		cout << "-";
	cout << endl;
	
}

//If num is between min and max, keep it there
//if num is larger than max, make it min
//if num is smaller than min, make it max
int clampAround(int num, int min, int max)
{
	//if (num < min) num = max - 1; 
	if (num < min) num = max;
	if (num > max) num = min; 
	return num;
}

// Display the rules 
void displayRules()
{
	cout << "WELCOME TO GAME OF LIFE\n\n"
		<< "Here are the Rules:\n\n"
		<< "";
}
