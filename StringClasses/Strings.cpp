#include <iostream>
#include <string>
#include "Strings.h"

/*
MyString::MyString()
{

}

MyString::MyString(int length)
{

}

int MyString::mLenght()
{
	
	return 0;
}

void MyString::GetIndex()
{

}

MyString MyString::UpperString(MyString rhs)
{

	return MyString();
}

MyString MyString::LowerString(MyString lhs)
{
	return MyString();
}
*/

MyString::MyString()
{
	mString = new char[255];
}

MyString::MyString(char *string)
{
	mString = string;
}

int MyString::GetLength()
{
	int i=0;                     //Gives "i" definition and a value to be passed in
 	while (mString[i] != '\0')     //Checks if the array in place of "i" in the array it checks to see is it the null char.
	{
		i+=1;	                   //Counts the place of "i" of an array by one time along the array until the '\0'.
	}
	return i;                      //Returns the places that was moved to up to the '\0' was reached.
}

MyString MyString::ToUpper()
{
	
	char *Upper = new char[255];                   //Copy 
	for (int i = 0; i <= GetLength(); i++)        
	{
		if (mString[i] >= 97 && mString[i] <= 122) // checks to see if the character isnt in the desired case.
		{
			Upper[i] = mString[i] - 32;
		}
	}
}

MyString MyString::ToLower()
{
	char *Lower = new char[255];                  //Copy array
	for (int i = 0; i <= GetLength(); i += 1)      
	{
		if (mString[i] >= 65 && mString[i] <= 90) // checks to see if the character isnt in the desired case.
		{
			Lower[i] = mString[i] + 32;
		}
	}
}

bool MyString::CompareStrings(MyString &other) //compares values in two instances of the string
{
	char *Compare = new char[];
	for (int i = 0; i != GetLength(); i++)
	{
		
	}
	return false;  
}



