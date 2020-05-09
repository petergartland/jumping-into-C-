#include "linkedlist.h"
#include <string>

LinkedList::LinkedList()
{
	p_head = NULL;
	
}

void LinkedList::insert(int value)
{
	LinkedListNode* newnode = new LinkedListNode;
	newnode->val = value;
	newnode->p_next = p_head;
	p_head = newnode;
}

LinkedList::~LinkedList()
{
	LinkedListNode *p_itr = p_head;
	while(p_itr!=NULL)
	{
		LinkedListNode* p_temp = p_itr->p_next;
		delete p_itr;
		p_itr = p_temp;
	}
}

LinkedList& LinkedList::operator=(const LinkedList& other)
{
	if(this == &other)
		return *this;
	delete p_head;
	p_head = NULL;
	
	LinkedListNode *p_itr = other.p_head;
	while (p_itr != NULL)
	{
		insert(p_itr->val);
		p_itr = p_itr->p_next;
	}
	return *this;
}

LinkedList::LinkedList(const LinkedList& other) : p_head(NULL)
{
	LinkedListNode *p_itr = other.p_head;
	while(p_itr != NULL)
	{
		insert(p_itr->val);
		p_itr = p_itr->p_next;
	}
}
