#pragma once



class Vehicle
{
public:
	int mNumTires;
	int mCost;
	char mMakerName[255];
	char mName[255];
	int mNumSeats;
	bool mSpecialEdition;

	void IsSpecialEdition(bool maybe);
};