#include "tictac.h"
#include <iostream>
#include <string>
using namespace std;

char Board::getPiece(int x, int y)
{
	return game_board[x][y];
}

char Board::getPlayer()
{
	return turn;
}

void Board::changeTurn()
{
	if (turn == 'x')
		turn = 'o';
	else
		turn = 'x';
}

void Board::move(int x, int y)
{
	if (game_board[x][y] == ' ')
	{
		game_board[x][y] = this->getPlayer();
		this->changeTurn();
	}
	else
		cout<<"cant move there\n";
}


char Board::checkWin()
{

	for(int i = 0; i < 3; i++)
	{
		int x_count = 0;
		int o_count = 0;
		for(int j = 0; j < 3; j++)
		{
			if (getPiece(i,j) == 'x')
				x_count++;
			if (getPiece(i,j) == 'o')
				o_count++;
		}
		if (x_count == 3)
			return 'x';
		if (o_count == 3)
			return 'o';
	}
	
	for(int i = 0; i < 3; i++)
	{
		int x_count = 0;
		int o_count = 0;
		for(int j = 0; j < 3; j++)
		{
			if (getPiece(j,i) == 'x')
				x_count++;
			if (getPiece(j,i) == 'o')
				o_count++;
		}
		if (x_count == 3)
			return 'x';
		if (o_count == 3)
			return 'o';
	}
	return ' ';
}




bool Board::isPlayable()
{
	if(this->checkWin() != ' ')
		return false;
	bool ret = false;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if (getPiece(i,j) == ' ')
				ret = true;
		}
	}
	return ret;
}

void Board::makeBoard()
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			game_board[i][j] = ' ';
	}
	turn = 'x';
}

void Board::printBoard()
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<this->getPiece(i,j);
			if(j != 2)
				cout<<"|";
		}
		cout<<"\n";
	}
	cout<<endl;
}

void Board::play()
{
	int move_x;
	int move_y;
	while(this->isPlayable())
	{
		this->printBoard();
		cout<<"player "<< this->getPlayer()<<"'s turn. Enter your move\n";
		cin>>move_x;
		cin>>move_y;
		this->move(move_x,move_y);
	}
	this->printBoard();
	if (this->checkWin() == 'x')
		cout << "x wins!\n";
	else if (this->checkWin() == 'o')
		cout << "o wins!\n";
	else
		cout<<"draw!\n";
		
}
