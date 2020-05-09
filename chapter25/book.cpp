#include <iostream>
#include <string>
#include "chess.h"
#include "linkedlist.h"

using namespace std;

int main()
{
	ChessBoard board;
	cout<<board.getPiece(0,0)<<endl;
	int test(5);
	cout<<test<<endl;
	LinkedList lst;
	lst.insert(5);
	lst.insert(88);
	LinkedListNode *p_itr = lst.p_head;
	while (p_itr != NULL)
	{
		cout<<p_itr->val<<endl;
		p_itr = p_itr->p_next;
	}
	
	LinkedList x=lst;
	//x = lst;
	//x=x;
	//x.insert(9);
	LinkedListNode *p_itrr = x.p_head;
	while (p_itrr != NULL)
	{
		cout<<p_itrr->val<<endl;
		p_itrr = p_itrr->p_next;
	}
}
