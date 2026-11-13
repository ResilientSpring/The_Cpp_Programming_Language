#include <stdio.h>

int main() {

	char a = 'A';

	char *const p1 = &a;  // p1 is a constant pointer to a character.
	char const* p2;       // p2 is a pointer to a constant character.
	const char* p3;       // p3 is a pointer to a character constant. 

	char const b = 'B';   // b is a character constant. 

	p2 = &b;              // p2, a pointer to a constant character, now points to a character constant b.

	const char c = 'C';   // c is a constant character.

	p3 = &c;  // p3, a pointer to a character constant, now points to the constant character c. 

	p2 = &c;  // p2, a pointer to a constant character, now points to the constant character c.

	p3 = &b;  // p3, a pointer to a character constant, now points to the character constant b.

}