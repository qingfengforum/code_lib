#include <stdio.h>

typedef struct bit_filed {
	short a1:5;
	short a2:5; 
}AA;

int main()
{
	AA bita;

	printf("sizeof(AA) = %d\n", sizeof(bita));
	return 0;
}
