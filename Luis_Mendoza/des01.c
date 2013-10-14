/*	Un numero perfecto es aquel que es igual a la suma
	de todos sus divisores excepto el mismo. El primer
	numero perfecto es 6 ya que 1+2+3=6. Escriba un
  	programa que muestre todos los numeros perfectos hasta
	un numero dado leido del teclado.*/

#include <stdio.h>

int main(void)
{
	int n, i, j, suma=1, sw=1;
	
	printf("Introduzca numero limite: ");
	scanf("%d", &n);
	
	printf("Los numeros perfectos entre 1 y %d son: \n", n);
	for(i=6; i<=n; i++) {
		for(j=2; j<=i/2; j++)
			if(i%j==0)
				suma = suma+j;
					
		if(suma==i) {
			printf("%d \n", i);
			sw=0;
		}

		suma=1;
	}
	
	if (sw)
		printf("\aNo se encontraron numeros perfectos\n");
		
	getch();
	return 0;
}

