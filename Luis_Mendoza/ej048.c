#include <stdio.h>

int main (void)
{
	int n, i;
	long long result=1;
	
	printf("Digite entero n: ");
	scanf("%d", &n);
	
	for (i=2; i<=n; i++)
		result *=i;
	
	printf("%d! = %lld", n, result);
		
	getch();
	return 0;
}
