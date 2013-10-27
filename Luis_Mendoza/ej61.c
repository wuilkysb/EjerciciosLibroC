#include <stdio.h>

int main(void)
{
	float n, m, i;
	float suma=0;
	
	do{
		printf("Digite n: ");
		scanf("%f", &n);
		printf("Digite m: ");
		scanf("%f", &m);
		if (n<m) break;	
		printf("n no es menor que m !!\n");
	}while(1);
	
	for(i=n; i<=m; i++)
		suma+=(1/i);
	
	printf("Resultado: %f", suma);
	
	return 0;
}
