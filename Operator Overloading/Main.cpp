#include <iostream>
#include "NewPlayer.h"
#include "NewPoint2D.h"



int main()
{

	Player *testOne = new Player();
	testOne->SetPosition(Point2D(4, 3));
	system("pause");
}