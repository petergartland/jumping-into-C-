#include <iostream>
#include <string>
#include "prob3_functions.h"

using namespace std;

int main()
{
	node* tree = NULL;
	tree = insert(tree, 5);
	insert(tree, 3);
	insert(tree, 8);
	insert(tree,1);
	insert(tree, 6);
	insert(tree,9);
	insert(tree,11);
	insert(tree,10);
	insert(tree,7);
	cout<<tree->key_value<<endl;
	cout<<(tree->left)->key_value<<endl;
	cout<<(tree->right)->key_value<<endl;
	cout<<(tree->left)->left->key_value<<endl;
	cout<<endl;
	cout<<search(tree,9)->right->key_value<<endl;
	//destroyTree(tree);
	//tree=remove(tree, 8);
	//destroyTree(tree);
	print_tree(tree);
	cout<<endl<<endl;
	cout<<count(tree)<<endl<<endl;
	cout<<tree_check(tree)<<endl;
	cout<<tree_check(tree)<<endl;
	no_recurion_destroy(tree);
}

