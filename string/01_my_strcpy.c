#if 0
1. 返回值：目标字符串到首地址
2. 参数 dest：目标字符串
   参数 src：源字符串

#endif
#include <stdio.h>

char* my_strcpy(char* dest, char* src)
{
	char* tmp = dest;
	while (*dest++ = *src++) ;
	return tmp;
}

int main()
{
	char a[10] = "hello";
	char b[10];

	my_strcpy(b,a);
	printf("b = %s\n", b);

	return 0;
}
