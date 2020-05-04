struct node
{
	node *p_next;
	int value;
};

node* addNode(node*, int);

void printList (const node*);
