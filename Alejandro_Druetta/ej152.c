#include <stdio.h>

int bisiesto(int anyo)
{
	if (anyo % 4 == 0 && (anyo % 100 != 0 || anyo % 400 == 0))
		return 1;
	else
		return 0;
}

int main(void)
{
	int anyo;

	printf("Dame un año: "); scanf("%d", &anyo);
	if (bisiesto(anyo))
		printf("El año %d es bisiesto.\n", anyo);
	else
		printf("El año %d no es bisiesto.\n", anyo);

	return 0;
}