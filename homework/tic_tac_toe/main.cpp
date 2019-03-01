#include "tic_tac_toe.h"
#include<string>
#include <iostream>
using namespace std;




int main() 
{
/*
1) Create a program that will play the TicTacToe game until the user opts to quit (outer loop).
2) Start the game with X or O.
3) Create another loop(inner loop) that iterates until a winner is determined
4) In the loop, prompt the user for a position from 1 through 9 and update board position.(Assume user never chooses a taken position)
5) Display the current status of the board.
6) After a winner is determined prompt user if they want to play another game.
*/
	std::string first_player;
	int x;
	TicTacToe Tic;
	first_player = "O";
	Tic.start_game(first_player);
	Tic.mark_board(1);

	cin >> x;

	return 0;
}