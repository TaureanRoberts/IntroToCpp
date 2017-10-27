#include <iostream>
int QuestionThree()
{
	int a;
	int b;
	int temp;
    std::cout << "a = " << a << " b = " << b << std::endl;
	temp = a;
	a = b;
	b = temp;
	std::cout << "a = " << a << "b = " << b << std::endl;
	return a + b;
}

int QuestionFour()
{
int a, b, c, d, e, avg;
	std::cout << "Please enter FIVE numbers: \n";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	avg = (a + b + c + d + e) / 5;
	std::cout << "This is he average of the choosen numbers: " << avg;
	return a, b, c, d, e, avg;
}

void QuestionFive()
{
    int a, b, temp;
    std::cout << "Enter two random numbers: \n";
	std::cin >> a >> b;
	std::cout << "The numbers before the switch: " << a << " " << b << std::endl;
	temp = a;
	a = b;
	b = temp;
	std::cout << "Numbers after the switch:  " << a << " " << b << std::endl;
}

int main()
{
	//Class Example
	//Interger data type
	////int myNumber = 9;

	//Floating type data type
	////float decimal = 0.5f;

	//Character data type
	////char myLetter = 'd';

	//Boolean data type
	////bool trueFalse = false;


	//You can not print to the console unless the problem specifies.

	//1. Select suitable variable types and names for the following examples
	//a) The average height of students in your class
	//char avgHeightOfStudentsInClass;

	//b) The tax rate for incomes over $65000
	// char rateOfTaxForIncomesOver65k;

	//c) The tax rate for incomes below $5000
	//char rateOfTaxForIncomesUnder5k;

	//d) The total cost of all the games on your Steam library
	//char costOfGamesInTotalOnYourSteamLibrary;

	//2. Select suitable data types to hold the following values :
	//a) 121
	//int myNumber = 121;

	//b) 9.4
	//float decimal = 9.4f;

	//c) r
	//char myLetter = 'r';
	//d) 100000
	//long int myNumber = 100000;

	//e) False
	//bool trueFalse = false;

	//3. Create a program that swaps two numbers. Ask the user for 2 numbers in the console window
	//and store the result in variables called “a” and “b” print the result to screen.Write code 
	//that swaps the values for these variables, then print the variables “a” and “b” again.
	//You should comment your code.
	QuestionThree();
	//4. Ask the user for 5 numbers and output the average of these numbers.		
	QuestionFour();
	//5. Redo question 3 but allows the user to input the values to be swapped and provide information
	//in the console proving the data was swapped.
	QuestionFive();

	system("pause");
}