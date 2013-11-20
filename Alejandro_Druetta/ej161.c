#include <stdio.h>
#include <string.h>

#define MAXNUM 16 

char capicua(char numero[MAXNUM+1])
{	
	char oremun[MAXNUM+1];
	int i, j, longnum;

	longnum = strlen(numero);
	j = 0;
	for (i=longnum-1; i>=0; i--) {
		oremun[j] = numero[i];
		j++;
	}
	oremun[longnum] = '\0';

	if (strcmp(oremun, numero) == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	char numero[MAXNUM+1];

	printf("Dame un entero: "); scanf("%s", numero);
	if (capicua(numero))
		printf("Es capicúa!!!\n");
	else
		printf("No es capicúa...\n");

	return 0;
}
