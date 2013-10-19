#include <stdio.h>

#define TALLA 50

int main(void)
{
	unsigned long fib[TALLA];
	short i;

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i < 50; i++)
		fib[i] = fib[i-2] + fib[i-1];

	for (i = 49; i >= 0; i--)
		printf("%hd --> %lu\n", i, fib[i]);

	return 0;
}
