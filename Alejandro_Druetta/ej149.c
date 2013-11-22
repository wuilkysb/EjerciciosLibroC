#include <stdio.h>

int menor(float x, float y)
{
	if (x < y)
		return 1;
	else
		return 0;
}

int main(void)
{
	float x, y;
	
	printf("Dame dos flotantes: \n"); 
	scanf("%f", &x); scanf("%f", &y);
	if (menor(x, y))
		printf("%.2f es menor que %.2f.\n", x, y);
	else
		printf("%.2f es mayor que %.2f.\n", x, y);

	return 0;
}
