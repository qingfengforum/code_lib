#include <stdio.h>

char* my_strstr(const char* haystack, const char* needle)
{
	int i,j;

	for (i=0; haystack[i]; i++) {
		if (haystack[i] == needle[0]) {
			for(j=1; needle[j]; j++) {
				if (haystack[i+j] != needle[j]) {
					break;
				}
			}
			if (needle[j] == '\0') {
				return (char*)haystack+i;
			}
		}
	}

	return NULL;
	
}

int main()
{
	char haystack[] = "hello world";
	char needle[] = "lo wor";

	char* p = my_strstr(haystack, needle);
	if (p == NULL) {
		printf("not match\n");	
	} else {
		printf("%s\n", p);
	}


	return 0;
}
