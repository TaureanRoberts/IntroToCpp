#include <iostream>
#include "Header.h"
Zombie::Zombie()
{
	 mHealth = 100;
	 mAttackPower = 100;
}

Zombie::Zombie(int hp, int atk)
{
	 mAttackPower = atk;
	 mHealth = hp;
}
  
int Zombie::GetHealth()
{
	return mHealth;
}

int Zombie::GetAttack()
{
	return mAttackPower;
}

void Zombie::TakeDamage(int Amount)
{
	mHealth = Amount;
}
bool Zombie::IsDead()
{
	if (mHealth <= 0)
		return true;
	else
	return false;
}