#include <stdio.h>

int my_strncmp(const char* str1, const char* str2, int n)
{
	int i = 0;
	while (*str1==*str2 && *str1 && i<n) {
		*str1++;
		*str2++;
		i++;
	}

	if (i == n) {
		return 0;
	} else if (*str1 == *str2) {
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
	char str2[] = "abcefg";

	printf("strncmp(str1, str2, n) = %d\n", my_strncmp(str1, str2,3));

	return 0;
}
