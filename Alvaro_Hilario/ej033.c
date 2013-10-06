#include <stdio.h>

enum {Primera='a', Segunda, Tercera, Penultima = 'y', Ultima};

int main(void)
{
	printf("La Primera es: %c\n", Primera);
	printf("La Segunda es: %c\n", Segunda);
	printf("La Tercera es: %c\n", Tercera);
	printf("La Penultima es: %c\n", Penultima);
	printf("La Ultima es: %c\n", Ultima);

	return 0;
}