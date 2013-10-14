#include <stdio.h>

int main (void)
{
	int n;
	
	printf("Digite numero entero: ");
	scanf("%d", &n);
	
	if (n%2==0 && (n/2)%2==1)
		printf("%d es el doble de %d que es impar.", n, (n/2));	
	else
		printf("%d NO es el doble de un impar.", n);	
		
	getch();
	return 0;
}
