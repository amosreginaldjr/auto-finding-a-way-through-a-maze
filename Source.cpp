#include<iostream>
using namespace std;

bool isODD(int x)
{
	return x % 2;
}

class Bot
{
private:
	char bot_head;
	char board_symbol;
	static const int board_size = 5;
	char board[board_size][board_size];
public:
	Bot();
	void build_board();
	void configure_board(); //for the user to change the board settings
	void print_board();
	

public /*debugging*/:
	void print_board_numerically();
};

Bot::Bot()
{
	bot_head = '*';
	board_symbol = '#'; //blank spaces = 32
}

void Bot::build_board()
{
	//temp:
	char tempX = '%';
	char tempY = '!';
	for (int x = 0; x < board_size; x++) //i
	{
		for (int y = 0; y < board_size; y++) //j
		{
			if (isODD(x) == isODD(y))
				board[x][y] = tempX;
			else
				board[x][y] = tempY;
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

int main()
{
	Bot b;
	b.build_board();
	b.print_board();
	cout << endl;
	b.print_board_numerically();

	return 0;
}