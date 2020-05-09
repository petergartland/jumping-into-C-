#include "chess.h"

ChessBoard::ChessBoard()
{
	for(int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			board[i][j] = empty;
	}
}

ChessPiece ChessBoard::getPiece(int x, int y)
{
	return board[x][y];
}
