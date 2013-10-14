#include <stdio.h>

int main (void)
{
	int n, m, nfact=1, mfact=1, n_mfact=1, i;
	unsigned long result;
	
	printf("Digite n: ");
	scanf("%d", &n);
	
	printf("Digite m: ");
	scanf("%d", &m);
	
	if (n>=m) {
		for (i=2; i<=n; i++)
			nfact *=i;
			
		for (i=2; i<=m; i++)
			mfact *=i;
		
		for (i=2; i<=n-m; i++)
			n_mfact *=i;
		
		result = nfact / (n_mfact*mfact);
		printf("%ld\n", result);
	}
		
	getch();
	return 0;
}
