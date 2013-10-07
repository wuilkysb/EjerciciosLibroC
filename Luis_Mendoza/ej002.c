#include <stdio.h>

int main(void) {
	int a, b, maximo;
	
	printf("Dame el primer numero: ");
	scanf("%d", &a);
	printf("Dame el segundo numero: ");
	scanf("%d", &b);
	
	if (a >= b){
		maximo = a;
	}else {
		maximo = b;
	}
	
	printf("El maximo es %d", maximo);
	
	getch();
	
    return 0;
}
