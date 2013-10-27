#include <stdio.h>
#include <math.h>

int main (void)
{
	int op, op2, x1=0, y1=0, z1=0, x2=0, y2=0, z2=0;
	enum { 	primer_vect=1, 
			segundo_vect,
			suma,
			diferencia,
			producto_vect,
			producto_esc,
			angulo_grados,
			longitud,
			finalizar	};
	
	do{
		system("cls");
		printf("::Operador de vectores::\n\n");
		printf("1) Introducir el primer vector\n");
		printf("2) Introducir el segundo vector\n");
		printf("3) Calcular la suma\n");
		printf("4) Calcular la diferencia\n");
		printf("5) Calcular el producto vectorial\n");
		printf("6) Calcular el producto escalar\n");
		printf("7) Calcular el angulo (en grados) entre ellos\n");
		printf("8) Calcular la longitud\n");
		printf("9) Finalizar\n\n");
		printf("Seleccione una opcion: ");
		scanf("%d", &op);
		
		system("cls");
		switch(op){
			case primer_vect:
				printf("::Introducir el primer vector::\n\n");
				printf("Digite el primer vector x,y,z: ");
				scanf("%d,%d,%d", &x1, &y1, &z1);
				printf("Vector guardado. Enter para continuar...");
			break;
			case segundo_vect:
				printf("::Introducir el segundo vector::\n\n");
				printf("Digite el segundo vector x,y,z: ");
				scanf("%d,%d,%d", &x2, &y2, &z2);
				printf("Vector guardado. Enter para continuar...");
			break;
			case suma:
				printf("::Calcular la suma::\n\n");
				printf("(%d, %d, %d) + (%d, %d, %d) = (%d, %d, %d)\n", x1, y1, z1, x2, y2, z2, x1+x2, y1+y2, z1+z2);
				printf("Enter para continuar...");
			break;
			case diferencia:
				do{
					system("cls");
					printf("::Calcular la diferencia::\n\n");
					printf("1) Primer vector menos segundo vector\n");
					printf("2) Segundo vector menos primer vector\n");
					printf("Seleccione una opcion: ");
					scanf("%d", &op2);
					if(op2!=1 && op2!=2)
						printf("Error! Opcion no valida. Enter para continuar...\n");
					else{
						system("cls");
						if(op2 == 1){
							printf("::Calcular la diferencia primer vector menos segundo vector::\n\n");
							printf("(%d, %d, %d) - (%d, %d, %d) = (%d, %d, %d)\n", x1, y1, z1, x2, y2, z2, x1-x2, y1-y2, z1-z2);
						}else{
							printf("::Calcular la diferencia segundo vector menos primer vector::\n\n");
							printf("(%d, %d, %d) - (%d, %d, %d) = (%d, %d, %d)\n", x2, y2, z2, x1, y1, z1, x2-x1, y2-y1, z2-z1);
						}
						printf("Enter para continuar...");
					}
					getch();
				}while(op2!=1 && op2!=2);
			break;
			case producto_vect:
				do{
					system("cls");
					printf("::Calcular producto vectorial::\n\n");
					printf("1) Primer vector producto segundo vector\n");
					printf("2) Segundo vector producto primer vector\n");
					printf("Seleccione una opcion: ");
					scanf("%d", &op2);
					if(op2!=1 && op2!=2)
						printf("Error! Opcion no valida. Enter para continuar...\n");
					else{
						system("cls");
						if(op2 == 1){
							printf("::Calcular producto vectorial primer vector producto segundo vector::\n\n");
							printf("(%d, %d, %d) x (%d, %d, %d) = (%d, %d, %d)\n", x1, y1, z1, x2, y2, z2, y1*z2-z1*y2, z1*x2-x1*z2, x1*y2-y1*x2);
						}else{
							printf("::Calcular producto vectorial segundo vector producto primer vector::\n\n");
							printf("(%d, %d, %d) x (%d, %d, %d) = (%d, %d, %d)\n", x2, y2, z2, x1, y1, z1, y2*z1-z2*y1, z2*x1-x2*z1, x2*y1-y2*x1);
						}
						printf("Enter para continuar...");
					}
					getch();
				}while(op2!=1 && op2!=2);
			break;
			case producto_esc:
				printf("::Calcular producto escalar::\n\n");
				printf("(%d, %d, %d) * (%d, %d, %d) = %d\n", x1, y1, z1, x2, y2, z2, x1*x2+y1*y2+z1*z2);
				printf("Enter para continuar...");
			break;
			case angulo_grados:
				printf("::Calcular el angulo::\n\n");
				
				printf("Angulo entre (%d, %d, %d) y (%d, %d, %d) = %f\n", x1, y1, z1, x2, y2, z2, 180/M_PI*acos((x1*x2+y1*y2+z1*z2)/sqrt(pow(x1, 2)+pow(y1, 2)+pow(z1, 2))*sqrt(pow(x2, 2)+pow(y2, 2)+pow(z2, 2))));
				printf("Enter para continuar...");
			break;
			case longitud:
				do{
					system("cls");
					printf("::Calcular longitud::\n\n");
					printf("1) Longitud de primer vector\n");
					printf("2) Longitud de segundo vector\n");
					printf("Seleccione una opcion: ");
					scanf("%d", &op2);
					if(op2!=1 && op2!=2)
						printf("Error! Opcion no valida. Enter para continuar...\n");
					else{
						system("cls");
						if(op2 == 1){
							printf("::Calcular longitud de primer vector::\n\n");
							if((pow(x1,2)+pow(y1,2)+pow(z1,2))>=0)
								printf("long (%d, %d, %d)  = %d\n", x1, y1, z1, sqrt(pow(x1,2)+pow(y1,2)+pow(z1,2)));
							else
								printf("Error! valor negativo dentro de raiz.");
						}else{
							printf("::Calcular longitud de segundo vector::\n\n");
							if((pow(x2,2)+pow(y2,2)+pow(z2,2))>=0)
								printf("long (%d, %d, %d) = %d\n", x2, y2, z2, sqrt(pow(x2,2)+pow(y2,2)+pow(z2,2)));
							else
								printf("Error! valor negativo dentro de raiz.");
						}
						printf("Enter para continuar...");
					}
					getch();
				}while(op2!=1 && op2!=2);
			break;
			default:
				printf("Error! Opcion no valida. Enter para continuar...\n");
			break;
		}
		if(op!=diferencia && op!=longitud && op!=producto_vect)
			getch();
	}while(op != finalizar);
	
	printf("\aHa salido del programa!.");
	getch();
	return 0;
}
