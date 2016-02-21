#include <stdio.h>

char* strncpy(char* dest, const char* src, int n)
{
	char* tmp = dest;
	int i = 0;
	while (*src!='\0' && i<n) {
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';

	return tmp;
}

int main()
{
	char dest[10];
	char src[] = "hello world";


	printf("dest = %s\n", strncpy(dest, src, 7));
	return 0;
}
