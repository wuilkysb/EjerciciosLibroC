#include <stdio.h>
#include <math.h>
int main() {
	int a,b;

	printf("Ingrese 2 numeros enteros\n");
	printf("Primero Numero: "); scanf("%d",&a);
	printf("Segundo Numero: "); scanf("%d",&b);

	if( b == pow(a,2)) {
		printf("El segundo es el cuadrado exacto del primero\n");
	}
	else if (b < pow(a,2)) {
		printf("El segundo es menor que el cuadrado del primero\n");
	}
	else {
		printf("El segundo es mayor que el cuadrado del primero\n");
	}
return 0;
}
