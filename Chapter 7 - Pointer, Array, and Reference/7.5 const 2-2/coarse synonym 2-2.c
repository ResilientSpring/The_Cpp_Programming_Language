#include <stdio.h>

void g(const char* p) {

	char punctual = 'e';

	// p is not const, so it can point to elsewhere. 
	p = &punctual;
}

int main() {



}