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
	int i, n;

	printf("Cateto?: "); scanf("%d", &n);
	for (i=0; i<n; i++)
		asteriscos(i);

	return 0;
}