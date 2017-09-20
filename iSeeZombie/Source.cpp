#include <iostream>
#include "Header.h"
​
Zombie::Zombie()
{
	 mHealth = rand()%1000 ;
	 mAttackPower = rand()%1000;
}​

Zombie::Zombie(int hp, int atk)
{
	 mAttackPower = atk;
	 mHealth = hp;
}
  

​
int Zombie::GetHealth()
{
	int GetHealth = mHealth;
	return 0;
}
​
int Zombie::GetAttack()
{
	int GetHealth = mAttackPower;
	return 0;
}
​
void Zombie::TakeDamage(int Amount)
{
	int Amount(mHealth - mAttackPower);
}
​
bool Zombie::IsDead()
{
	
	return false;
}