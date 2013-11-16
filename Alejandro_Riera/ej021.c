#include <stdio.h>
#include <math.h>
int main(void) {
	int r,resultado;
	printf("Ingrese un numero: ");
	scanf("%d",&r);
	resultado = pow(r,4) - pow (r,2) + 1;
	
	printf("Resultado: %d\n",resultado);

return 0;
}
