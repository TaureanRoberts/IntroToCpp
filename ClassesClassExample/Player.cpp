#include "..\Operator Overloading\NewPlayere.h"
#include <iostream>
#include "Player.h"
#include "Point2D.h"

Player2D::Player2D()
{

}

Player2D::Player2D(char * name)
{
}

Player2D::Player(Point2D pos, char name[])
{
	
	mPos = pos;
	strcpy_s( mName, name);
	mLevel = 1;
}

void Player2D::MovePlayer(Point2D direction)
{
	int MovePlayer = (1, 1);
	
}


bool Player2D::LevelUp()
{
	int levelCap = 110;
	(levelCap > 110) ? levelCap : levelCap + 1; 
		
	return false;
}
