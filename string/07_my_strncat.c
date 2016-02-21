#include <stdio.h>

char* my_strncat(char* dest, const char* src, int n)
{
	char* tmp = dest;
	while (*dest++);
	dest--;
	
	int i = 0;
	while (*src && i<n) {
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';

	return tmp;

}

int main()
{
	
	char dest[10] = "abc";
	char src[] = "defm";

	printf("strncat(dest, src, n) = %s\n", my_strncat(dest, src,5));
	return 0;
}
