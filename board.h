#ifndef BOARD_H
#define BOARD_H
#include "constants.h"
#include <stdint.h>
#include <bitset>

/*
 * The Board class is a bitboard representation of the 
 * chess board. With the MSB representing a8 square and
 * the LSB representing the h1 square
*/

class Board{
	public:
		void newGame();
		void printBoard();
		Board();
	private:
		std::bitset<64> board[NUM_PLAYER][NUM_CHESS_PIECE_NAMES]; //default to 0
};

/* 
Some bit masks
*/
#define A8 0x8000000000000000LL
#define B8 0x4000000000000000LL
#define C8



#endif
