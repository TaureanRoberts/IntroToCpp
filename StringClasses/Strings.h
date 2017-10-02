#pragma once

class MyString
{
private:
	const char *mString;
public:
	MyString();
	MyString(int length, int height);
	int mLenght();
	void GetIndex();
	MyString UpperString(MyString rhs);
	MyString LowerString(MyString lhs);
	

};