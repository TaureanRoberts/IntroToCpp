#include <iostream>
#include "Player.h"
#include "Vehicle.h"
#include "Point2D.h"

int main()
{
/*
	Player tj;
	tj.mHealth = 100;
	tj.mGender = true;
	tj.mLevel = 96;
	tj.mResource = 50;

	tj.TakeDamage(10);
	tj.ModifyLevel(-10);

	Vehicle tjCar;
	tjCar.mNumTires = 4;
	tjCar.mCost = 20;
	tjCar.mMakerName[255];  "Nissan";
	tjCar.mName[255]; "Sentra";
	tjCar.mNumSeats = 4; 
	tjCar.mSpecialEdition = false;
	tjCar.IsSpecialEdition(false);
	*/
	
	Point2D2D testOne;
	Point2D2D testTwo(20, 2);

	Point2D2D testThree = testOne.Add(testTwo);
	Point2D2D testFour = testThree.Add(testTwo);
	
	Player2D playerOne;
	Player2D playerTwo(testTwo, "Dylan");
	Player2D playerThree(Point2D2D(1,5), "Bob" );

	bool test = playerOne.LevelUp();

	system("pause");
}