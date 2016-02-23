#ifndef TREE_H
#define TREE_H

typedef struct _data {
	int id;
	char name[20];
}Data;

typedef struct _node {
	Data data;
	struct _node* left;
	struct _node* right;
}Node;

Node* add_tree(Node* root, Data a);
void show_tree(Node* root);
void free_tree(Node* root);
Node* min_tree(Node* root);
Node* search_tree_by_id(Node* root, int id);
Node* search_super_by_id(Node* root, int id, int *pos);
Node* remove_tree_by_id(Node* root, int id);


#endif
