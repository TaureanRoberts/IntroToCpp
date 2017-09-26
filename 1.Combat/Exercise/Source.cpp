#include <iostream>
#include <string>
#include "Entity.h"
#include "Soldier.h"
#include "Robot.h"
#include "Nord.h"
#include "Scorpion.h"
#include "Assassin.h"
#include "Witcher.h"
#include "Spartan.h"


int main()
{

	Entity* shephard = new Soldier();
	Entity* zero = new Robot();
	Entity* geralt = new Witcher();
	Entity* masterChief = new Spartan();
	Entity* drgnBorn = new Nord();
	Entity* creedEzio = new Assassin();
	Entity* scorpio = new Ninja();

	int numParticipants;
	Entity** participants = new Entity*[numParticipants];
	participants[0] = shephard; //Shepard - Mass Effect
	participants[1] = zero; //Zero - Megaman
	participants[2] = masterChief; //Master Chief - Halo
	participants[3] = geralt; //Geralt - Witcher
	participants[4] = drgnBorn; //DragonBorn - Skyrim
	participants[5] = scorpio; //Scorpion - Mortal Kombat
	participants[6] = creedEzio; //Ezio - Assassins Creed 

	
	while (numParticipants < 1);
	{
		if (numParticipants <= 2);
		
		else
			();

	}

	
		std::cout << " Fight Night Round ::  \n";
	

	

	
	system("pause");
	return 0;
}