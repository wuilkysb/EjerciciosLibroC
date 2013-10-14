#include <stdio.h>

int main(void)
{
	int n;
	
	printf("Digite un numero entero: ");
	scanf("%d", &n);
	
	if (n%2 == 0) 
		printf("El numero %d es par.", n);
	else
		printf("El numero %d es impar.", n);
	
	getch();
	return 0;	
}
