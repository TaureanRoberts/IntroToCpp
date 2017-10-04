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
	int i = 0;                     //Gives "i" definition and a value to be passed in
 	while (mString[i] != '\0')     //Checks if the array in place of "i" in the array it checks to see is it the null char.
	{
		i+=1;	                   //Counts the place of "i" of an array by one time along the array until the '\0'.
	}
	return i;                      //Returns the places that was moved to up to the '\0' was reached.
}

MyString MyString::ToUpper()
{
	MyString tempString;
	for (int i = 0; i <= GetLength(); i += 1)     //
	{
		if (mString[i] >= 65 && mString[i] <= 90) // checks to see if the character is in the desired case.
		{
			
		}
	}
}

MyString MyString::ToLower()
{
	MyString tempString;
	for (int i = 0; i <= GetLength(); i += 1)      //
	{
		if (mString[i] >= 97 && mString[i] <= 122) // checks to see if the character is in the desired case.
		{

		}
	}
}

bool MyString::SameString() //compares values in two instances of the string
{
	return (ToUpper && ToLower) ? true : false; // Change when get back home.
}