#include <stdio.h>

int main(void)
{
	float a, b;
	
	printf("Digite el valor de a: ");
	scanf("%f", &a);
	printf("Digite el valor de b: ");
	scanf("%f", &b);
	
	if (a != 0) 
		printf("Solucion unica: x = %f", (b/a));
	else if (b == 0) 
			printf("Infinitas soluciones.");
		else
			printf("No tiene solucion.");
		
	getch();
	return 0;	
}
