/*
 * =============================================================================
 *
 *       Filename:  ej069.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/10/13 17:44:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA 50

int main(void) {
    long fibo[TALLA], n;
    int i, l = 0, r = TALLA - 1;
    fibo[0] = 1;
    fibo[1] = 1;
    for (i = 2; i < TALLA; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    printf ( "Dame un número: " ); scanf ( "%ld", &n );
    while (l <= r){
        i = (l + r) / 2;
        if (n == fibo[i]) {
            printf ( "El número %ld SI es uno de los %d primeros números de"
                    "Fibonacci\n", n, TALLA );
            return 0;
        } else if (n > fibo[i]) {
            l++;
        } else {
            r--;
        }
    }
    printf ( "El número %ld NO es uno de los %d primeros números de Fibonacci\n"
            , n, TALLA );
    return 0;
}
