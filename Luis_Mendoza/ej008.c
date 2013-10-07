#include <stdio.h>
#include <math.h>

int main(void){
	int opcion = 0; 
	float radio, diametro, perimetro, area;
	
	while (opcion != 4){
		printf("Escoge una opcion.\n");
		printf("1) Calcular el diametro.\n");
		printf("2) Calcular el perimetro.\n");
		printf("3) Calcular el area.\n");
		printf("4) Salir.\n");
		printf("Tecla 1, 2, 3 o 4 y pulsa el retorno de carro: ");
		scanf("%d", &opcion);
		
		if (opcion > 0 && opcion < 4){
			printf("Dame el radio de un circulo: ");
			scanf("%f", &radio);
				
			if (opcion == 1){
				diametro = 2 * radio;
				printf("El diametro es %f \n", diametro);
			}else if (opcion == 2){
				perimetro = 2 * M_PI * radio;
				printf("El perimetro es %f \n", perimetro);
			}else if (opcion == 3){
					area = M_PI * pow(radio, 2);
					printf("El area es %f \n", area);
				}else if (opcion < 0 || opcion > 4){
					printf("Solo hay cuatro opciones: 1, 2, 3 o 4. Tu has tecleado %d \n", opcion);
				}
		}
		printf("Retorno de carro para continuar..\n");
		getch();
		system("cls");
	}
	
	return 0;
}
