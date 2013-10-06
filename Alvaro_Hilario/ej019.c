#include <stdio.h>

int main(void)
{
	int a = 0, b = 1, c = 2;

	printf("#1 es: %d\n", a = b++ - c--);
	a = 0; b = 1; c = 2; 
	printf("#2 es: %d\n", a += --b);
	a = 0; b = 1; c = 2;
	printf("#3 es: %d\n", c *= a + b);
	a = 0; b = 1; c = 2;
	printf("#4 es: %d\n", a = b | c);
	a = 0; b = 1; c = 2;
	printf("#5 es: %d\n", b = (a > 0) ? ++a : ++c);
	a = 0; b = 1; c = 2;
	printf("#6 es: %d\n", b <<= a = 2);
	a = 0; b = 1; c = 2;
	printf("#7 es: %d\n", c >>= a == 2);
	a = 0; b = 1; c = 2;
	printf("#8 es: %d\n", a += a = b + c);

	return 0;
}