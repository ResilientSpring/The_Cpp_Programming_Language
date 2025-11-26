#include <stdio.h>

void g(const char* p)
{

	// can't modify *p here.

}


void h()
{

	char val; // val can be modified here.

	g(&val);

}
