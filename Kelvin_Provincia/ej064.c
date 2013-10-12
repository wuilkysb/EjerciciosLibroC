/*
 * =============================================================================
 *
 *       Filename:  ej064.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 14:38:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

int main(void){
    int n1, n2, n3, c, o, mcd, i, j, m, prueba;
    char p;
    printf ( "Dame un número: " ); scanf ( "%d", &n1 );
    printf ( "Dame otro número: " ); scanf ( "%d", &n2 );
    printf ( "Dame otro número más: " ); scanf ( "%d", &n3 );
    for (prueba = 0; prueba < 2; prueba++) {
        mcd = 1;
        o = 2;
        while(1 < n1 && 1 < n2) {
            c = 0;
            if (0 == n1 % o) {
                n1 /= o;
                c++;
            }
            if (0 == n2 % o) {
                n2 /= o;
                c++;
            }
            if (2 == c) {
                mcd *= o;
            }
            if (0 == c) {
                m = (n1 > n2) ? n1 : n2;
                for (i = o + 1; i <= m; i ++) {
                    p = 1;
                    for (j = 2; j < i; j++) {
                        if (0 == i % j) {
                            p = 0; break;
                        }
                    }
                    if (1 == p) {
                        o = i; break;
                    }
                }
            }
        }
        n1 = n3;
        n2 = mcd;
    }
    printf ( "El MCD es %d\n", mcd );
    return 0;
}
