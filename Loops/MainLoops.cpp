#include <iostream>




int main()
{
	//1. What is the output of the following code samples?
	//a. 
	//for (int i = 0; i < 100; i++)
	//{
	//	std::cout << i << std::endl;
	//}
	// It outputs Even numbers from 0 to 100



	//b. 
	//for (int i = 100; i >= 0; i -= 2)
	//{
	//	std::cout << i << std::endl;
	//}
	// Out puts even numbers from 0 to 100



	//c. 
	//int iter = 0;
	//while (iter != 25)
	//{
	//	std::cout << iter << std::endl;
	//	iter += 5;
	//}
	//counts by 5's from 0 to 20



	//d. 
	//int counter = 0;
	//do
	//{
	//	counter++;
	//	if (counter == 1)
	//		break;
	//	else
	//		std::cout << counter << std::endl;
	//} while (counter < 10);
	//Doesnt input anything



	//2. Using a for loop, iterate through numbers 0 to 100.
	//-For multiples of 3 print “Fizz”
	//- For multiples of 5 print “Buzz”
	//- For multiples of 3 and 5 print “FizzBuzz”
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)
	
		
	

    //3. Repeat problem 2 using a while loop and a do while loop.
    //while loop
	



			//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100

	


			system("pause");
}

int secondQuestion()
{
	for (int i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			std::cout << "Fizzbuzz \n";
		else if (i % 3 == 0)
			std::cout << "Fizz \n";
		else if (i % 5 == 0)
			std::cout << "Buzz \n";
		else
			std::cout << i << "\n";
	}
	system("pause");





}

int thirdQuestion()
{

	int i = 0;
	while (i < 100);
	{
		if (i % 3 == 0 && i % 5 == 0)
			std::cout << "Fizzbuzz \n";
		else if (i % 3 == 0)
			std::cout << "Fizz \n";
		else if (i % 5 == 0)
			std::cout << "Buzz \n";
		else
			std::cout << i << "\n";
	}
	system("pause");

	
}

int fourthQuestion()
{


	const int start = 1;
	const int finish = 99;

	int number = start;
	if (number % 2) number++;

	while (number <= 21)
	{
		std::cout << number << ' ';
		number += 2;
	}





}