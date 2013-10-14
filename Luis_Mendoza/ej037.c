#include <stdio.h>
#include <math.h>

int main(void)
{
	int n1, n2;
	
	printf("Digite el primer numero entero: ");
	scanf("%d", &n1);
	printf("Digite el segundo numero entero: ");
	scanf("%d", &n2);
	
	if (n2 == pow(n1, 2)) 
		printf("El segundo es el cuadrado exacto del primero.");
	else if (n2 < pow(n1, 2)) 
			printf("El segundo es menor que el cuadrado del primero");
		else
			printf("El segundo es mayor que el cuadrado del primero");
		
	getch();
	return 0;	
}
