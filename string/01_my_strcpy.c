#if 0
1. 返回值：目标字符串到首地址
2. 参数 dest：目标字符串
   参数 src：源字符串

#endif
#include <stdio.h>

char* my_strcpy(char* dest, const char* src)
{
	char* tmp = dest;
	while (*dest++ = *src++) ;
	return tmp;
}

char* std_strcpy(char* dest, const char* src)
{
	if (dest==NULL || src==NULL) {  //有一个为空，就没有必要拷贝
		return NULL;
	}

	if (dest == src) { //指向到内存都相同，直接返回
		return dest;
	}

	char* tmp = dest;
	while ((*dest++=*src++) != '\0');

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
