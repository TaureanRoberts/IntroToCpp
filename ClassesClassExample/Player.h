#pragma once
#include "Point2D.h"


/*
class Player
{
public:
	int mHealth;
	char mName[255];
	int mResource;
	int mLevel;
	bool mGender;

	void TakeDamage(int amount);
	void ModifyLevel(int value);
};
*/

class Player
{
private:
	Point2D2D mPos;
	char mName[255]; 
	int mLevel;

public:
	Player();
	Player(Point2D2D pos, char name[]);
	void MovePlayer(Point2D2D direction);
	bool LevelUp();
	
};