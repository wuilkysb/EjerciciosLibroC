#include <stdio.h>
#include <stdlib.h>

int dado(void)
{
	int s;

	printf("Introduzca la semilla para rand: "); scanf("%d", &s);
	srand(s);
	return rand() % 6 + 1;
}

int main(void)
{
	int i;

	for (i=0; i<10; i++)
		printf("%d\n", dado());

	return 0;
}
