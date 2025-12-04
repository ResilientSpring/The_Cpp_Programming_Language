void f4()
{
	int a = 1;

	const int c = 2;

	const int* p1 = &c;   // OK

	// You can assign the address of a non-const variable to a pointer to constant because no harm can
	// come from that.
	const int* p2 = &a;   // OK

	int* p3 = &c;  // error: initialization of int* with const int*

	*p3 = 7;  //  Try to change the value of c.
}

int main() {

	f4();

}