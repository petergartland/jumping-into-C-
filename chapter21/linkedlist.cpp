#include <iostream>
#include "linkedlist.h"

using namespace std;

node* addNode(node* p_list, int value)
{
	node *p_new_node = new node;
	p_new_node->p_next = p_list;
	p_new_node->value = value;
	return p_new_node;
};

void printList(const node *p_list)
{
	while(p_list!=NULL)
	{
		cout<<p_list->value<<endl;
		p_list=p_list->p_next;
	}
}
