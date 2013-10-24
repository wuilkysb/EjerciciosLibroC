/*
 * =============================================================================
 *
 *       Filename:  ej113.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 16:03:58
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

#define MAXLON 25

int main(void) {
    char nombre[MAXLON + 1], ape1[MAXLON + 1], ape2[MAXLON + 1], 
         completo[MAXLON * 3 + 1];
    printf ( "Dame tu nombre: " ); gets(nombre);
    printf ( "Dame tu primer apellido: " ); gets(ape1);
    printf ( "Dame tu segundo apellido: " ); gets(ape2);
    strcpy(completo, nombre);
    strcat(completo, " ");
    strcat(completo, ape1);
    strcat(completo, " ");
    strcat(completo, ape2);
    printf ( "%s\n", completo );
    return 0;
}
