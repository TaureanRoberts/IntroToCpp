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
	//1. Create a 2D array.
	int dragonChart[3][7];

	//2. Display the data of the array.
	for (int i = 0; i < 3; i++)
		std::cout << dragonChart[3][7] << i << std::endl;
	{
		for (int j = 0; j < 7; j++)
			std::cout << dragonChart[3][7] << j << std::endl;
	}
	system("cls");

	//3. 
	system("pause");
}