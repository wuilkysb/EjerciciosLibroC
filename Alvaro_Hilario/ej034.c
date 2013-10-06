#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c, s, perimetro, area;

	printf("Digite tres valores del triangulo con formato (a, b, c): ");
	scanf("(%f, %f, %f)", &a, &b, &c);
	
	perimetro = a + b + c;
	s = perimetro / 2;
	area = sqrt(s * (s - a ) * (s - b) - (s - c));

	printf("\n El perimetro del triangulo es: %.2f y su area es: %.2f\n", perimetro, area);

	return 0;
}