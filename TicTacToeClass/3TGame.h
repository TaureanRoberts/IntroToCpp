#pragma once

class TicTacToeGame
{
    int myColumns();
    int rowYourBoat();
    bool PlayerSpot(int x, int y, char currentPlayer);
    bool chickenDinner(char currentPlayer);
    void cleanSlate();
    void playingField();
    char gameSetup[3][3];
public:
    TicTacToeGame();
    void playGame();
};