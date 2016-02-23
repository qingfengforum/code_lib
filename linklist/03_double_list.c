#include <stdio.h>
#include <stdlib.h>

typedef struct _data {
	int data;
}Data;

typedef struct _node {
	Data data;
	struct _node* prev;
	struct _node* next;
}Node;


Node* insert_node_front(Node* h, Data d)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = d;
	p->prev = NULL;

	p->next = h;
	h = p;

	return h;
}

Node* delete_node(Node* h, int d)
{
	Node* p = h;
	Node* t = NULL;

	while (p != NULL) {
		if (p->data.data == d) {
			t = p;
			p = p->next;

			if (t == h) {
				h = h->next;
				h->prev = NULL;
			} else {
				t->prev->next = t->next;
				t->next->prev = t->prev;
			}

			free(t);
		} else {
			p = p->next;
		}
	}
	
	return h;


}

void show_list(Node* h)
{
	Node* p = h;
	while (p != NULL) {
		printf("%d ", p->data.data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	Data d1 = {.data = 1};
	Data d2 = {.data = 2};
	Data d3 = {.data = 3};
	Data d4 = {.data = 4};

	Node* head = NULL;
	head = insert_node_front(head, d2);
	head = insert_node_front(head, d1);
	head = insert_node_front(head, d4);
	head = insert_node_front(head, d3);

	show_list(head);
	head = delete_node(head, 3);

	show_list(head);
	return 0;
}
