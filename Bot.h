#pragma once

class Bot
{
private:
	char bot_head;
	char board_symbol;
	static const int board_size = 5;
	char board[board_size][board_size];
	bool isODD(int x);
private/*random number*/:
	int random_number_is;
	int get_random_number(/*no parameter needed*/);
	void delay();
public:
	void set_random_number();
public:
	Bot();
	void build_board();
	void configure_board(); //for the user to change the board settings
	void print_board();

public /*debugging*/:
	void print_board_numerically();
};