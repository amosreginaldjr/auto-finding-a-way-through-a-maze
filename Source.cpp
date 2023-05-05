#include<iostream>
using namespace std;

bool EVEN(int x)
{
	return (x % 2 == 0);
}
//i % 2 == 0 //even
//i % 2 == 1 //odd

class Bot
{
private:
	char bot_head;
	char board_symbol;
	static const int board_size = 3;
	char board[board_size][board_size];
public:
	Bot();
	void build_board();
	void configure_board(); //for the user to change the board settings
	void print_board();

};

Bot::Bot()
{
	bot_head = '*';
	board_symbol = '#';
}

void Bot::build_board()
{
	//temp:
	char tempX = '%';
	char tempY = '!';
	for (int i = 0; i < board_size; i++)
	{
		for (int j = 0; j < board_size; j++)
		{
			if (EVEN(i))
				board[i][j] = tempX; //blank spaces = 32
			else if (!EVEN(i))
				board[j][i] = tempY;

			if (!EVEN(i))
				board[i][j] = tempY; //blank spaces = 32
			else if (EVEN(i))
				board[j][i] = tempX;
		}
		//cout << endl;
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

int main()
{
	Bot b;
	b.build_board();
	b.print_board();

	return 0;
}