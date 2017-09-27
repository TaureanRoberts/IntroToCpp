#include <iostream>
#include "NewPoint2D.h"


int main()
{
	Point2D testOne;
	Point2D testTwo(0.0f, 1.0f);

	Point2D testThree = testOne.GetX() + testOne.GetY(testTwo);
	Point2D testFour = testThree.GetX(testTwo);

	system("pause");
}