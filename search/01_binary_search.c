#include <stdio.h>


int binary_search(int* a, int data)
{
	int l,h,m;
	l = 0;
	h = 9;

	while (l <= h) {
		m = (l+h)/2;
		if (a[m] == data) {
			return m;
		} else if (data < a[m]) {
			h = m-1;
		} else if (data > a[m]) {
			l = m+1;
		}
	}

	return -1;
}


int main()
{
	int a[10] = {0,1, 2, 3, 4, 5, 6, 7, 8 ,9};

	int m = binary_search(a, 10);
	printf("%d\n", m);
	return 0;
}
