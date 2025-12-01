void f1(char* p)
{

	char s[] = "Gorm";

	const char* pc = s;  // pointer to constant

	pc[3] = 'g';    // error: pc points to constant

	pc = p;    // OK

	char s[] = "Gorm";

	char *const cp = s;   // constant pointer

	cp[3] = 'a';    // OK

}