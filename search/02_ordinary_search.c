#include <stdio.h>


int ordinary_search(int* a, int data)
{
	int i;
	for (i=0; i<10; i++) {
		if (a[i] == data) {
			return i;
		}
	}
	return -1;
}


int main()
{
	int a[10] = {0,1, 2, 3, 4, 5, 6, 7, 8 ,9};

	int m = ordinary_search(a, 1);
	printf("%d\n", m);
	return 0;
}
