#include "3TGame.h"
#include <iostream>

TicTacToeGame::TicTacToeGame()
{
}

void TicTacToeGame::playGame()
{
	cleanSlate();
	char player1 = 'X';
	char player2 = 'O';
	char playerTurn = player1;
	bool isDone = false;
	int x, y;
	int turn = 0;
	while (isDone == false) 
	{
		playingField();
		x = myColumns();
		y = rowYourBoat();
		if (PlayerSpot(x, y, playerTurn) == false) 
		{
			std::cout << "Bruh, you know that spot taken. \n";
		}
		else 
		{
			turn++;
			if (chickenDinner(playerTurn) == true) 
			{
				std::cout << "Winner Winner Chicken Dinner!!! Player " << playerTurn << " Killed it! Nice!\n";
				isDone = true;
			}
			else if (turn == 9) 
			{
				std::cout << "Its a draw, stand do\n";
				isDone = true;
			}
			if (playerTurn == player1) 
			{
				playerTurn = player2;
			}
			else 
			{
				playerTurn = player1;
			}
		}
	}
}



int TicTacToeGame::myColumns()
{
	bool isInputBad = true;

	int x;

	while (isInputBad == true) 
	{
		std::cout << "Choose the a number from the column you want: ";
		std::cin >> x;
		if (x < 1 || x > 3) 
		{
			std::cout << "Ehh, thats not something you can do. Try Again. \n";
		}
		else 
		{
			isInputBad = false;
		}
	}
	return x - 1;
}

int TicTacToeGame::rowYourBoat()
{
	bool isInputBad = true;
	int y;
	while (isInputBad == true) 
	{
		std::cout << "Choose a number that follows the rows from your column choice. ";
		std::cin >> y;

		if (y < 1 || y > 3) 
		{
			std::cout << "Sorry, you can't do that on my grid. Try again.\n";
		}
		else 
		{
			isInputBad = false;
		}
	}
	return y - 1;
}

bool TicTacToeGame::PlayerSpot(int x, int y, char currentPlayer)
{
	if (gameSetup[y][x] != ' ')
	{
		return false;
	}
	gameSetup[y][x] = currentPlayer;
	return true;
}

bool TicTacToeGame::chickenDinner(char currentPlayer)
{
	for (int i = 0; i < 3; i++) 
	{
		if ((gameSetup[i][0] == currentPlayer) && (gameSetup[i][0] == gameSetup[i][1]) && (gameSetup[i][1] == gameSetup[i][2])) 
		{
			return true;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((gameSetup[0][i] == currentPlayer) && (gameSetup[0][i] == gameSetup[1][i]) && (gameSetup[1][i] == gameSetup[2][i])) 
		{
			return true; 
		}
	}
	if ((gameSetup[0][0] == currentPlayer) && (gameSetup[0][0] == gameSetup[1][1]) && (gameSetup[1][1] == gameSetup[2][2])) 
	{
		return true; 
	}
	if ((gameSetup[2][0] == currentPlayer) && (gameSetup[2][0] == gameSetup[1][1]) && (gameSetup[1][1] == gameSetup[0][2])) 
	{
		return true; 
	}
	return false;
}

void TicTacToeGame::cleanSlate()
{
	
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			gameSetup[i][j] = ' ';
		}
	}
}

void TicTacToeGame::playingField()
{
	std::cout << std::endl;
	std::cout << " |1 2 3|\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << " -------\n";
		std::cout << i + 1 << "|" << gameSetup[i][0] << "|" << gameSetup[i][1] << "|" << gameSetup[i][2] << "|\n";
	}
	std::cout << " -------\n";
}