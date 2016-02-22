#include <stdio.h>

void bubble_sort(int* a, int n) 
{
	int i,j;
	int tmp;

	for (i=0; i<n-1; i++) { //每次选出一个最大到放到最后，一共需要几次
		for (j=0; j<n-1-i; j++) { //每次排序中，所有数（应该被操作到数）都用到时，j到停止到位置。倒数第二个数。
			if (a[j] > a[j+1]) {
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
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
	bubble_sort(a, 5);
	show(a, 5);
	return 0;	
}



