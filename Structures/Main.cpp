#include <iostream>
#include <time.h>

//Assignment:
//Modify your answer to the vehicle problem to allow the user to search for vehicles
//by year, name, and maker. 

/*
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
*/
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

struct Player2D
{
	char mName[255];
	int mScore;
};

Player2D CreatePlayer()
{
	Player2D newPlayer = {};
	std::cout << "Choose a name for your character: " << std::endl;
	std::cin >> newPlayer.mName;
	std::cout << "Enter the players score: " << std::endl;
	std::cin >> newPlayer.mScore;

	return newPlayer;
}

struct Vehicle
{
	int mNumTires;
	int mNumSeats;
	char mMakerName[255];
	char mModelName[255];
	int mModelYear;
};

//Create a function that prints vehicle information
void CarInfo(Vehicle vehicle)
{
	std::cout << "Maker           :" << vehicle.mMakerName << std::endl;
	std::cout << "Model Name      :" << vehicle.mModelName << std::endl;
	std::cout << "Model Year      :" << vehicle.mModelYear << std::endl;
	std::cout << "Number of Seats :" << vehicle.mNumSeats << std::endl;
	std::cout << "Number of Tires :" << vehicle.mNumTires << std::endl;
}
/*
struct Item
{
	char mName[255];
	int mCost;
	int mQuantity;
};

struct Shop
{
	int mTotalGold;
	Item mItems[5];
};

void PrintShopInventory(Shop shopData)
{
		std::cout <<  "Current Shop funds: " << shopData.mTotalGold << std::endl;
	for (int i = 0; i < 5; i++)
	{
		//Print iteme information: Name, Cost, Quantity

		std::cout << "Item Name      : " << shopData.mItems[i].mName << std::endl;
		std::cout << "Cost of Item   : " << shopData.mItems[i].mCost << std::endl;
		std::cout << "Items in Stock : " << shopData.mItems[i].mQuantity << std::endl;

		system("cls");
	}
}
*/
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
    /*
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
	std::cout << " Oldest Student is:" << classRoom[oldestStudent].mName << ", their name is " << classRoom[oldestStudent].mID << ", " << std::endl;
	*/
	/*
	//Player test = CreatePlayer();

	Player players[5];

	for (int i = 0; i < 5; i++)
	{
		players[i] = CreatePlayer();
		system("cls");
	}
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "New player name: " << players[i].mName << " New player score: " << players[i].mScore << std::endl;
	}
	*/
	
		Vehicle ebayAutomotive[15];
		ebayAutomotive[0] = { 2, 4, "Porshe", "911", 2016 };
		ebayAutomotive[1] = { 2, 4, "McLaren", "720s", 2018 };
		ebayAutomotive[2] = { 4, 4, "Honda", "Civic", 2017 };
		ebayAutomotive[3] = { 4,4,"Nissan", "Sentra", 2012 };
		ebayAutomotive[4] = { 2,4, "Ford", "Mustang", 1965 };
		ebayAutomotive[5] = { 2, 4, "Audi", "S8", 2017 };
		ebayAutomotive[6] = { 2, 2, "Ford", "GT", 2017 };
		ebayAutomotive[7] = { 2,4,"Toyota", "Supra", 1998 };
		ebayAutomotive[8] = { 4,4,"Ford", "Fiesta", 2005 };
		ebayAutomotive[9] = { 2, 1, "YuGiOh", "Duel Runner", 2025 };
		ebayAutomotive[10] = { 2, 3, "UNSC", "Warthog", 2500 };
		ebayAutomotive[11] = { 2, 1, "Moongoose", "Legion L40", 2017 };
		ebayAutomotive[12] = { 2, 2, "Ferrari", "La Farrari", 2015 };
		ebayAutomotive[13] = { 2, 2, "TVR", "Sergis", 2013 };
		ebayAutomotive[14] = { 1, 0, "US Army", "M1 Abrams", 2018 };


	//Prompt the user to imput a maker name. Then the application should display
	//all vehicles with that maker.

		char userInput[255];
		std::cout << "Enter a vehicle maker." << std::endl;
		std::cin >> userInput;
		bool carFound = false;
		for (int i = 0; i < 15; i++)
		{
			if (strcmp(userInput, ebayAutomotive[i].mMakerName) == 0)
			{
				CarInfo(ebayAutomotive[i]);
				std::cout << std::endl;
				carFound = true;

				/*
				Shop blacksmith = { 2000 };
				blacksmith.mItems[0] = { "Stick", 1, 1 };
				blacksmith.mItems[1] = { "Wand", 5, 1  };
				blacksmith.mItems[2] = { "Knife", 15, 1 };
				blacksmith.mItems[3] = { "Sword",25 ,1  };
				blacksmith.mItems[4] = { "Excalibur", 1500, 1 };

				PrintShopInventory(blacksmith);

				blacksmith.mItems[0].mCost = 6;
				std::cout << "Changing Prices" << std::endl;
				system("pause");
				PrintShopInventory(blacksmith);
				*/
				system("pause");
			}
			/*
			//Create a Function with a return type of Player that takes in 0 arguments.
			Player CreatPlayer()
			{
				Player newPlayer = {};
				return newPlayer;
			}


			Player CreatePlayer(int health, int strength, float movementSpeed)
			{
				Player newPlayer = {};
				return newPlayer;
			}
			*/
		}