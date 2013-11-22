#include <stdio.h>
#include <math.h>

float senoHip(float x) {
	return (exp(x) - exp(-x)) / 2.0;
}

int main(void) {
	float x;
	printf("Dame un número: "); scanf("%f", &x);
	printf("El seno hiperbólico es: %f", senoHip(x));
	
	return 0;
}
