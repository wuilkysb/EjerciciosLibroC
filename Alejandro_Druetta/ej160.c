#include <stdio.h>

char perfnum(int num)
{
	int i, sumdiv;

	sumdiv = 0;
	for (i=1; i<num; i++)
		if (num % i == 0)
			sumdiv += i;
	if (sumdiv == num)
		return 1;
	else
		return 0;
}

int main(void)
{
	int num;

	printf("Dame un número perfecto: "); scanf("%d", &num);
	if (perfnum(num))
		printf("Correcto!!!\n");
	else
		printf("No es un número perfecto...\n");

	return 0;
}
