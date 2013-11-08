/*
 * =============================================================================
 *
 *       Filename:  ej128.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/13 16:02:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define ROWS 4
#define COLMUNS 5

int main(void) {
    float matriz[ROWS][COLMUNS], sumaf[ROWS];
    int i, j;

    for (i = 0; i < ROWS; i++) {
        sumaf[i] = 0;
    }
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLMUNS; j++) {
            printf ( "Valor fila %d columna %d: ", i, j );
            scanf ( "%f", &matriz[i][j] );
        }
    }
    printf ( "   " );
    for (i = 0; i < COLMUNS; i++) {
        printf ( "%7d", i );
    }
    printf ( "%10s\n", "Suma" );
    for (i = 0; i < ROWS; i++) {
        printf ( "%d [", i );
        for (j = 0; j < COLMUNS; j++) {
            printf ( "%+7.2f", matriz[i][j] );
            sumaf[i] += matriz[i][j];
        }
        printf ( "]  -> %+.2f\n", sumaf[i] );
    }
    return 0;
}
