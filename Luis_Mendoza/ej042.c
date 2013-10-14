#include <stdio.h>
#include <math.h>

int main (void)
{
	int n1, ntemp, nfinal, i=1, dif;
	
	printf("Digite primer numero: ");
	scanf("%d", &n1);
	
	printf("Digite siguiente numero: ");
	scanf("%d", &ntemp);
	dif = abs(n1-ntemp);
	nfinal = ntemp;
	
	while (i < 4) {
		printf("Digite siguiente numero: ");
		scanf("%d", &ntemp);
		
		if (dif > abs(n1 - ntemp)) {
			dif = abs(n1 - ntemp);
			nfinal = ntemp;
		}
			
		i++;
	}
	
	printf("El numero mas cercano al %d es el %d", n1, nfinal);
	
	getch();
	return 0;
}
