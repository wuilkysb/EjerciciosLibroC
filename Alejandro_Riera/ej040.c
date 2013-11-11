/*· 40 Realiza un programa que proporcione el desglose en billetes y monedas de una cantidad
exacta de euros. Hay billetes de 500, 200, 100, 50, 20, 10 y 5 euros y monedas de 1 y 2 euros.
Por ejemplo, si deseamos conocer el desglose de 434 euros, el programa mostrara por pantalla
el siguiente resultado:

2 billetes de 200 euros.
1 billete de 20 euros.
1 billete de 10 euros.
2 monedas de 2 euros.
*/
#include <stdio.h>

int main() {
	int euros,des;
	printf("Ingrese cantidad exacta de euros\n");
	scanf("%d", &euros);

	des = euros / 500;
	if (des > 0) {
		printf("%d Billetes de 500 euros\n",des);
		euros=euros%500;
}		
 	des = euros / 200;
 	
 	if (des > 0) {
 		printf("%d Billetes de 200 euros\n", des);
 		euros %=200;
 	}
 	des = euros / 100;

 	if (des > 0) {
 		printf("%d Billetes de 100 euros\n", des);
 		euros %=100;
 	}

 	des = euros / 50;
 	
 	if (des > 0) {
 		printf("%d Billetes de 50 euros\n", des);
 		euros %=50;
 	}

 	des = euros / 20;

 	if (des > 0) {
 		printf("%d Billetes de 20 euros\n", des);
 		euros %=20;
 	}

 	des = euros / 10;

 	if (des > 0) {
 		printf("%d Billetes de 10 euros\n", des);
 		euros %=10;
 	}

 	des = euros / 5;

 	if (des > 0) {
 		printf("%d Billetes de 5 euros\n", des);
 		euros %=5;
 	}

 	des = euros / 2;
 	
 	if (des > 0) {
 		printf("%d Monedas de 2 euros\n", des);
 		euros %=2;
 	}

 	des = euros / 1;
 	if (des > 0) {
 		printf("%d Moneda de 1 euros\n", des);
 		euros %=500;
 	}

return 0;
}



