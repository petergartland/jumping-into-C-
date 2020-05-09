#include "chess.h"

ChessPiece ChessBoard::getPiece(int x, int y)
{
	return board[x][y];
}
	
PlayerColor ChessBoard::getMove()
{
	return whose_move;
}
	
void ChessBoard::makeMove (int from_x, int from_y, int to_x, int to_y)
{
	board[to_x][to_y] = board[from_x][from_y];
	board[from_x][from_y] = empty;
}
