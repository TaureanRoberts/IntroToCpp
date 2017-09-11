#include <iostream>

int IfStatement()
{
	// Write an if statement that assigns 100 to the value of x when y is equal to zero.
	int x = 100;
		int y = 0;
	if (x = 100) 
	{
		std::cout << "x is equal to 100 \n";
	}
	else (y = 0);
	std::cout << "y is equal to 0 \n";
	return 0;
}

int SwitchMonths()
{
	int month;
	// take in user input
	std::cout << "Pick a number between 1 and 12. And I will tell you what month it is.\n";

	//user must enter a number

	// the number must be between 1 and 12

	
	std::cin >> month;
	switch (month)
	{

	case 1:
		std::cout << "January has 31 days\n";
		break;
	case 2:
		std::cout << "Febuary has 28 days\n";
		break;
	case 3:
		std::cout << "March has 31 days\n";
		break;
	case 4:
		std::cout << "April has 30 days\n";
		break;
	case 5:
		std::cout << "May has 31 days\n";
		break;
	case 6:
		std::cout << "June has 30 days\n";
		break;
	case 7:
		std::cout << "July has 31 days\n";
		break;
	case 8:
		std::cout << "August has 31 days\n";
		break;
	case 9:
		std::cout << "September has 30 days\n";
		break;
	case 10:
		std::cout << "October has 31 days\n";
		break;
	case 11:
		std::cout << "November has 30 days\n";
		break;
	case 12:
		std::cout << "December has 31 days\n";
		break;

	default:
		std::cout << "Do you need mental help? I said 1 through 12.\n";
		break;

		return month;
	}
}

int questionFour()
{
	std::cout << "Same as before, pick a number from 1 to 12 for a month\n";
	float monthTwo;
	std::cin >> monthTwo;


	if (monthTwo == 1)
		std::cout << "January has 31 days\n";

	else if (monthTwo == 2)
		std::cout << "Febuary has 28 days\n";

	else if (monthTwo == 3)
		std::cout << "March has 31 days\n";

	else if (monthTwo == 4)
		std::cout << "April has 30 days\n";

	else if (monthTwo == 5)
		std::cout << "May has 31 days\n";

	else if (monthTwo == 6)
		std::cout << "June has 30 days\n";

	else if (monthTwo == 7)
		std::cout << "July has 31 days\n";

	else if (monthTwo == 8)
		std::cout << "August has 31 days\n";

	else if (monthTwo == 9)
		std::cout << "September has 30 days\n";

	else if (monthTwo == 10)
		std::cout << "October has 31 days\n";

	else if (monthTwo == 11)
		std::cout << "November has 30 days\n";

	else if (monthTwo == 12)
		std::cout << "December has 31 days\n";

	else
		std::cout << "Im thinking that you cant follow simple rules\n";



	return 0;
}

int questionFive()
{
	int x = 100;
	int y = 0;

	(x = 100, y = 0) ? 100 : 0;




	return 0;
}

int main()
{
	//1. What do the following conditionals evaluate to if "A = true and B = false"
	// A || B
	//True

	// A || B
	//True

	// !A
	//False

	// !(A && A)
	//False

	// B && A
	//False


	//(!B || A)
	//True


	//(!B || A)
	//True




	//2. Write an if statement that assigns 100 to the value of x when y is equal to zero.
	{
		std::cout << IfStatement << std::endl;
	}

	//3. Write a program that accepts an integer that represents the month of the year. 
	//It should then display the number of days in that month. If a number that doesn’t correspond 
	//to a month is entered then the program should display an error message. You must use a switch statement
	{
		std::cout << SwitchMonths << std::endl;
	}
	



	//4. Redo problem 3 using if statements
	{
		std::cout << 
	}
	

	//5. Convert problem 2 into a ternary operator
	/////////////////
	// Go to line 187 ===>
	/////////////////
                 system("pause");
}