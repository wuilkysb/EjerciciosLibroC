#include <stdio.h>

char esBisiesto(int anyo) {
	if (anyo % 4 == 0 && (anyo % 100 != 0 || anyo % 400 == 0)) {
		return 1;
	}
	return 0;
}

int main(void) {
	int anyo;
	printf("Dame un año: "); scanf("%d", &anyo);
	printf("> %d", esBisiesto(anyo));
	
	return 0;
}
