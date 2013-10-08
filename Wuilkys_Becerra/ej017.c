#include <stdio.h>

int main(void)
{
	/* code */
	int i;
	printf("+---------+----------+\n");
	printf("| Decimal | Caracter |\n");
	printf("+---------+----------+\n");

	for ( i = 32; i < 100; ++i)
		printf("| %d      | %c        |\n", i, i );

	for ( i = 100; i < 127; ++i)
		printf("| %d     | %c        |\n", i, i );

    printf("+---------+----------+");

	return 0;
}
