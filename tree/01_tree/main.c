#include <stdio.h>
#include "tree.h"

int main()
{
	Data d1 = {.id = 1};
	Data d2 = {.id = 2};
	Data d3 = {.id = 3};
	Data d4 = {.id = 4};

	Node* root = NULL;
	root = add_tree(root, d3);
	root = add_tree(root, d2);
	root = add_tree(root, d1);
	root = add_tree(root, d4);
	
	show_tree(root);
	return 0;
}
