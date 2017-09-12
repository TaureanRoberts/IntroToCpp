#include <iostream>
#include "Vehicle.h"

//void IsSpecialEdition(Vehicle vehicle)
//{
//	std::cout << "Number of Tires:       " << vehicle.mNumTires << std::endl;
//	std::cout << "Cost of Vehicle:       " << vehicle.mCost << std::endl;
//	std::cout << "Name of maker:         " << vehicle.mMakerName << std::endl;
//	std::cout << "Model Name:            " << vehicle.mName << std::endl;
//	std::cout << "Number of seatings:    " << vehicle.mNumSeats << std::endl;
//	std::cout << "Special Edition:       " << vehicle.mSpecialEdition << std::endl;
//}
//
//int main()
//{
//	Vehicle legendaryMotorsport[10];
//	legendaryMotorsport[0] = {4, 715000, "Coil", "Brawler", 2, true };
//	legendaryMotorsport[1] = {4, 475000, "DewBauchee", "JB 700", 2, false};
//	legendaryMotorsport[2] = {2, 40000, "Nagasaki", "Carbon RS", 2, true};
//	legendaryMotorsport[3] = {2, 2225000, "Nagasaki", "Shotaro", 1, true};
//	legendaryMotorsport[4] = {4, 400000, "Hijak", "Ruston", 2, true};
//	legendaryMotorsport[5] = {4, 440000, "Pegassi", "Infernus", 2, false};
//	legendaryMotorsport[6] = {4, 725000, "Pegassi", "Zentorno", 2, false};
//	legendaryMotorsport[7] = {2, 9000, "Dinka", "Akuma", 2, false};
//	legendaryMotorsport[8] = {4, 2700000, "Grotti", "X80 Proto", 2, true};
//	legendaryMotorsport[9] = {3, 648000, "BF", "Raptor", 2, true};
//	
//    char userInput[255];
//		std::cout << "Enter a vehicle maker." << std::endl;
//		std::cin >> userInput;
//		bool carFound = false;
//		for (int i = 0; i < 15; i++)
//		{
//			if (strcmp(userInput, legendaryMotorsport[i].mMakerName) == 0)
//			{
//				(legendaryMotorsport[i]);
//				std::cout << std::endl;
//					carFound = true;
//			}
//		}
//		if (carFound == false)
//			std::cout << "No results found for: " << std::endl;
//	system("pause");
//}

void Vehicle::IsSpecialEdition(bool maybe)
{
	mSpecialEdition = maybe;
}

