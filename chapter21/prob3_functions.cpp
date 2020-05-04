#include "prob3_functions.h"



using namespace std;



node* insert(node* tree, int key)
{
	if (tree == NULL)
	{
		tree = new node;
		tree->left = NULL;
		tree->right = NULL;
		tree->key_value = key;
		return tree;
	}
	else if (tree->key_value > key)
	{
		tree->left = insert(tree->left, key);
		return tree;
	}
	tree->right = insert(tree->right, key);
	return tree;
}

node* search(node* tree, int key)
{
	if (tree == NULL)
		return NULL;
	else if (tree->key_value == key)
		return tree;
	else if (tree->key_value > key)
		return search(tree->left, key);
	return search(tree->right,key);	
}

void destroyTree(node* tree)
{
	if (tree != NULL)
	{
		//cout<<"looking at node "<<tree->key_value<<endl;
		destroyTree(tree->left);
		destroyTree(tree->right);
		cout<<"deleting node "<<tree->key_value<<endl;
		delete tree;
	}
}

node* findMax(node* tree)
{
	if (tree == NULL)
		return NULL;
	if (tree->right == NULL)
	{
		//cout<<tree->key_value<<endl<<endl;
		return tree;
	}
	return findMax(tree->right);
}


node* remove_max_node(node* tree, node* max)
{
	if (tree == NULL)
		return NULL;
	else if (tree == max)
	{
		//cout<<max->key_value<<endl<<endl;
		return max->left;
	}
	tree->right=remove_max_node(tree->right,max);
	return tree;
}

node* remove(node* tree, int key)
{
	if (tree == NULL)
		return NULL;
	else if (tree->key_value == key)
	{
		if (tree->left == NULL)
		{
			node* tright = tree->right;
			delete tree;
			return tright;
		}
		else if (tree->right == NULL)
		{
			node* tleft = tree->left;
			delete tree;
			return tleft;
		}
		node* max = findMax(tree->left);
		tree->left = remove_max_node(tree->left,max);		
		max->right = tree->right;
		max->left = tree->left;

		delete tree;
		return max;
	}
	else if (tree->key_value > key)
	{
		tree->left = remove(tree->left, key);
		return tree;
	}
	tree->right = remove(tree->right, key);
	return tree;
}


void print_tree(node* tree)
{
	if (tree == NULL)
		return;
	print_tree(tree->left);
	cout<<tree->key_value<<endl;
	print_tree(tree->right);
}


int count(node* tree)
{
	if (tree == NULL)
		return 0;
	return count(tree->left) + count(tree->right) + 1;
}

bool tree_check(node* tree)
{
	if(tree->right == NULL && tree->left == NULL)
		return true;
	else if (tree->right == NULL)
		return tree_check(tree->left) && tree->key_value >= (tree->left)->key_value; 
	else if (tree->left == NULL)
		return tree_check(tree->right) && tree->key_value <= (tree->right)->key_value;	
	return tree_check(tree->left) && tree_check(tree->right) && tree->key_value <= (tree->right)->key_value && tree->key_value >= (tree->left)->key_value;
}




nodeStack* getnodeStack(node* tree)
{
	nodeStack* newnode = new nodeStack; 
	newnode->treeNode = tree;
	newnode->next = NULL;
	return newnode;
}

nodeStack* add_stack(nodeStack* stack, nodeStack* newnode)
{
	newnode->next = stack;
	return newnode;
}

nodeStack* pop_stack(nodeStack* tree)
{
	if (tree == NULL)
		return NULL;
	nodeStack* ret = tree->next;
	delete tree;
	return ret;
}

void no_recurion_destroy(node* tree)
{
	nodeStack* stack = getnodeStack(tree);
	while(stack != NULL)
	{
		cout<<"looking at "<< stack->treeNode->key_value<< " " << stack->treeNode->left << " " << stack->treeNode->right<<endl;
		if ((stack->treeNode)->left != NULL)
		{
			nodeStack* newnode = getnodeStack(stack->treeNode->left);
			stack->treeNode->left = NULL;
			stack = add_stack(stack, newnode);
		}
		else if (stack->treeNode->right != NULL)
		{
			nodeStack* newnode = getnodeStack(stack->treeNode->right);
			stack->treeNode->right = NULL;
			stack = add_stack(stack, newnode);
		}
		else
		{
			delete (stack->treeNode);
			stack = pop_stack(stack);
		}
	}
}
