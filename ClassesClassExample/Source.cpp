#include <iostream>
#include "Player.h"
#include "Vehicle.h"

int main()
{

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
	system("pause");
}