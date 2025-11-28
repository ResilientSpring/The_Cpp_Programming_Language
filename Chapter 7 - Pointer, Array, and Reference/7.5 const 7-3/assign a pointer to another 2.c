#include <stdio.h>

int main() {

	int i = 0;
	int a = 1;
	int b = 2;

	i = a + b;

	printf("%d\n", i);

	char character = 'a';

	char* p = &character;

	char *const cp = p;

}