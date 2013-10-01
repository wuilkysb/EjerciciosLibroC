#include <stdio.h>

int main(void)
{
	enum { Primera='a', Segunda, Tercera, Penultima='y', Ultima };

	printf("Primera = %c\n", Primera);
	printf("Segunda = %c\n", Segunda);
	printf("Tercera = %c\n", Tercera);
	printf("Penúltima = %c\n", Penultima);
	printf("Última = %c\n", Ultima);

	return 0;
}
