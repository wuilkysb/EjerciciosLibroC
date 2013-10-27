/*
 * =============================================================================
 *
 *       Filename:  ej120.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 19:39:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define MAXLON 25

int main(void) {
    char nombre[MAXLON + 1], ape1[MAXLON + 1], ape2[MAXLON + 1],
         completo[MAXLON * 3 + 1];
    printf ( "Dame tu nombre: " ); gets(nombre);
    printf ( "Dame tu primer apellido: " ); gets(ape1);
    printf ( "Dame tu segundo apellido: " ); gets(ape2);
    
    sprintf(completo, "%s %s, %s", ape1, ape2, nombre);
    printf ( "%s\n", completo );
    return 0;
}
