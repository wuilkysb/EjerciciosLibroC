#include <stdio.h>

int main(void) {
	float lado, perimetro, area;

	printf("Digite lado del cuadrado: ");
	scanf("%f", &lado);
	
	area = lado*lado;
	perimetro = 4*lado;
	
	printf("Perimetro: %f\nArea: %f\n", perimetro, area);
	
	getch();
	return 0;
}
