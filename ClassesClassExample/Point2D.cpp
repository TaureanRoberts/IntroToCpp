
#include "Point2D.h"

Point2D2D::Point2D2D()
{
	mX = 0;
	mY = 0;
}

Point2D2D::Point2D2D(float X, float Y)
{
	mX = X;
	mY = Y;
}


Point2D2D Point2D2D::Add(Point2D2D point)
{
	Point2D2D newPoint;
	newPoint.mX = mX + point.mX;
	newPoint.mY = mY + point.mY;
	return newPoint;
}