#include <iostream>
#include <string>

using namespace std;

void print_board(char array[][3])
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			cout<<array[i][j];
			if(j<2)
				cout<<"|";
		}
		cout<<endl;
	}
}

int not_playable(char board[][3])
{
	for (int i = 0; i < 3; i++)
	{
		int o=0;
		int x=0;
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == 'o')
				o++;
			else if (board[i][j] == 'x')
				x++;
			else
				return 0;
		}
		if (o==3)
			return 1;
		if (x==3)
			return 2;
	}
	return 3;
}

bool valid(int row, int column, char board[][3])
{
	
	if (board[row][column]==' ' && (0 <= row < 3) && (0 <= column < 3))
		return true;
	return false;
}

void board_insert(int row, int column, char board[][3], char move)
{
	if (valid(row, column, board))
		board[row][column] = move;
}

void make_board(char array[][3])
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			array[i][j] = ' ';
		}
	}
}

int main()
{
	char board[3][3];
	make_board(board);
	print_board(board);
	bool turn = false;
	int row, column;
	while(!not_playable(board))
	{
		if (turn == false)
		{
			do
			{
				cout<<"o's turn. enter your move\n";
				cin>>row;
				cin>>column;
				if (!valid(row, column, board))
					cout<<"Invalid move.\n";
			} while (!valid(row, column, board));
			board_insert(row,column,board,'o');
		}
		if (turn == true)
		{
			do
			{
				cout<<"x's turn. enter your move\n";
				cin>>row;
				cin>>column;
				if (!valid(row, column, board))
					cout<<"Invalid move.\n";
			} while (!valid(row, column, board));
			board_insert(row,column,board,'x');
		}
		turn = !turn;

		print_board(board);
	}
	if (not_playable(board) == 1)
		cout<<"o wins!\n";
	else if (not_playable(board) == 2)
		cout<<"x wins!\n";
	else
		cout<<"draw\n";
}
