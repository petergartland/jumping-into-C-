#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

struct strlist
{
	string name;
	strlist* p_list = NULL;
};


strlist* addList(strlist* list, string name)
{
	strlist* newitem = new strlist;
	newitem->name = name;
	newitem->p_list = list;
	return newitem;
}

void printList(strlist* list)
{
	while (list != NULL)
	{
		cout<<list->name<<endl;
		list = list->p_list;
	}
}

strlist* deleteList(strlist* list, string name)
{
	strlist* prev;
	strlist* head = list;
	if (list->name == name && list != NULL)
	{
		list = list->p_list;
		return list;
	}
	while (list != NULL && list->name != name)
	{
		prev = list;
		list = list->p_list;
	}
	prev->p_list = list->p_list;
	delete list;
	return head;
}

strlist* addSorted(strlist* list, string name)
{
	strlist* prev;
	strlist* newitem = new strlist;
	newitem->name = name;
	strlist* head = list;
	if(list == NULL)
		return newitem;
	if (list->name >= name && list != NULL)
	{
		newitem->p_list = list;
		list = newitem;
		return newitem;
	}
	while (list != NULL && list->name <= name)
	{
		prev = list;
		list = list->p_list;
	}
	newitem->p_list = list;
	prev->p_list = newitem;
	return head;
}



int main()
{
	strlist* list = NULL;
	list = addSorted(list, "peter");
	list = addSorted(list, "joseph");
	list = addSorted(list, "gartland");
	list = addSorted(list, "hello");
	printList(list);
	list = deleteList(list, "hello");
	printList(list);	
}
