#include <stdio.h>
#include <math.h>

int main() {

	float a,b,c,s,perimetro;

	printf("Longitud del lado A: "); scanf("%f", &a);
	printf("Longitud del lado B: "); scanf("%f", &b);
	printf("Longitud del lado C: "); scanf("%f", &c);
	perimetro=a+b+c;
	s=perimetro/2.0;
	printf("El perimetro del Triangulo es: %.2f y el area es: %.2f\n",perimetro,sqrt(s*(s-a)*(s-b)*(s-c)));

return 0;
}