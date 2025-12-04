void f4()
{
	int a = 1;

	const int c = 2;

	const int* p1 = &c;   // OK

	const int* p2 = &a;   // OK

	int* p3 = &c;  // error: initialization of int* with const int*
}