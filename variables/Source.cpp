#include <iostream>

int main()
{
	//Class Example
	//Interger data type
	int myNumber = 9;
	//Floating type data type
	float decimal = 0.5f;
	//Character data type
	char myLetter = 'd';
	//Boolean data type
	bool trueFalse = false;

	//You can not print to the console unless the problem specifies.

	//1. Select suitable variable types and names for the following examples
	//a) The average height of students in your class
	char avgHeightOfStudentsInClass_;
	//b) The tax rate for incomes over $65000
	char rateOfTaxForIncomesOver65k;
	//c) The tax rate for incomes below $5000
	char rateOfTaxForIncomesUnder5k;
	//d) The total cost of all the games on your Steam library
	char costOfGamesInTotalOnYourSteamLibrary;

	//2. Select suitable data types to hold the following values :
	//a) 121
	int myNumber = 121;
	//b) 9.4
	float decimal = 9.4f;
	//c) r
	char myLetter = 'r';
	//d) 100000
	long int myNumber = 100000;
	//e) False
	bool trueFalse = false;

	//3. Create a program that swaps two numbers. Ask the user for 2 numbers in the console window
	//and store the result in variables called “a” and “b” print the result to screen.Write code 
	//that swaps the values for these variables, then print the variables “a” and “b” again.
	//You should comment your code.
	int a = 4;
	std::cin >> a;
	int b = 6;
	std::cin >> b;
	//4. Ask the user for 5 numbers and output the average of these numbers.		
	int num1, num2, num3, num4, num5;
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

	//5. Redo question 3 but allows the user to input the values to be swapped and provide information
	//in the console proving the data was swapped.

	system("pause");

}