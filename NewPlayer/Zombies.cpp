#include <iostream>
#include "Header.h"

Zombie::Zombie()
{
	 mHealth = rand()%100;
	 mAttack = rand()%100;
}

Zombie::Zombie(int life, int power)
{
	mHealth = life;
	mAttack = power;
}

int Zombie::GetHealth()
{
	return mHealth;
}

int Zombie::GetAttack()
{
	return mAttack;
}

void Zombie::SetHealth(int life)
{
	int mHealth = life ;
}

void Zombie::SetAttack(int power)
{
	int mAttack = power;
}