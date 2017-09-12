#pragma once

class Point2D
{
	float mX;
	float mY;

public:
	Point2D();
	Point2D(float X, float Y);
	Point2D Add(Point2D);
};
