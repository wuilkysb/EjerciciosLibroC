#include <stdio.h>

int main(void)
{
	int i;

	printf("+---------+----------+\n");
	printf("| Decimal | Carácter |\n");
	printf("+---------+----------+\n");
	for(i = 32; i < 127; i++) {
		printf("| %7d | %8c |\n", i, i);
	}
	printf("+---------+----------+\n");

	return 0;
}