#include <stdio.h>

void por_extenso(numero)
{
	char digitos[10][7] = {"cero", "uno", "dos", "tres", "cuatro", 
						   "cinco", "seis", "siete", "ocho", "nueve"};
	char decenas[10][10] = {"", "diez", "veinte", "treinta", "cuarenta", 
						    "cincuenta", "sesenta", "setenta", "ochenta", 
						    "noventa"};
	char diez[10][11] = {"", "once", "doce", "trece", "catorce", "quince", 
						 "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
	char y = 'y';
	int decena, unidad;
 
	decena = numero / 10;
	unidad = numero % 10;

	printf("\n");
	printf("%d (", numero);

	if (numero > 10 && numero < 20)
		printf("%s", diez[numero-10]);
	else if (numero > 20 && numero < 30)
		printf("%s%s", "veinti", digitos[unidad]);
	else if (decena > 0 && unidad > 0)
		printf("%s %c %s", decenas[decena], y, digitos[unidad]);
	else if (decena == 0)
		printf("%s", digitos[unidad]);
	else
		printf("%s", decenas[decena]);

	printf(")\n\n");
}

int main(void)
{
	int numero;

	printf("Ingrese un número entero entre 0 y 99: ");
	scanf("%d", &numero);
	por_extenso(numero);

	return 0;
}