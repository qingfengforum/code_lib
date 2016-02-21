#include <stdio.h>

int my_strcmp(const char* str1, const char* str2)
{
	while (*str1==*str2 && *str1) {
		str1++;
		str2++;
	}

	if (*str1 == *str2) {
		return 0;
	} else if (*str1 < *str2) {
		return -1;
	} else {
		return 1;
	}
}

int main()
{
	
	char str1[] = "abcd";
	char str2[] = "abcdr";
	
	printf("strcmp(str1, str2) = %d\n", my_strcmp(str1, str2));

	return 0;
}
