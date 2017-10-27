#include <iostream>


void QuestionThree()
{
	{
		int myNumbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
		//Sets the numbers 1 - 10
	}
}

void QuestionFour()
{
	int myNumero[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 1; i <= 5; ++i)
	{
		std::cout << i << std::endl;
	}
}

int QuestionFive()
{
	int countingDown[10] = { 10,9,8,7,6,5,4,3,2,1 };

	for (int i = 10; i >= 1; i -= 1)
	{
		std::cout << i << std::endl;
	}
	return countingDown[10];
}

void QuestionSix()
{
	//6. Create a an array of size five then ask the user to input five 
	//number into the array. Display the largest and smallest numbers 
	//to the console.
	int myArray[5];
	std::cout << "Put in 5 numbers.\n";
	int input = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> myArray[input];
		input++;
	}
	int bigNum = myArray[0];
	int smallNum = myArray[0];
	for (int valueOne = 0; valueOne <= 4; valueOne++)
	{
		if (myArray[valueOne] < smallNum)
			smallNum = myArray[valueOne];
		if (myArray[valueOne] >= bigNum)
			bigNum = myArray[valueOne];
	}
	std::cout << "Biggest number is...\n";
	std::cout << bigNum << std::endl;
	std::cout << "Smallest number is...\n";
	std::cout << smallNum << std::endl;
}

void QuestionSeven()
{
	int grid[3][3];
	int row = 0;
	int column = 0;
	for (int iter = 1; iter <= 9; iter++)
	{
		grid[row][column] = iter;
		std::cout << grid[row][column];
		column++;
		if (iter == 3)
		{
			row++;
			column = 0;
			std::cout << std::endl;
		}
		else if (iter == 6)
		{
			row++;
			column = 0;
			std::cout << std::endl;
		}
		else if (iter == 9)
			std::cout << std::endl;
	}
}

int main()
{
	//1. Declare an array for each of the following(size of array does not matter unless
	//sepcified).
	//a. heights of students
	//float studentHeights[5];

	//b. age of parents
	//int parentsAge[40];

	//c. true of false questions
	//bool truthOrFalseQuestions[6];

	//d. letters of the alphabet
	//int lettersOfAlphabet[25];

	//2. What is the size in memory of the following arrays
	//a. 
	//float heights[5];
	//45

	//b. 
	//int ages[10];
	//40

	//c. 
	//char letters[26];
	//26

	//3. Declare an array with the values 1 - 10;
	std::cout << "Counting 1 - 10\n";
	QuestionThree();
	//4. Using the array created in problem 3 print the 5th index.
	std::cout << "Using the first array going to the 5th index.\n";
	QuestionFour();
	//5. Using a loop, populate an array of size 10 with the values 10 - 1.
	std::cout << "Count from 10 to 1.\n";
	QuestionFive();
	//6. Create a an array of size five then ask the user to input five 
	//number into the array. Display the largest and smallest numbers 
	//to the console.
	std::cout << "Array of 5 numbers\n";
	QuestionSix();
	//7. Create a program that creates a small 3x3 array of integers.Use a nested for 
	//loop to initialise the numbers 1 - 9. Output the numbers in a grid format.
	std::cout << "3x3 array. \n";
	QuestionSeven();
	system("pause");
}