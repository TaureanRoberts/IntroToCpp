#include <iostream>
#include <math.h>
#include "Cat.h"

using namespace std;

void evenHund()
{
	{
		const int start = 0;
		const int finish = 99;

		int number = start;
		if (number % 2) number++;

		while (number <= 100)
		{
			std::cout << number << ' ' << endl;
			number += 2;
		}
	}

}

void ReverChar()
{
	
}

void AddVect2()
{
	int myVect2[2];
	int tempV2;
	
	
}

void magVect3(int mX , int mY, int mZ)
{
	int vect3[3];
	int x = mX;
	int y = mY;
	int z = mZ;
	vect3[3] = sqrt((x*mX) + (y*mY) + (z*mZ));
}

void subMat2()
{

}

void DirtyCats()
{
	//uppercase
	char i = 65;
	//lowercase
	char j = 98;
	char itter = 0;
	Cat kitten[26];
	do
	{
		kitten[itter].NameMe(i); 
		itter += 2;
		i += 2;
	
	} while (i <= 90);

	itter = 1;
	do
	{
		kitten[itter].NameMe(j);
		j += 2;
		itter += 2;
	} while (j <= 122);
}

int main()
{
	evenHund();
	DirtyCats();
	system("pause");
}