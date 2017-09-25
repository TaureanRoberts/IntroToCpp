#pragma once

class Point2D
{
	float mX;
	float mY;
public:
	Point2D();
	Point2D(float x, float y);
	Point2D operator +(const Point2D & other);   //Adds two Point2D objects together
	Point2D operator -(const Point2D & other);   //Subtracts the values of one Point2D object from another
	Point2D operator *(const Point2D & other);   //Finds the product of two Point objects
	Point2D operator *(float other);             //Scales the value of a Point2D by the value passed in
	float GetX();                                //Returns the values of mX
	float GetY();                                //Returns the values of mY
	void PrintPoint();                           //Displays information that has been placed in the points
	bool operator == (const Point2D &other);     //Checks to see if X and Y are equivilant
};