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

void MyString::GetLength()
{
	
	while (int i = '\0')
	{
		 
	}
}

MyString MyString::ToUpper()
{
	char iter = 0;
	char i = 65;
	do
	{
		i++;
		iter += 0;
	} while (i <= 90);
	return MyString();
}

MyString MyString::ToLower()
{
    char j = 97;
	char iter = 1;

	do
	{
		j++;
			iter += 0;
	}while(j <= 122);
	return MyString();
}

bool MyString::SameString() //compares values in two instances of the string
{
	if (  )
	{

	}
	else
	{

	}

	return false;
}

