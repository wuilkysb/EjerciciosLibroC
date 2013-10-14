#include <stdio.h>

int main (void)
{
	int x, n, result, i;
	
	printf("Digite x: ");
	scanf("%d", &x);
	printf("Digite n: ");
	scanf("%d", &n);
	
	
	
	if (0==n){
		printf("%d ** %d = 1", x, n);
	}else{
		result = x;
		for (i=2; i<=n; i++)
			 result *= x;
		printf("%d ** %d = %d", x, n, result);
	}
		
	getch();
	return 0;
}
