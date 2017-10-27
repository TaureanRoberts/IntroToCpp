#include <iostream>
/*
Week 1 Assignment:
What you will need to know
- Variables
- Conditionals
- Loops
- arrays
Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
each day during a typical week. Write a program that stores this information in a
2 dimensional 3 x 7 array, where each row represents a different dragon and each column
represents a different day of the week. Then it should create a report that includes the
following information:
    - Average amount of food eaten per day by all the dragons together
    - Average amount of food eaten per day by any one dragon
    - The greatest amount of food eaten during one day and which dragon that was
    - The least amount of food eaten during one day and which dragon that was
*/

int main()
{
	int dragons[3][7] = { { 10, 1, 11, 4, 0, 20, 5 },
	{ 5, 17, 1, 2, 6, 12, 8 },
	{ 3, 8, 9, 15, 9, 4, 9 } };

	float avgAllDragons = 0;
	int highDrag = 0;
	int lowDrag = 0;
	int i = 0;
	int j = 0;
	float iter = 0;
	float foodAvg = 0;
	float avgDay = 0;

	while (i < 1)
	{
		for (j = 0; j < 7; j++)
		{
			iter += dragons[i][j];
		}
		foodAvg = iter / 7;
		std::cout << "Average Food for Bob" << foodAvg << std::endl;
		std::cout << std::endl;
		break;
	}
	i = 1;
	iter = 0;
	foodAvg = 0;
	while (i = 1)
	{
		for (j = 0; j < 7; j++)
		{
			iter += dragons[i][j];
		}
		foodAvg = iter / 7;
		std::cout << "average food for Cat" << foodAvg << std::endl;
		std::cout << std::endl;
		break;
	}
	i = 2;
	iter = 0;
	foodAvg = 0;
	while (i = 2)
	{
		for (j = 0; j < 7; j++)
		{
			iter += dragons[i][j];
		}
		foodAvg = iter / 7;
		std::cout << "average food for Scotty" << foodAvg << std::endl;
		std::cout << std::endl;
		break;
	}
	int smallNum = dragons[0][0];
	int largeNum = dragons[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (smallNum <= dragons[i][j])
				break;
			else if (smallNum > dragons[i][j])
				smallNum = dragons[i][j];
		}
	}
	std::cout << "The least amount of food eaten by any dragon on any day is:" << std::endl;
	std::cout << std::endl;
	std::cout << smallNum << " piles" << std::endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (largeNum >= dragons[i][j])
				break;
			else if (largeNum < dragons[i][j])
				largeNum = dragons[i][j];
		}
	}
	std::cout << "The largest amount of food eaten by any dragon on any day is:" << std::endl;
	std::cout << std::endl;
	std::cout << largeNum << " kilos" << std::endl;
	system("pause");
}