#include <stdio.h>

int strlen(const char* src)
{
	int len = 0;
	while (*src++) {
		len++;
	}

	return len;
}

int main()
{
	char src[] = "hello";

	printf("strlen(src) = %d\n", strlen(src));

	return 0;
}
