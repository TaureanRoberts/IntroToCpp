#pragma once

class Person
{
	int mAge;
	char *mName;
	float mColor[3];
public:
	Person();
	Person(char *name, int age, float *color);
	Person operator + (const Person & other);
	void DisplayInfo();
};