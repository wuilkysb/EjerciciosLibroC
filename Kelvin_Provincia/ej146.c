/*
 * =============================================================================
 *
 *       Filename:  ej146.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/11/13 15:00:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <string.h>

#define MAXPERSONAS     100
#define MAXTELEFONOS    10
#define LONNOBRE        125
#define LONTELEFONO     15
#define LONLINEA        80

enum { AnyadirPersona = 1, BorrarPersona, BuscarPersona, AnyadirTelefono,
        BorrarTelefono, Salir };

struct Telefonos {
    char numeros[MAXTELEFONOS][LONTELEFONO + 1];
    int cantidad;
};

struct Persona {
    char nombre[LONNOBRE + 1];
    struct Telefonos telefono;
};

struct Agenda {
    struct Persona personas[MAXPERSONAS];
    int cantidad;
};

int main(void) {
    struct Agenda miAgenda;
    char linea[LONLINEA + 1], nombre[LONNOBRE + 1];
    int op, i, lon, j, k;
    miAgenda.cantidad = 0;
    do {
        op = 0;
        printf ("\nAgenda\n"
                "------\n"
                "1) Añadir persona\n"
                "2) Borrar persona\n"
                "3) Buscar persona\n"
                "4) Añadir teléfono\n"
                "5) Borrar teléfono\n"
                "6) Salir\n");
        printf ( "Opción: " ); gets(linea); sscanf(linea, "%d", &op);

        switch (op) {
            case AnyadirPersona:	
                printf ( "Nombre: " );
                gets(miAgenda.personas[miAgenda.cantidad].nombre);
                miAgenda.personas[miAgenda.cantidad].telefono.cantidad = 0;
                do {
                    op = 0;
                    printf ( "Telefono_%d: ",
                            miAgenda.personas[miAgenda.cantidad].telefono.
                            cantidad + 1 );
                    gets(miAgenda.personas[miAgenda.cantidad].telefono.
                            numeros[miAgenda.personas[miAgenda.cantidad].
                                    telefono.cantidad++]);
                    printf ( "Ingresar otro número de teléfono?\n"
                            " 1) si\n 0) no.\n" );
                    printf ("Opcion: "); gets(linea); sscanf(linea, "%d", &op);
                } while(op == 1);
                miAgenda.cantidad++;
                break;

            case BorrarPersona:	
                printf ( "Nombre: " ); gets(nombre);
                for (i = 0; i < miAgenda.cantidad; i++) {
                    if (strcmp(nombre, miAgenda.personas[i].nombre) == 0) {
                        break;
                    }
                }
                if (i == miAgenda.cantidad) {
                    printf ("Persona no encontrada.\n");
                    break;
                }
                for (i = i + 1; i < miAgenda.cantidad; i++) {
                    miAgenda.personas[i - 1] = miAgenda.personas[i];
                }
                miAgenda.cantidad--;
                break;

            case BuscarPersona:	
                printf ("Buscar por nombre: "); gets(nombre);
                lon = strlen(nombre);
                for (i = 0; i < miAgenda.cantidad; i++) {
                    for (j = 0; j < lon; j++) {
                        if (miAgenda.personas[i].nombre[j] != nombre[j]) {
                            break;
                        }
                    }
                    if (j == lon) {
                        printf ("-> %s\n", miAgenda.personas[i].nombre);
                        for (k = 0; k < miAgenda.personas[i].telefono.cantidad;
                            k++) {
                            printf ("\t+ %s\n",
                                    miAgenda.personas[i].telefono.numeros[k]);
                        }
                    }
                }
                break;

            case AnyadirTelefono:
                printf ("Nombre : "); gets(nombre);
                for (i = 0; i < miAgenda.cantidad; i++) {
                    if (strcmp(nombre, miAgenda.personas[i].nombre) == 0) {
                        break;
                    }
                }
                if (i == miAgenda.cantidad) {
                    printf ("Persona no encontrada.\n");
                    break;
                }
                printf ("Teléfono: ");
                gets(miAgenda.personas[i].telefono.numeros[miAgenda.personas[i].
                                                           telefono.cantidad++]
                    );
                break;

            case BorrarTelefono:
                printf ("Nombre : "); gets(nombre);
                for (i = 0; i < miAgenda.cantidad; i++) {
                    if (strcmp(nombre, miAgenda.personas[i].nombre) == 0) {
                        break;
                    }
                }
                if (i == miAgenda.cantidad) {
                    printf ("Persona no encontrada.\n");
                    break;
                }
                for (j = 0; j < miAgenda.personas[i].telefono.cantidad; j++) {
                    printf ("%d.) %s\n", j + 1, miAgenda.personas[i].telefono.
                            numeros[j]);
                }
                printf ("Opción de teléfono a borrar: ");
                gets(linea); sscanf(linea, "%d", &op);
                if (op >= 1 && op <= j) {
                    for (k = op; k < j; k++) {
                        strcpy(miAgenda.personas[i].telefono.numeros[k - 1],
                               miAgenda.personas[i].telefono.numeros[k]);
                    }
                    miAgenda.personas[i].telefono.cantidad--;
                } else {
                    printf ("Opción inválida.\n");
                }
                break;

            case Salir:	
                printf ( "Adios.\n" );
                break;

            default:	
                printf ( "Opción inválida.\n" );
                break;
        }
    } while(op != Salir);
    return 0;
}
