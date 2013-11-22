#include <stdio.h>

int esMenor(float n1, float n2) {
	if (n1 < n2) return 1;
	return 0;
}

int main(void) {
	float n1, n2;
	printf("Dame dos números separados por un espacio: ");
	scanf("%f %f", &n1, &n2);
	printf("> %d", esMenor(n1, n2));
	
	return 0;
}
