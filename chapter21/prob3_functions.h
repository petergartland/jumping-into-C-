#ifndef PROB3_FUNCTIONS_H
#define PROB3_FUNCTIONS_H

#include <iostream>
#include <string>
using namespace std;

struct node
{
	int key_value;
	node* left;
	node* right;
};

node* insert(node* tree, int key);
node* search(node* tree, int key);
void destroyTree(node* tree);
node* remove(node* tree, int key);
node* findMax(node* tree);
node* remove_max_node(node* tree, node* max);
void print_tree(node* tree);
int count(node* tree);
bool tree_check(node* tree);

struct nodeStack
{
	node* treeNode;
	nodeStack* next;
};

nodeStack* getnodeStack(node* tree);
nodeStack* add_stack(nodeStack* stack, nodeStack* newnode);
nodeStack* pop_stack(nodeStack* tree);
void no_recurion_destroy(node* tree);


#endif


