#include <iostream>
#include "3TGame.h"

int main()
{
	std::cout << "Welcome to T.J.'s Tic Tac Toe ARENA!!! \n";
	char input;
	bool isDone = false;
	TicTacToeGame game;
	while (isDone == false) 
	{
		game.playGame();
		std::cout << "Would you like to play again? (Y/N): ";
		std::cin >> input;
		if (input == 'N' || input == 'n') {
			isDone = true;
		}
	}

	system("pause");
	return 0;
}