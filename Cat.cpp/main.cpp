#include <iostream>
#include "Cat.h"

int main()
{
	//Capital Letters
    char i = 65;
	//Lower Case
	char j = 98;
	char iter = 0;
	Cat meow[26];


	do //Upper
	{	
		meow[iter].NameMe(i);
		i += 2;
		iter += 2;
	} while (i <= 90);

	iter = 1;
	do //Lower
	{
		meow[iter].NameMe(j);
		j += 2;
		iter += 2;
	} while (j <= 122);

	system("pause");
}