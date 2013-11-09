/*
 * =============================================================================
 *
 *       Filename:  ej127.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/13 13:00:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA 80

int main(void) {
    int distancias[10][10] = {  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 10, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };
    int recorrido[TALLA];
    int i = 0, r;

    printf ( "Recorrido [0-9]:\n" );
    do {
        printf ( ">> " ); scanf ( "%d", &recorrido[i++] );
    } while(recorrido[i - 1] >= 0 && recorrido[i - 1] <= 9 && i < TALLA);
    r = i - 1;

    for (i = 0; i < r - 1; i++) {
        if (recorrido[i] == recorrido[i + 1]) {
            printf ( "%d-----%d: 0 km.\n", recorrido[i],
                                                        recorrido[i + 1]);
        } else if (distancias[recorrido[i]][recorrido[i + 1]]) {
            printf ( "%d-----%d: %d km.\n", recorrido[i], recorrido[i + 1],
                    distancias[recorrido[i]][recorrido[i + 1]] );
        } else if (distancias[recorrido[i + 1]][recorrido[i]]) {
            printf ( "%d-----%d: %d km.\n", recorrido[i], recorrido[i + 1],
                    distancias[recorrido[i + 1]][recorrido[i]] );
        } else {
            printf ( "%d-----%d: Trayecto inválido.\n", recorrido[i],
                                                        recorrido[i + 1]);
            break;
        }
    }
    return 0;
}
