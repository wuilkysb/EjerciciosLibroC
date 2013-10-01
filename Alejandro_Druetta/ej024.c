#include <stdio.h>

int main(void)
{
	unsigned int a, b;

	a = 2147483647;
	b = a + a;
	printf ("%u\n", a);
	printf ("%u\n", b);
	return 0;

}
