// 注意:dest-- (line 9)

#include <stdio.h>

char* my_strcat(char* dest, const char* src)
{
	char* tmp = dest;
	while(*dest++);
	dest--;

	while (*dest++=*src++);

	return tmp;
}

int main()
{
	char dest[10] = "ab";
	char src[] = "cde";

	printf("strcat(dest, src) = %s\n", my_strcat(dest,src));
	return 0;
}
