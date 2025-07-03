#include <stdio.h>

void g(const char* p) {

	char punctual = 'e';

	// can't modify *p here.
	p = &punctual;
}

int main() {



}