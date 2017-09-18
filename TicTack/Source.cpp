#include <iostream>

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';

void Draw()
{
	std::cout << " Tj's Tic Tac Toe! " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void Input()
{
	int a;
	std::cout << "Player one Pick a number for the spot for your piece: " << std::endl;
	std::cin >> a;

	if (a == 1)
		matrix[0][0] = player;
	else if (a == 2)
		matrix[0][1] = player;
	else if (a == 3)
		matrix[0][2] = player;
	else if (a == 4)
		matrix[1][0] = player;
	else if (a == 5)
		matrix[1][1] = player;
	else if (a == 6)
		matrix[1][2] = player;
	else if (a == 7)
		matrix[2][0] = player;
	else if (a == 8)
		matrix[2][1] = player;
	else if (a == 9)
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