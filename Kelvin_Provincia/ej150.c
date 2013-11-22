#include <stdio.h>

#define PI 3.141592653589793

float cubo(float n) {
	return n * n * n;
}

float volEsfera(float radio) {
	return 4 / 3.0 * PI * cubo(radio);
}

int main(void) {
	float radio;
	printf("Dame el radio de una esfera: "); scanf("%f", &radio);
	printf("El volumen de la esfera es: %f\n", volEsfera(radio));
	
	return 0;
}
