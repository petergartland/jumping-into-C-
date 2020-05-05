#ifndef CHESS_H
#define CHESS_H

enum ChessPiece {empty, white_pawn, black_pawn};
enum PlayerColor {black, white};

struct ChessBoard
{
	ChessPiece board[8][8];
	PlayerColor whose_move;
	ChessPiece getPiece(int x, int y);
	PlayerColor getMove();
	void makeMove (int from_x, int from_y, int to_x, int to_y);
};


#endif
