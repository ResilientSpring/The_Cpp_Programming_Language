#include <stdio.h>

int main() {

	// Some compilers may allow a const pointer be declared without an initializer: [2][1]
	char *const p;  // char *const p; should be illegal according to the standard (C99, C11, C23). [1]

	char character = 'a';

	p = &character;

}

// References:
// 1. https://chatgpt.com/c/6928583d-3e00-8324-a2e2-07e4b31a6158
// 2. https://chatgpt.com/c/69287632-7368-8322-a121-292e5382014f
