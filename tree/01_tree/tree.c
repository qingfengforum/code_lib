#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

Node* add_tree(Node* p, Data d)
{
	if (p == NULL) {
		p = (Node*)malloc(sizeof(Node));
		p->data = d;
		p->left = NULL;
		p->right = NULL;

	} else if (d.id < p->data.id){
		p->left = add_tree(p->left, d); // 传进来的p只是一个副本，所以要通过返回值的方式把所有节点链接起来。
	} else {
		p->right = add_tree(p->right, d);
	}

	return p;
}

void show_tree(Node* p) 
{
	if (p != NULL) {
		show_tree(p->left);
		show_tree(p->right);
		printf("%d ", p->data.id);
	}

}
