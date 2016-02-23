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

//显示链表
void show_list(Node* h)
{
	Node* p = h;
	while (p != NULL) {
		printf("%d ",p->data.data);
		p = p->next;
	}
	printf("\n");
}

//插入排序 
Node* insert_sort_list(Node* h)
{
	Node* p = NULL;
	Node* newh = NULL;
	Node* t = NULL;
	Node* t_pre = NULL;

	while (h != NULL) {
		p = h;
		h = h->next;

		
		for(t=newh,t_pre=newh; t!=NULL && p->data.data > t->data.data; t_pre=t,t=t->next);

		if (newh == NULL) { // attention
			newh = p;
			p->next = NULL; // attention
		} else if (t == newh) {
			p->next = newh;
			newh = p;
		} else {
			p->next = t;
			t_pre->next = p;
		}



	}

	return newh;
}


//选择排序
Node* select_sort_list(Node* h)
{
	Node* min = NULL;
	Node* min_pre = NULL;
	Node* p = NULL;
	Node* p_pre = NULL;
	Node* newh = NULL;
	Node* newt = NULL;

	while (h != NULL) {
		min = h;
		min_pre = h;
		for (p=h,p_pre=h; p!=NULL; p_pre=p,p=p->next) {
			if (p->data.data < min->data.data) {
				min = p;
				min_pre = p_pre;
			}
		}

		if (min == h) {
			h = h->next;
		} else {
			min_pre->next = min->next;
		}
		
		min->next = NULL;

		if (newh == NULL) {
			newh = min;
			newt = min;
		} else {
			newt->next = min;
			newt = min;
		}
	
	}
	
	return newh;
}

int main()
{
	Data d1 = {.data=2};
	Data d2 = {.data=4};
	Data d5 = {.data=5};
	Data d3 = {.data=1};
	Data d6 = {.data=1};
	Data d4 = {.data=3};

	Node* head = NULL;
	head = insert_node_front(head, d1);
	head = insert_node_front(head, d2);
	head = insert_node_front(head, d5);
	head = insert_node_front(head, d6);
	head = insert_node_front(head, d3);
	head = insert_node_front(head, d4);
	
	show_list(head);

	//head = insert_sort_list(head);
	head = select_sort_list(head);

	show_list(head);
	return 0;
}
