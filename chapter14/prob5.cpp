#include <iostream>
#include <string>

using namespace std;

char** get_board(int n, int m)
{
	char** game_board = new char*[n];
	for (int i = 0; i<n; i++)
	{
		game_board[i] = new char[m];
		for (int j = 0; j < m; j++)
			game_board[i][j] = '-';
		
	}
	return game_board;
}


void print_board(char** board, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << board[i][j] << " ";
		cout<<endl;
	}
}

bool insert_board(char** board, char token, int i, int n)
{
	int j = 0;
	while (j < n && board[j][i] == '-')
	{
		j++;
	}
	if (j == 0)
	{
		cout << "this column is full\n";
		return false;
	}	
	else
	{
		board[j-1][i] = token;
	}
	return true;
}

int playable(char** board, int n, int m)
{
	int p1 = 0;
	int p2 = 0;
	int full = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == '+')
			{
				p1++;
				p2=0;
				if (p1 == 4)
					return 1;
			}
			else if (board[i][j] == '*')
			{
				p2++;
				p1=0;
				if (p2 == 4)
					return 2;
			}
			else
				full++;
		}
		if (full == 0 && i == 0)
			return 3;
	}
	return 0;
}

int main()
{
	cout<<"enter the size of the board you want to play on\n";
	int n;
	int m;
	cin >> n;
	cin >> m;
	char** game_board = get_board(n,m);
	int column = 1;
	bool turn = true;
	bool valid = true;
	int can_play = 0;
	while (!can_play && column != -1)
	{
		print_board(game_board, n, m);
		if (turn)
			cout<< "player + turn.";
		else
			cout<< "player * turn.";
		cout<<"pick your column (enter -1 to exit)\n";
		cin>>column;
		if (turn)
			valid = insert_board(game_board, '+', column, 10);
		else
			valid = insert_board(game_board, '*', column, 10);
		if(valid)
			turn = !turn;
		can_play = playable(game_board, n, m);
		if (can_play == 1)
			cout<<"player1 wins!\n";
		else if (can_play == 2)
			cout<<"player2 wins!\n";
		else if (can_play == 3)
			cout<<"draw\n";
	}
}
