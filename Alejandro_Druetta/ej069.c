#include <stdio.h>

#define TALLA 50

int main(void)
{
	unsigned long fib[TALLA], num;
	int i, flag=0;

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i < 50; i++)
		fib[i] = fib[i-2] + fib[i-1];

	printf("Dame un número Fibonacci: ");
	scanf("%lu", &num);

	for (i = 0; i < 50; i++) {
		if (num == fib[i]) {
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		printf("Correcto, %lu es un número Fibonacci!\n", num);
	else
		printf("Lo lamento, %lu no es un número Fibonacci...\n", num);

	return 0;
}
