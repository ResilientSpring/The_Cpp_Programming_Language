#include <stdio.h>

int main(void) {

	int a[10] = { 1, 2, 3, 4, 5 };

	int* p;
	int* q;
	int i; 
	int sum = 0;

	p = &a[1];
	q = &a[9];

	for (; q + 3 > p; )
		*(q--) = *(p++) * 2;
	
	for (i = 1; i < 8; i++)	
		sum = sum + a[i];
	
	printf("%d\n", sum);
	
	return(0);
}