#include <stdio.h>
#include <stdlib.h>

typedef struct _data{
	int data;
}Data;

typedef struct _node{
	Data data;
	struct _node* next;
}Node;

//头插
Node* insert_node_front(Node* h, Data d)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = d;
	
	p->next = h;
	h = p;
	return h;
}

//尾插
Node* insert_node_back(Node* h, Data d) 
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = d;
	p->next = NULL;

	Node* t = h;
	if (h == NULL) {
		h = p;
		return h;
	} 
	
	while (t->next != NULL) {
		t = t->next;
	}
	t->next = p;

	return h;
}

//有序插
Node* insert_node_sorted(Node* h, Data d)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = d;
	p->next = NULL;
	
	if (h == NULL) {
		h = p;
		return h;
	}

	Node* t;
	Node* pre;
	for(t=h,pre=h; t!=NULL && d.data>t->data.data; pre=t,t=t->next);
	
	if (t == h) {
		p->next = h;
		h = p;
	} else {
		p->next = t;
		pre->next = p;
	}
	
	return h;
}

void show_list(Node* h)
{
	Node* p = h;
	while (p != NULL) {
		printf("%d ",p->data.data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	Data d1 = {.data=2};
	Data d2 = {.data=4};
	Data d5 = {.data=5};
	Data d3 = {.data=1};
	Data d4 = {.data=3};

	Node* head = NULL;
	head = insert_node_sorted(head, d1);
	head = insert_node_sorted(head, d2);
	head = insert_node_sorted(head, d5);
	head = insert_node_sorted(head, d3);
	head = insert_node_sorted(head, d4);
	
	show_list(head);
	return 0;
}
