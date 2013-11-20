#include <stdio.h>
#include <math.h>

float senoh(int x)
{
	return (exp(x) - exp(-x)) / 2;
}

int main(void)
{
	int x;

	printf("Dame x: "); scanf("%d", &x);
	printf("El seno hiperbólico de %d es %f.\n", x, senoh(x));

	return 0;
}
