#pragma once

class MyString
{
private:
	const char *mString;
public:
	/*
	MyString();
	MyString(int length);
	int mLenght();
    void GetIndex();
	MyString UpperString(MyString rhs);
	MyString LowerString(MyString lhs);
	*/

	MyString();
	MyString(char *string);  
    void GetLength();      //Returns the numbers of characters stored in the string
	MyString ToUpper();    //Gives the string some uppercase letters
	MyString ToLower();    //Gives the string some lowercase letters
	bool SameString();     //Compares the strings together
	
};