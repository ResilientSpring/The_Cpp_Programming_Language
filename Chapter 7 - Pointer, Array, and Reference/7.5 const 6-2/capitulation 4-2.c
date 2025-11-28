#include <stdio.h>

int main() {

	// Some compilers may allow a const pointer be declared without an initializer:
	char *const p;

	char character = 'a';

	p = &character;

}