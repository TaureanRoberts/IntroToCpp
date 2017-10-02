#include <iostream>
#include "Player.h"
#include "NewPoint2D.h"
#include "Dungeon.h"



int main()
{
	Player *testOne = new Player();
	testOne->SetPosition(Point2D(4, 3));
	system("pause");
}