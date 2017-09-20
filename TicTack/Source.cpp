#include <iostream>

char matrix[3][3] = {'7', '8', '9', '4', '5', '6', '1', '2', '3' };
char player = 'X'; //Player 1 that starts the game

void Draw()
{
	//Making a playing grid
	std::cout << " Tj's Tic Tac Toe! " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << matrix[i][j] << "   ";
		}
		std::cout << std::endl;
	}
}


void Input()
{
	int x;
	std::cout << "Player one Pick a number for the spot for your piece: " << std::endl;
	std::cin >> x;
	
	//Row
	for (int a = 0; a < 9; a++)
	{
		
	}

	//Column

	if (x == 7)
		matrix[0][0] = player;
	else if (x == 8)
		matrix[0][1] = player;
	else if (x == 9)
		matrix[0][2] = player;
	else if (x == 4)
		matrix[1][0] = player;
	else if (x == 5)
		matrix[1][1] = player;
	else if (x == 6)
		matrix[1][2] = player;
	else if (x == 1)
		matrix[2][0] = player;
	else if (x == 2)
		matrix[2][1] = player;
	else if (x == 3)
		matrix[2][2] = player;
	else
		std::cout << "Not an aplicable choice." << std::endl;
}

void playerPlacement()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}



int main()
{
	Draw();
	while (1)
	{
		Input();
		Draw();
		playerPlacement();
	}
		system("pause");
	return 0;
}