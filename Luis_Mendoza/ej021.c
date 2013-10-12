#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, temp;

	printf("Digite x: ");
	scanf("%d", &x);
	temp = pow(x, 4)-pow(x, 2)+1;
	
	printf("x**4 - x**2 + 1 = %d\n", temp);
	
	getch();
	return 0;
}
