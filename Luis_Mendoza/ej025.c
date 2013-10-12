#include <stdio.h>
#include <math.h>

int main(void) {
	float r, perimetro, area;
	
	printf("Digite radio: ");
	scanf("%f", &r);
	area = M_PI*pow(r, 2);
	perimetro = 2*M_PI *r;
	printf("Perimetro: %f\nArea: %f\n", perimetro, area);
	
	getch();
	return 0;
}
