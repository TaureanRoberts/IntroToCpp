#include <iostream>
#include "NewPoint2D.h"

Point2D::Point2D()
{
	mX = 0;
	mY = 0;
}

Point2D::Point2D(float x, float y)
{
	mX = x;
	mY = y;
}

Point2D Point2D::operator+(const Point2D & other)
{
	Point2D newPoint;
	newPoint.mX = mX + other.mX;
	newPoint.mY = mY + other.mY;
	return newPoint;
}

Point2D Point2D::operator-(const Point2D & other)
{
	Point2D subPoint;
	subPoint.mX = mX - other.mX;
	subPoint.mY = mY - other.mY;
	return Point2D();
}

Point2D Point2D::operator*(const Point2D & other)
{
	Point2D multiPoint;
	multiPoint.mX = mX * other.mX;
	multiPoint.mY = mY * other.mY;
	return Point2D();
}

Point2D Point2D::operator*(float other)
{
	Point2D pointScale;
	pointScale.mX * (mX, mY);
	pointScale.mY * (mX, mY);
	return Point2D();
}

float Point2D::GetX()
{
	int GetX = (0,0);
	return 0;
}

float Point2D::GetY()
{ 
    int GetY= (0, 0);
	return 0;
}

void Point2D::PrintPoint()
{
	float playSpot;
	mX = (0,0);
	mY = (0,0);
}

bool Point2D::operator==(const Point2D & other)
{
	return (mX == mX && mY == mY)? true : false;
}


int main()
{
	Point2D testOne;
	Point2D testTwo(0.0f, 1.0f);

	Point2D testThree = testOne.GetX() + testOne.GetY(testTwo);
	Point2D testFour = testThree.GetX(testTwo);

	system("pause");
}