#include <stdio.h>

int main(void)
{
	int n, mayor=-1;
	
	do{
		printf("Digite n: ");
		scanf("%d", &n);
		if (n>mayor)
			mayor=n;
		if (n<0)
			break;
	}while(1);
	
	printf("El numero mayor fue: %d", mayor);
	
	return 0;
}
