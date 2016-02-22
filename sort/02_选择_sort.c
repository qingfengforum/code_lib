#include <stdio.h>

void select_sort(int* a, int n) 
{
	int i,j;
	int tmp;

	for (i=0; i<n-1; i++) {     //标记最小值到位置
		for (j=i+1; j<n; j++) { //把最小值选出来，放到存放最小值到位置。
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
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
	select_sort(a, 5);
	show(a, 5);
	return 0;	
}



