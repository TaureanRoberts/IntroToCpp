#pragma once
#include"Entity.h"
#include <iostream>
#include <string>

class Ninja : public Entity
{
public:
	Ninja();
	~Ninja();
	// to attack other will lose health based on damage.
	//to defend mitigate damage taken using mArmor varaition.
	void Attack(Entity& other)override;
	void Defend(int damage)override;

};

Ninja::Ninja()
{
	mName = "Scorpion";
	mHealth = 10000000;
	mDamage = 200000;
	mArmor = 20000;
	mSpeed = 500;
}

Ninja::~Ninja()
{
}

void Ninja::Attack(Entity & other)
{
	Entity::Attack(other);
}
void Ninja::Defend(int damage)
{
	Entity::Defend(damage);
}