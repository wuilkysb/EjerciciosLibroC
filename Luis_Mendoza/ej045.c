#include <stdio.h>

int main (void)
{
	int n;
	
	printf("Digite numero entero diferente de 1: ");
	scanf("%d", &n);
	
	do {
		printf("%d\n", n);
		if (n%2==0)
			n=n/2;
		else
			n=(n*3)+1;
	}while(n != 1);
	
	printf("%d\n", n);
	
	getch();
	return 0;
}
