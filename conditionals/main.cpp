#include <iostream>

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

	//2. Write an if statement that assigns 100 to the value of x when y is equal to zero





	//3. Write a program that accepts an integer that represents the month of the year. 
	//It should then display the number of days in that month. If a number that doesn’t correspond 
	//to a month is entered then the program should display an error message. You must use a switch statement


	


	//to a month is entered then the program should display an error message. You must use a switch statement
	// take in user input
	std::cout << "Pick a number between 1 and 12. And I will tell you what month it is.\n";

	//user must enter a number

	// the number must be between 1 and 12

	//when the user inputs 1 we output "January"
	int month;
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
		std::cout << "Do you need mental help?\n";
		break;
		system("pause");
	}
	



//4. Redo problem 3 using if statements
	
	int daysOfMonth;
		std::cin >> daysOfMonth;
		{
		if (daysOfMonth == 1)
			std::cout << "January has 31 days\n";

		else if (daysOfMonth == 2)
			std::cout << "Feb has 28 days\n";

		else if (daysOfMonth == 3)
			std::cout << "March has 31 days\n";



			system("pause");

	}
//5. Convert problem 2 into a ternary operator


	

}