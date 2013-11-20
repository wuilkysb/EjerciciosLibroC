#include <stdio.h>

void asteriscos(int n)
{
	int i;

	for (i=0; i<n; i++)
		printf("*");
	printf("\n");
}

int main(void)
{
	int n;

	printf("Cuántos asteriscos?: "); scanf("%d", &n);
	asteriscos(n);

	return 0;
}