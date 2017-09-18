#pragma once

class Zombie
{
	int mHealth;
	int mAttack;
	
public:
	Zombie();   //Sets health and attack to 100
	Zombie(int life, int power);   // Assigns health and attack values passed in
	int GetHealth();    // Returns value of Health
	int GetAttack();    // Returns value of Attack
	void SetHealth(int life);   // Sets value of Health
	void SetAttack(int power);  // Sets value of Attack
};