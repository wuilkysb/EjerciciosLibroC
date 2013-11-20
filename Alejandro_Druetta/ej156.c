#include <stdio.h>

unsigned long long int factorial(int n)
{
	int i;
	unsigned long long int fact;

	fact = 1;
	for (i=2; i<=n; i++) {
		fact *= i;
	}

	return fact;
}

int main(void)
{
	int n;

	printf("Dame un entero: "); scanf("%d", &n);
	printf("El factorial de %d es %llu.\n", n, factorial(n));

	return 0;
}
