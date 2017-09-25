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

	return 0.0f;
}

float Point2D::GetY()
{
	return 0.0f;
}

void Point2D::PrintPoint()
{
}

bool Point2D::operator==(const Point2D & other)
{
	return false;
}
