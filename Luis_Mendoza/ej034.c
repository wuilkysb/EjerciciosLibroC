#include <stdio.h>
#include <math.h>

int main (void)
{
	float l1, l2, l3, perimetro, area, s, temp;
	
	printf("Digite medida lado 1: ");
	scanf("%f", &l1);
	printf("Digite medida lado 2: ");
	scanf("%f", &l2);
	printf("Digite medida lado 3: ");
	scanf("%f", &l3);
	
	perimetro = l1+l2+l3;
	
	s = (l1+l2+l3)/2;
	temp = s*(s-l1)*(s-l2)*(s-l3);
	area = sqrt(temp);
	
	printf("Perimetro: %f\nArea: %f", perimetro, area);
	
	getch();
	return 0;
}
