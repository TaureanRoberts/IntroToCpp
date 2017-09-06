#include <iostream>
int AddNumb(int a, int b)
{
	int sumNum = a + b;
	return a+b ;
}

int SubNumb(int c, int d)
{
	int remainingNumb = c - d;
	return c - d;
}

int MultiNumb(int e, int f)
{
	int total = e*f;
	return e*f;
}

float DivNumb(int g, int h)
{
	int halfNumb = g / h;
	return g / h;
}

int main()
{
//1. Find the error in each of the following functions and explain how to fix them.





//2. Create a function for each of the following math operators. They must return a value.
//and take in at least two argument. Once all the functions have been created you will need to 
//invoke them and print out the return.
    //a. Addition
    //b. Subtraction
    //c. Multiplication
    //d. Division
	std::cout << AddNumb << std::endl;
	std::cout << SubNumb << std::endl;
	std::cout << MultiNumb << std::endl;
	std::cout << DivNumb << std::endl;

//3. Create a function that takes in two arguments, one beign an array of float and the other
//being the size of the array. It must return the largest value in the array.
//4. Using recursion write a function that prints out the Fibonacci sequence.


//5. The following statement calls a function named Half. The Half function returns a value that 
//is half that of the argument. Write the function.


//6. Write a function that takes as its parameters an array of integers and the size of the array 
// and returns the sum of the values in the array.




	system("pause");
}