#include <iostream>
#include <time.h>

struct Player
{
	int mHealth;
	int mResource;
	int mStrenght;
	int mLevel;
	float mMovementSpeed;
	int mArmor;
};

Player CreatePlayer();//When overloading a prototype you have to have a body. 
Player CreatePlayer(int health, int strength, float movementSpeed);

struct Enemy
{
	float mHealth;
	int mAttackPower;
};

struct Student
{
	char mName[255];
	char mID[255];
	int mAge;
};

int main()
{
	/*
	srand (time(NULL));
	Player matthew = {};
	Player steven = CreatePlayer();
	Player tj = CreatePlayer(100, 9001, 420);
	steven = tj; //To give the player the same stats as another player.

	Enemy someBody = { 9.11f, 2004 };
	Enemy onceToldMe = { 24.7f, 5 };

	while (someBody.mHealth > 0 && onceToldMe.mHealth > 0)
	{
		someBody.mHealth -= onceToldMe.mAttackPower;
		onceToldMe.mHealth -= someBody.mAttackPower;
	}

	Enemy fightClub[7];
	fightClub[0] = { 911, 69 };       //TJ
	fightClub[1] = { 0.1f, 500 };     //Matthew
	fightClub[2] = { 42.5f, 86 };     //Luke
	fightClub[3] = { 4500.5f, 1 };    //Steven
	fightClub[4] = { 400, 400 };       //Zach
	fightClub[5] = { 9000, 500 };       //Ralenski
	fightClub[6] = { 2, 30 };           //Brett

	bool isVictor = false;
	int remainingFighters = 0;
	for (int i = 0; i < 7; i++)
	{
		if (fightClub[i].mHealth > 0)
			remainingFighters++;
	}

	isVictor = (remainingFighters > 1) ? false : true;
	remainingFighters = 0;

	//fight

	while (isVictor)
	{
		int fighterOne = rand() % 7;
		int fighterTwo = rand() % 7;
		fightClub[fighterOne].mHealth -= fightClub[fighterTwo].mAttackPower;
		
		int remainingFighters = 0;
		for (int i = 0; i < 7; i++)
		{
			if (fightClub[i].mHealth > 0)
				remainingFighters++;
		}
		isVictor(remainingfighers)
	}
		*/

	Student classRoom[7];
	classRoom[0] = { "Zach", "s171", 18 };
	classRoom[1] = { "Luke", "s172", 18 };
	classRoom[2] = { "Matthew", "s173", 18};
	classRoom[3] = { "TJ", "s174", 21 };
	classRoom[4] = { "Steven", "s175", 19 };
	classRoom[5] = { "Ralenski", "s176", 20};
	classRoom[6] = { "Brett", "s177", 18 };

	int oldestStudent; 
	int oldestAge = classRoom[7].mAge;
	for (int i = 0; i < 7; i++)
	{
		if (classRoom[i].mAge > oldestAge)
		{
			oldestAge = classRoom[i].mAge;
			oldestStudent = i;
		}
	}
	std::cout << " Oldest Student is:" << std::endl;
	std::cout << classRoom[oldestStudent].mName;

	system("pause");
}

//Create a Function with a return type of Player that takes in 0 arguments.
Player CreatPlayer()
{
	Player newPlayer = {};
	return newPlayer;
}

Player CreatePlayer()
{
	Player newPlayer = {};
	return newPlayer;
}

Player CreatePlayer(int health, int strength, float movementSpeed)
{
	Player newPlayer = {};
	return newPlayer;
}