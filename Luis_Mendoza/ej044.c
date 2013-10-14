#include <stdio.h>

int main (void)
{
	int op;
	
	do {
		system("cls");
		printf("::Menu:: \n");
		printf("1) Saludar \n");
		printf("2) Salir \n");
		printf("Escoja una opcion: \n");
		scanf("%d", &op);
		
		if (op == 1){
			printf("Hola.! :) Enter para continuar..\n");
			getch();
		}
	}while(op != 2);
	
	printf("Ha salido del programa.!\n");
		
	getch();
	return 0;
}
