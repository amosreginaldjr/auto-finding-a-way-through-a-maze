#include<iostream>
#include<cstdlib> //srand, rand
#include<ctime>   //time
#include"Bot.h"
using namespace std;

int main()
{
	Bot b;
	b.build_board();
	b.print_board();
	//cout << endl;
	//b.print_board_numerically();

	return 0;
}