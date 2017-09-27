#pragma once
#include <iostream>
#include "NewPoint2D.h"

class Player
{
	Point2D *mPosition;
	int mHealth;
	char *mName;

public:
	Player();
	Player(char *name);
	void Move(char direction);
	void SetPosition(Point2D mPos);
};