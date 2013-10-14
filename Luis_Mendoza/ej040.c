/*	500 200 100 50 20 10 y 5 	billetes
	1 2 						monedas*/

#include <stdio.h>

int main(void)
{
	int cantidad, cant500=0, cant200=0, cant100=0, cant50=0, cant20=0, cant10=0, cant5=0, cant2=0, cant1=0;
	
	printf("Digite la cantidad de euros: ");
	scanf("%d", &cantidad);
	
	while(cantidad > 0) {
		if (cantidad - 500 >= 0) {
			cantidad = cantidad - 500;
			cant500++;
		}else if(cantidad - 200 >= 0) {
			cantidad = cantidad - 200;
			cant200++;
		}else if(cantidad - 100 >= 0) {
			cantidad = cantidad - 100;
			cant100++;
		}else if(cantidad - 50 >= 0) {
			cantidad = cantidad - 50;
			cant50++;
		}else if(cantidad - 20 >= 0) {
			cantidad = cantidad - 20;
			cant20++;
		}else if(cantidad - 10 >= 0) {
			cantidad = cantidad - 10;
			cant10++;
		}else if(cantidad - 5 >= 0) {
			cantidad = cantidad - 5;
			cant5++;
		}else if(cantidad - 2 >= 0) {
			cantidad = cantidad - 2;
			cant2++;
		}else if(cantidad - 1 >= 0) {
			cantidad = cantidad - 1;
			cant1++;
		}
	}
	
	if (cant500 > 0)
		printf("%d billetes de 500 euros.\n", cant500);
	if (cant200 > 0)
		printf("%d billetes de 200 euros.\n", cant200);
	if (cant100 > 0)
		printf("%d billetes de 100 euros.\n", cant100);
	if (cant50 > 0)
		printf("%d billetes de 50 euros.\n", cant50);
	if (cant20 > 0)
		printf("%d billetes de 20 euros.\n", cant20);
	if (cant10 > 0)
		printf("%d billetes de 10 euros.\n", cant10);
	if (cant5 > 0)
		printf("%d billetes de 5 euros.\n", cant5);
	if (cant2 > 0)
		printf("%d monedas de 2 euros.\n", cant2);
	if (cant1 > 0)
		printf("%d monedas de 1 euro.\n", cant1);
	
	getch();
	return 0;
}
