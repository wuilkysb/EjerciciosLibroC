#include <stdio.h>

int main(void) {
	float l1, l2, perimetro, area;

	printf("Digite valor de lado 1 del rectangulo: ");
	scanf("%f", &l1);
	printf("Digite valor de lado 2 del rectangulo: ");
	scanf("%f", &l2);

	perimetro = l1+l1+l2+l2;
	area = l1*l2;
	printf("Perimetro %f\nArea es %f\n", perimetro, area);
	
	getch();
	return 0;
}
