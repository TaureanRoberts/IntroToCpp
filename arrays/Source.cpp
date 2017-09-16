#include <iostream>


void countingToTen(int myNumbers[])
{
	{
		int myNumbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
		//Prints the numbers 1 - 10
		
	}
     countingToTen;
}

void goingToFive(int mynumero[], int len)
{

	int myNumero[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 1; i <= 5; ++i)
	{
		std::cout << i << std::endl;
	}



	goingToFive;
}

int countdownToSpace()
{
	int countingDown[10] = { 10,9,8,7,6,5,4,3,2,1 };

	for (int i = 10; i >= 1; i -= 1)
	{
		std::cout << i << std::endl;
	}
	return countingDown[10];
}

int arrangeNumbers(const int fiveNumbs[], int leastTwoGreat)
{
	//6. Create a an array of size five then ask the user to input five 
	//number into the array. Display the largest and smallest numbers 
	//to the console.
	std::cout << "Input five numbers and I will arrange them" << std::endl;

	int bigToSmall[5];
	bigToSmall[0];
	bigToSmall[1];
	bigToSmall[2];
	bigToSmall[3];
	bigToSmall[4];


	for (int i : bigToSmall)
	{
		std::cin >> bigToSmall[5];
		std::cout << i << std::endl;
	}
	return bigToSmall[5];
}

int threeTimesGrids()
{

	int myTripleArray[3][3] = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };
	for (int i = 0; i < 3; i++)
	{
		std::cout << "array" << i << std::endl;
		for (int t = 0; t <= 3; ++t)
		{
			std::cout << myTripleArray << std::endl;
		}
		return 0;
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
	
	std::cout << countingToTen << std::endl;


	//4. Using the array created in problem 3 print the 5th index.


	std::cout << goingToFive << std::endl;



	//5. Using a loop, populate an array of size 10 with the values 10 - 1.

	std::cout << countdownToSpace << std::endl;

	//6. Create a an array of size five then ask the user to input five 
	//number into the array. Display the largest and smallest numbers 
	//to the console.

	std::cout << arrangeNumbers << std::endl;
	

	//7. Create a program that creates a small 3x3 array of integers.Use a nested for 
	//loop to initialise the numbers 1 - 9. Output the numbers in a grid format.

	std::cout << threeTimesGrids << std::endl;

	system("pause");
}