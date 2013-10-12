/*
 * =============================================================================
 *
 *       Filename:  ej060.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 11:11:23
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
    int limite, num, creo_que_es_primo, divisor;
    printf ( "Dame un número: " ); scanf ( "%d", &limite );
    for (num = 1; num <= limite; num++) {
        creo_que_es_primo = 1;
        for (divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) {
                creo_que_es_primo = 0; break;
            }
        }
        if (1 == creo_que_es_primo) {
            printf ( "%d\n", num );
        }
    }
    return 0;
}
