#include <iostream>
#include "GridLayout.h"

int main()
{
#include <iostream>
#include <limits>
#include "board.h"
#include "Player.h"

	int gamePlay();
	void pause();

	int main() {

		std::cout << "Welcome to Tic Tac Toe!\n\n";
		gamePlay();
		std::cout << "\n";
		pause();
	}

	int gamePlay() {
		board game1;
		Player p1, p2;
		bool markpass = false; //checks wether players have selected their pieces
		bool gamewin = false; //sets condition for game
		int turncnt = 0; //counts number of turns

		game1.drawboard(); //draws initial board with numbered spaces
		while (!gamewin) {
			if (!markpass) {
				std::cout << "\nWhat team do you want: X or O?\nPLayer 1: ";
				p1.setmark(markpass, p2); //sets piece for player 1 and 2
				std::cout << "Player 2: " << p2.mark() << "\n\n";
			}

			//turn for player 1
			if (!(turncnt % 2)) {
				std::cout << "Player 1 trun:\nSQUARE: ";
				p1.turn(game1);
				game1.checkwin(gamewin, turncnt);
			}
			//turn for player 2
			else {
				std::cout << "Player 2 trun:\nSQUARE: ";
				p2.turn(game1);
				game1.checkwin(gamewin, turncnt);
			}

			game1.drawboard(); // update gameboard
			std::cout << "\n";
			turncnt++; // increment turn count
		}


		std::cout << "GAME OVER!!!!!!!\n\n";
		//check cats game if none, conditional is used to determine who won
		if (!(game1.checkwin(gamewin, turncnt) == 'C')) {
			std::cout << "WINNER: Player "
				<< ((game1.checkwin(gamewin, turncnt) == p1.mark()) ? "1" : "2");
		}
		else {
			std::cout << "Cats game!";
		}
		game1.clearboard();//resest board
		return 0;
	}

	//used to pause and see results
	void pause() {
		char quit;
		std::cout << "Press any key followed by enter to quit";
		std::cin >> quit;
	}
}