enum ChessPiece {t,tt,empty, white_pawn, black_pawn};
enum PlayerColor {white, black};

class ChessBoard
{
public:
	ChessBoard();
	PlayerColor getMove();
	ChessPiece getPiece(int, int);
	void makeMove(int, int, int, int);
private:
	ChessPiece board[8][8];
	PlayerColor whose_move;
};
