#ifndef BOARD_H
#define BOARD_H
#include "constants.h"
#include <stdint.h>

class Board{
	public:
		void newGame();
		void printBoard();
		Board();
	private:
		uint64_t board[NUM_CHESS_PIECE_NAMES][NUM_PLAYER] = {};
};

#endif
