
#include <iostream>
#include "Header.h"

Zombie::Zombie()
{
	 mHealth = (100) ;
	 mAttackPower = (100);
}

Zombie::Zombie(int hp, int atk)
{
	int GetAttack = atk;
	int GetHealth = hp;
}

int Zombie::GetHealth()
{
	int GetHealth = mHealth;
	return 0;
}

int Zombie::GetAttack()
{
	int GetHealth = mAttackPower;
	return 0;
}

void Zombie::TakeDamage(int Amount)
{
	int Amount(mHealth - mAttackPower);
}

bool Zombie::IsDead()
{
	
	return false;
}
