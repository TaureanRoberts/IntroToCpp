#pragma once

class Player2D
{
	char *mName;
	Point2D mPosition;
	int mHealth;
public:
	Player2D();
	Player2D(char *name);
	void Move(char direction);
	void SetPosition(Point2D newPos);
};