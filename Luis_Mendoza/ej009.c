#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("Digite a: ");
	scanf("%d", &a);
	printf("Digite b: ");
	scanf("%d", &b);
	
	while (a <= b){
		printf("Digite a: ");
		scanf("%d", &a);
		printf("Digite b: ");
		scanf("%d", &b);
	}
	printf("%d es mayor que %d \n", a, b);
	
	getch();
	return 0;
}
