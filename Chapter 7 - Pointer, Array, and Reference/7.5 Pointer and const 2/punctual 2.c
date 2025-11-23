#include <stdio.h>

int main() {

	// "The qualifier const can be applied to the declaration of any variable to specify that 
	// its value will not be changed." [1]
	const int model = 90;

	// For an array, the const qualifier says that the elements will not be altered.
	const int v[] = { 1, 2, 3, 4 };
}

// References:
// 1. K&RII