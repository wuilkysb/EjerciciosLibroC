/*
 * =============================================================================
 *
 *       Filename:  ej131.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/11/13 10:07:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA 10

int main(void) {
    int matriz[TALLA][TALLA], filas, columnas, i, j, k, h, valle;
    do {
        printf ( "Número de filas: " ); scanf ( "%d", &filas );
    } while(filas < 3 || filas > 10);
    do {
        printf ( "Número de columnas: " ); scanf ( "%d", &columnas );
    } while(columnas < 3 || columnas > 10);

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf ( "Matriz (%d, %d): ", i + 1, j + 1 );
            scanf ( "%d", &matriz[i][j] );
        }
    }
    for (i = 0; i < filas; i++) {
        for (j = 0;j < columnas; j++) {
            valle = 1;
            for (k = i - 1; k <= i + 1; k++) {
                for (h = j - 1; h <= j + 1; h++) {
                    if ((i == k && j == h) || k < 0 || k >= filas || h < 0 ||
                        h >= columnas) continue;
                    if (matriz[i][j] >= matriz[k][h]) {
                        valle = 0;
                        break;
                    }
                }
            }
            if (valle) {
                printf ( "Valle en fila %d columna %d:\n", i + 1, j + 1 );
                for (k = i - 1; k <= i + 1; k++) {
                    for (h = j - 1; h <= j + 1; h++) {
                        (k < 0 || k >= filas || h < 0 || h >= columnas) ?
                            printf ( "x " ) : printf ( "%d ", matriz[k][h] );
                    }
                    printf ( "\n" );
                }
            }
        }
    }
    return 0;
}
