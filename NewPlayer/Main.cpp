#include <iostream>
#include "Header.h"
#include <time.h>

int main()
{
 	srand(time(NULL));
	/*
	Zombie patientZero;
	Zombie babyZombie(100, 90);
	while (babyZombie.GetHealth() > 0 && patientZero.GetHealth() > 0)
	{
		babyZombie.SetHealth(babyZombie.GetHealth() - patientZero.GetAttack());
		patientZero.SetHealth(patientZero.GetHealth() - babyZombie.GetAttack());
	}
	*/
	Zombie zombies[5];
	Zombie zombo();

	int zombiesLeft = 0;
	for (int i = 0; i < 5; i++)
	{
		if (zombies[i].GetHealth() == 0)
			zombiesLeft++;
	}
	zombiesLeft = 5;

	while (zombiesLeft > 0)
	{
		zombies[rand()%5].SetHealth(zombies[rand() % 5].GetHealth() - zombies[rand() % 5].GetAttack());
	}
	
	//Fighting Mode


	system("pause");
}