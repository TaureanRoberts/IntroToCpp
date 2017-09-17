#include <iostream>

char lines[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9' };
char playerOne = 'X';

void grid()
{
	std::cout << " Tj's Tic Tac Toe! " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << lines[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void placement()
{
	int a;
	std::cout << "Player one Pick a number for the spot for your piece: " << std::endl;
	std::cin >> a;

	if (a == 1)
		lines[0][0] = playerOne;
}

int main()
{
	grid();
		system("pause");
	return 0;
}