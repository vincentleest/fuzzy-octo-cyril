#include "board.h"
#include <iostream>

Board::Board(){
	std::cout<<"board constructed\n";
}

void Board::newGame(){
    //std::for_each(std::begin(board), std::end(board),[](std::bitset<64>& b) { b.unset(); });
	board[WHITE][QUEEN_ROOK][0].set();	
	board[WHITE][QUEEN_KNIGHT][1].set();	
	board[WHITE][QUEEN_BISHOP][2].set();	
	board[WHITE][QUEEN][3].set();	
	board[WHITE][KING][4].set();	
	board[WHITE][KING_BISHOP][5].set();	
	board[WHITE][KING_KNIGHT][6].set();	
	board[WHITE][KING_ROOK][7].set();	

	board[WHITE][QUEEN_ROOK_PAWN][8].set();	
	board[WHITE][QUEEN_KNIGHT_PAWN][9].set();	
	board[WHITE][QUEEN_BISHOP_PAWN][10].set();	
	board[WHITE][QUEEN_PAWN][11].set();	
	board[WHITE][KING_PAWN][12].set();	
	board[WHITE][KING_BISHOP_PAWN][13].set();	
	board[WHITE][KING_KNIGHT_PAWN][14].set();	
	board[WHITE][KING_ROOK_PAWN][15].set();	
	
	board[BLACK][QUEEN_ROOK_PAWN][48].set();	
	board[BLACK][QUEEN_KNIGHT_PAWN][49].set();	
	board[BLACK][QUEEN_BISHOP_PAWN][50].set();	
	board[BLACK][QUEEN_PAWN][51].set();	
	board[BLACK][KING_PAWN][52].set();	
	board[BLACK][KING_BISHOP_PAWN][53].set();	
	board[BLACK][KING_KNIGHT_PAWN][54].set();	

	board[BLACK][KING_ROOK_PAWN][55].set();	
	board[BLACK][QUEEN_ROOK][56].set();	
	board[BLACK][QUEEN_KNIGHT][57].set();	
	board[BLACK][QUEEN_BISHOP][58].set();	
	board[BLACK][QUEEN][59].set();	
	board[BLACK][KING][60].set();	
	board[BLACK][KING_BISHOP][61].set();	
	board[BLACK][KING_KNIGHT][62].set();	
	board[BLACK][KING_ROOK][63].set();	


}

void Board::printBoard(){
	
	std::cout<<board[0][0].to_string('.', '1')<<std::endl;
}
