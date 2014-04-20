#ifndef BOARD_H
#define BOARD_H
#include "constants.h"

const int BOARD_SIZE = 8;

class Board(){
	private:
		int board[BOARD_SIZE][BOARD_SIZE][NUM_PLAYER];
	public:
		void printBoard();
}

#endif
