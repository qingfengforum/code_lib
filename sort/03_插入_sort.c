#include <stdio.h>

void insert_sort(int* a, int n) 
{
	int i,j;
	int tmp;

	for (i=1; i<n; i++) {     //标记需要排序到位置
		tmp = a[i];
		for (j=i; j>0; j--) { //找到插入到位置:可能找到（插在后面），也可能没找到，查到最前面。
			if (tmp < a[j-1]) {
				a[j] = a[j-1];
			} else {
				break;
			}
		}
		a[j] = tmp;
	}

	return ;
}

void show(int* a, int n)
{
	int i;
	for (i=0; i<n; i++) {
		printf("%d ", a[i]);
	
	}
	printf("\n");
}

int main()
{
	int a[] = {2, 5, 3, 1, 4};	
	show(a, 5);
	insert_sort(a, 5);
	show(a, 5);
	return 0;	
}



