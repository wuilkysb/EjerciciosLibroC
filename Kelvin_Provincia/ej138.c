/*
 * =============================================================================
 *
 *       Filename:  ej138.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/11/13 14:58:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define PALOS 4
#define CARTAS 12

int main(void) {
    char palos[PALOS][10] = { "oros", "copas", "espadas", "bastos" };
    char cartas[CARTAS][10] = { "as", "2", "3", "4", "5", "6", "7", "8", "9",
                                "sota", "caballo", "rey" };
    char cartaspalos[PALOS * CARTAS][20], mostradas[PALOS * CARTAS];
    int i, j, r;
    for (i = 0; i < CARTAS; i++) {
        for (j = 0; j < PALOS; j++) {
            sprintf(cartaspalos[i * PALOS + j], "%s %s", cartas[i], palos[j]);
            printf ( "%s\n", cartaspalos[i * PALOS + j] );
            mostradas[i * PALOS + j] = 0;
        }
    }
    printf ( "...\n" );
    srand(2);
    i = 0;
    while (i < PALOS * CARTAS) {
        r = rand() % (PALOS * CARTAS);
        if (mostradas[r]) continue;
        printf ( "%s\n", cartaspalos[r] );
        mostradas[r] = 1;
        i++;
    }
    return 0;
}
