#include <stdio.h>

#define TALLA 10

int main(void)
{
	int i, vector[100];

	for (i = 0; i < 100; i += 2) {
		vector[i] = 0;
		vector[i+1] = 1;
	}

	for (i = 0; i < 100; i++)
		printf("%.2d --> %d\n", i, vector[i]);

	return 0;
}
