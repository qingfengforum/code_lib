#include <stdio.h>

void quick_sort(int* a, int low, int high) 
{
	int pivot = a[low];
	int l = low;
	int h = high;
	
	while (l < h) {

		while (l < h) {
			if (a[h] < pivot) {
				a[l] = a[h];
				l++;
				break;
			}
			h--;
		}
		while (l < h) {
			if (a[l] > pivot) {
				a[h] = a[l];
				h--;
				break;
			}
			l++;
		}
	}
	
	if (l == h) {
		a[l] = pivot;
		quick_sort(a, low, l-1);
		quick_sort(a, l+1, high);
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
	quick_sort(a, 0, 4);
	show(a, 5);
	return 0;	
}



