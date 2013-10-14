#include <stdio.h>

int main (void)
{
	char ascii;
	
	printf("Digite letra: ");
	scanf("%c", &ascii);
	
	if (ascii > 96 && ascii < 123)
		printf("Es una minuscula.");	
	else if (ascii > 64 && ascii < 91)
		printf("Es una mayuscula.");
	
	getch();
	return 0;
}
