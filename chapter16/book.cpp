#include <iostream>
#include <string>

using namespace std;


void printNum(int i)
{
	cout<<i;
	if (i < 9)
		printNum(i+1);
	cout<<i;
}

struct node
{
	int value;
	node* next;
};

node* addNode(node* list, int num)
{
	node* newnode = new node;
	newnode->value = num;
	newnode->next = list;
	return newnode;
}

node* findNode(node* list, int num)
{
	if (list == NULL)
		return NULL;
	else if (list->value == num)
		return list;
	return findNode(list->next, num);
}

int main()
{
	printNum(1);
	cout<<endl;
	node* list = NULL;
	list = addNode(list, 5); 
	list = addNode(list, 2); 
	list = addNode(list, 52); 
	list = addNode(list, 1); 
	node* x = findNode(list, 5);
	cout << findNode(list, 5)->value<<endl;		
}

