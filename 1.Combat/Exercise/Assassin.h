#pragma once
#include"Entity.h"
#include <iostream>
#include <string>

class Assassin : public Entity
{
public:
	Assassin();
	~Assassin();
	//To attack the other will lose health based on this classes damage
	virtual void Attack(Entity& other) override;
	//To defend we will mitigate damage taken away using the mArmor variable
	virtual void Defend(int damage) override;
};

Assassin::Assassin()
{
	mName = "Ezio";
	mHealth = 1000;
	mArmor = 50;
	mSpeed = 30;
	mDamage = 10000;
}

Assassin::~Assassin()
{
}

void Assassin::Attack(Entity & other)
{
	Entity::Attack(other);
}

void Assassin::Defend(int damage)
{
	Entity::Defend(damage);
}