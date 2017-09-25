#pragma once

class PlayMe
{
	char PlaySpace[3][3];                      //Creates Playing field
public:
	void ShowGrid();                       //Displays Grid
	void MovePlayer(char player);                     //Allows movement for player
	void TogglePlayer(char player);        //Sets player pieces
	bool MoveRules();                      //Checks if a player moved where allowed 
	bool ChickenDinner();                  //Winning condition PUBG reference
	bool DidWeTie();                       //Causes game to go again if they tied
};