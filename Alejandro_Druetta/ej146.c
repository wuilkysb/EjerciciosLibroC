/* Agenda telefónica */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NOMBRELON 15
#define MAXTEL 3
#define MAXCONT 5
#define MAXLINEA 80

enum { AnyadirCont=1, BuscarCont, SuprimirCont, AnyadirTel, SuprimirTel, Salir };

struct Telefono {
	char codarea[7];
	char numero[11];
};

struct Contacto {
	char nombre[NOMBRELON+1];
	char apellido[NOMBRELON+1];
	struct Telefono telefono[MAXTEL];
	int tel_cant;
};

struct Agenda {
	struct Contacto contacto[MAXCONT];
	int cont_cant;
} agenda;

int main(void)
{
	int i, j, k, opcion;
	char opcion_sn, opcion_tel;
	char nombre[NOMBRELON+1], apellido[NOMBRELON+1];
	char posicion[MAXCONT];
	char linea[MAXLINEA];

	for (i=0; i<MAXCONT; i++)
		posicion[i] = 0;

	agenda.cont_cant = 0;
	do {
		do {
			printf("\n**** Agenda de Alejandro ****\n");
			printf("\nSeleccione la opción deseada:\n");
			printf("\n1) Añadir un contacto.");
			printf("\n2) Buscar un contacto.");
			printf("\n3) Suprimir un contacto.");
			printf("\n4) Añadir un teléfono a un contacto.");
			printf("\n5) Suprimir un teléfono de un contacto.");
			printf("\n6) Salir.\n");
			printf("\nOpción: ");
			gets(linea); sscanf(linea, "%d", &opcion);
		} while (opcion < 1 || opcion > 6);

		switch (opcion) {

			case AnyadirCont:
				for (i=0; i<MAXCONT; i++) {
					if (posicion[i] == 0) {
						printf("Nombre: "); 
						gets(agenda.contacto[i].nombre);
						printf("Apellido: "); 
						gets(agenda.contacto[i].apellido);
						agenda.contacto[i].tel_cant = 0;
						do {
							printf("\nTeléfono %d:\n", agenda.contacto[i].tel_cant+1);
							printf("Cód. área: "); 
							gets(agenda.contacto[i].telefono[agenda.contacto[i].tel_cant].codarea);
							printf("Número: ");
							gets(agenda.contacto[i].telefono[agenda.contacto[i].tel_cant].numero);
							agenda.contacto[i].tel_cant++; 
							if (agenda.contacto[i].tel_cant < MAXTEL) {
								do {
									printf("Desea añadir otro número (S/N)?: ");
									gets(linea); sscanf(linea, "%c", &opcion_sn);
									opcion_sn = toupper(opcion_sn);
								} while (opcion_sn != 'N' && opcion_sn != 'S');
							}
							else
								opcion_sn = 'N';
						} while (opcion_sn == 'S');
						agenda.cont_cant++;
						posicion[i] = 1;
						break;
					}
					else if (i == MAXCONT-1) {
						printf("La base de datos está repleta.\n");
						printf("Suprima un contacto para añadir uno nuevo.\n");
					}
				}
			break;

			case BuscarCont:
				printf("Nombre: "); gets(nombre);
				printf("Apellido: "); gets(apellido);
				for (i=0; i<MAXCONT; i++)
					if (strcmp(nombre, agenda.contacto[i].nombre) == 0 && 
						strcmp(apellido, agenda.contacto[i].apellido) == 0)
						for (j=0; j<agenda.contacto[i].tel_cant; j++) {
							printf("Teléfono %d: (%s) %s\n", j+1, 
								agenda.contacto[i].telefono[j].codarea, 
								agenda.contacto[i].telefono[j].numero);
						}
			break;

			case SuprimirCont:
				printf("Nombre: "); gets(nombre);
				printf("Apellido: "); gets(apellido);
				for (i=0; i<MAXCONT; i++) {
					if (strcmp(nombre, agenda.contacto[i].nombre) == 0 && 
						strcmp(apellido, agenda.contacto[i].apellido) == 0) {
						sprintf(linea, "%s %s", agenda.contacto[i].nombre, 
												agenda.contacto[i].apellido);
						printf("El contacto %s ha sido suprimido.\n", linea);
						agenda.contacto[i].nombre[0] = '\0';
						agenda.contacto[i].apellido[0] = '\0';
						posicion[i] = 0;
						break;
					}
				}
			break;

			case AnyadirTel:
				printf("Nombre: "); gets(nombre);
				printf("Apellido: "); gets(apellido);
				for (i=0; i<MAXCONT; i++) {
					if (strcmp(nombre, agenda.contacto[i].nombre) == 0 && 
						strcmp(apellido, agenda.contacto[i].apellido) == 0) {
						do {
							if (agenda.contacto[i].tel_cant < MAXTEL) {
								printf("Cód. área: "); 
								gets(agenda.contacto[i].telefono[agenda.contacto[i].tel_cant].codarea);
								printf("Número: ");
								gets(agenda.contacto[i].telefono[agenda.contacto[i].tel_cant].numero);
								agenda.contacto[i].tel_cant++;
							}
							else {
								printf("El contacto ya posee el máximo de %d "
									   "números telefónicos.\n", MAXTEL);
								break;
							}
							printf("Desea añadir otro número (S/N)?: ");
							gets(linea); sscanf(linea, "%c", &opcion_sn);
							opcion_sn = toupper(opcion_sn);
						} while (opcion_sn != 'N' && opcion_sn != 'S');
						break;
					}
				}
			break;

			case SuprimirTel:
				printf("Nombre: "); gets(nombre);
				printf("Apellido: "); gets(apellido);
				for (i=0; i<MAXCONT; i++) {
					if (strcmp(nombre, agenda.contacto[i].nombre) == 0 && 
						strcmp(apellido, agenda.contacto[i].apellido) == 0) {
						if (agenda.contacto[i].tel_cant > 0) {
							for (j=0; j<agenda.contacto[i].tel_cant; j++) {
								printf("Teléfono %d: (%s) %s\n", j+1, 
									agenda.contacto[i].telefono[j].codarea, 
									agenda.contacto[i].telefono[j].numero);
							}
							printf("Cuál teléfono desea suprimir?: ");
							gets(linea); sscanf(linea, "%hhu", &opcion_tel);
							for (k=opcion_tel; k<agenda.contacto[i].tel_cant; k++) {
								strcpy(agenda.contacto[i].telefono[k-1].codarea, agenda.contacto[i].telefono[k].codarea);
								strcpy(agenda.contacto[i].telefono[k-1].numero, agenda.contacto[i].telefono[k].numero);
							}
							agenda.contacto[i].tel_cant -= 1;
						}
						else
							printf("El contacto no tiene ningún teléfono registrado.\n");
					}
				}
			break;

		}
	} while (opcion != Salir);

	return 0;
}
