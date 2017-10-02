#include <iostream>
#include "Dungeon.h"
#include "NewPoint2D.h"
#include "Player.h"

Dungeon::Dungeon()
{
    mRooms = new Point2D();
	mPlayer = new Player();
	mNumCols = 6;
	mNumRows = 6;
	GenRooms();
}

Dungeon::Dungeon(Player *player, int rows, int cols)
{

	mRooms = new Point2D(rows, cols);
}

bool Dungeon::Checkplayer()
{

	return false;
}

void Dungeon::PrintRooms()
{
	Dungeon showRoom;
	std::cout << showRoom.mNumCols << std::endl;
	std::cout << showRoom.mNumRows << std::endl;
}
