#include "Person.h"
#include <iostream>
Person::Person()
{
	mName = " ";
	mAge = 21;
    mColor[3] = 0;
}

Person::Person(char * name, int age, float * color)
{
	mName = name;
	mAge = age;
	mColor[3] = *color;
}

Person Person::operator+(const Person & other)
{
	
	Person child; 

	return child;
}



void Person::DisplayInfo()
{
	std::cout << mName << mAge << mColor << "\n";
}
