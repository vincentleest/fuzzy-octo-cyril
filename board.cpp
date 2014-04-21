#include "board.h"
#include <iostream>

Board::Board(){
	std::cout<<"board constructed\n";
}

void Board::newGame(){
		
}

void Board::printBoard(){
	board[0][0].set();
	std::cout<<board[0][0].to_string('.', '1')<<std::endl;
}
