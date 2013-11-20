#include <stdio.h>

char amayuscula(char minuscula)
{
	if (minuscula >= 97 && minuscula <= 122)
		return minuscula - 32;
	else
		return minuscula;
}

int main(void)
{
	char minuscula;

	printf("Dame una letra minúscula: ");
	scanf("%c", &minuscula);
	if (amayuscula(minuscula) != minuscula)
		printf("La mayúscula de %c es %c.\n", minuscula, amayuscula(minuscula));
	else
		printf("%c no es una letra minúscula del alfabeto inglés.\n", minuscula);

	return 0;
}