#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, res;

	printf("Dame un valor entero: ");
	scanf("%d", &x);

	res = pow(x, 4) - pow(x, 2) + 1;
	printf("Resultado: %d\n", res);

	return 0;
}
