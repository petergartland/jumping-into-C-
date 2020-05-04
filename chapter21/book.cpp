#include "linkedlist.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	node *list = NULL;
	list = addNode(list,10);
	list = addNode(list, 212);
	list = addNode(list, -2);
	printList(list);
}
