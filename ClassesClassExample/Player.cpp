#include <iostream>
#include "Player.h"
#include "Point2D.h"

Player::Player()
{

}

Player::Player(Point2D pos, char name[])
{
	
	mPos = pos;
	strcpy_s( mName, name);
	mLevel = 1;
}

void Player::MovePlayer(Point2D direction)
{
	int MovePlayer = (1, 1);
	
}


bool Player::LevelUp()
{
	int levelCap = 110;
	(levelCap > 110) ? levelCap : levelCap + 1; 
		
	return false;
}
