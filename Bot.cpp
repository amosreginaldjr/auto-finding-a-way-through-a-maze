#include<iostream>
#include<cstdlib> //srand, rand
#include<ctime>   //time
#include"Bot.h"
using namespace std;


//public:
Bot::Bot()
{
	bot_head = '*';
	board_symbol = '#'; //blank spaces = 32
}

bool Bot::isODD(int x)
{
	return x % 2;
}

void Bot::build_board()
{
	for (int x = 0; x < board_size; x++) //i
	{
		for (int y = 0; y < board_size; y++) //j
		{
			if (isODD(x) == isODD(y))
				board[x][y] = board_symbol;
			else
				board[x][y] = board_symbol;
		}
	}
}

void Bot::configure_board()
{
	/*should this be a switch statement so the user does not have to configure every
	  single setting, every single time*/;
	  cout << "Enter a symbol for your bot head: ";
	  //create a getter and setter for bot_head
	  cout << "Enter a symbol for your board: ";
	  //create a getter and setter for board_symbol
	  cout << "Enter your intergers for your board size (x,y): ";
	  //getter and setter for x and y (board_size_X, board_size_Y)
}

void Bot::print_board()
{
	for (int i = 0; i < board_size; i++)
	{
		for (int j = 0; j < board_size; j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << endl;
	}
}

//Random Number:
int Bot::get_random_number()
{
	return random_number_is;
}

void Bot::set_random_number(/*no parameter needed*/)
{
	srand(time(NULL));
	random_number_is = rand() % board_size + 1;
}

void Bot::delay()
{
	//Sleep(1000);
}


//Debugging:
void Bot::print_board_numerically()
{
	for (int i = 0; i < board_size; i++)
	{
		for (int j = 0; j < board_size; j++)
		{
			cout << i << ',' << j << '|';
		}
		if (i != board_size - 1)
			cout << endl << "------------";
		cout << endl;
	}
}