void f1(char* p)
{

	char s[] = "Gorm";

	const char* pc = s;  // pointer to constant

	pc[3] = 'g';    // error: pc points to constant


}