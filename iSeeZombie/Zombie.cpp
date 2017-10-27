#include <iostream>
#include "Header.h"
#include "time.h"
int main()
{ 
    srand(time(NULL));
	Zombie zombieParty[5];
	
	
	int zomDead = 0;
	while (zomDead < 5)
	{
		zomDead = 0;
		Zombie defendZom = zombieParty[rand() % 5];
		Zombie attackZom = zombieParty[rand() % 5];
		defendZom.TakeDamage(defendZom.GetHealth() - attackZom.GetAttack());
	}

		system("pause");
}