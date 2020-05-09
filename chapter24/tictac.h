class Board
{
	public:
		void play();
	private:
		char game_board[3][3];
		char turn;
		void changeTurn();
		char getPlayer();
		char getPiece(int, int);
		void move(int, int);
		bool isPlayable();
		char checkWin();
		void makeBoard();
		void printBoard();
};
