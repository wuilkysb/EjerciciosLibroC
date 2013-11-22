/*
 * =============================================================================
 *
 *       Filename:  ej145.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/11/13 10:58:00
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

#define TALLA 1000

struct Number {
    char digitos[TALLA];
    int talla;
};

int main(void) {
    struct Number n1, n2, resultado;
    int i, c, sumad, lleva, m;
    char a, b, aux;
    n1.talla = 0;
    n2.talla = 0;
    resultado.talla = 0;
    lleva = 0;

    printf ( "Dame un número: " ); gets(n1.digitos);
    printf ( "Dame otro número: " ); gets(n2.digitos);

    for (i = 0; i < TALLA; i++) {
        if (n1.digitos[i] < '0' || n1.digitos[i] > '9') break;
        n1.talla++;
    }
    n1.digitos[n1.talla] = '\0';
    for (i = 0; i < TALLA; i++) {
        if (n2.digitos[i] < '0' || n2.digitos[i] > '9') break;
        n2.talla++;
    }
    n2.digitos[n2.talla] = '\0';

    if (n1.talla > n2.talla){
        c = n1.talla;
        m = 0;
    } else if (n1.talla == n2.talla) {
        if (strcmp(n1.digitos, n2.digitos) == 1) {
            c = n1.talla;
            m = 0;
        } else {
            c = n2.talla;
            m = 1;
        }
        printf ( "%d \n", m );
    } else {
        c = n2.talla;
        m = 1;
    }

    /* Ŝuma */
    for (i = 0; i < c; i++) {
        a = (n1.talla > i) ? n1.digitos[n1.talla - 1 - i] - '0' : 0;
        b = (n2.talla > i) ? n2.digitos[n2.talla - 1 - i] - '0' : 0;
        sumad = a + b + lleva;
        resultado.digitos[i] = (sumad % 10) + '0';
        lleva = sumad / 10;
        resultado.talla++;
    }
    if (lleva) {
        resultado.digitos[resultado.talla++] = lleva + '0';
    }
    resultado.digitos[resultado.talla] = '\0';

    /* invetir el resiltado */
    for (i = 0; i < resultado.talla / 2; i++) {
        aux = resultado.digitos[i];
        resultado.digitos[i] = resultado.digitos[resultado.talla - i - 1];
        resultado.digitos[resultado.talla - i - 1] = aux;
    }

    printf ( "%s + %s = %s\n", n1.digitos, n2.digitos, resultado.digitos );


    resultado.talla = 0;
    /* Resta */
    for (i = 0; i < c; i++) {
        a = (n1.talla > i) ? n1.digitos[n1.talla - 1 - i] - '0' : 0;
        b = (n2.talla > i) ? n2.digitos[n2.talla - 1 - i] - '0' : 0;
        if (m) {
            aux = a;
            a = b;
            b = aux;
        }
        a -= lleva;
        lleva = 0;
        if (a < b) {
            a += 10;
            lleva = 1;
        }
        sumad = a - b;
        resultado.digitos[i] = sumad + '0';
        resultado.talla++;
    }
    resultado.digitos[resultado.talla] = '\0';

    /* invetir el resiltado */
    for (i = 0; i < resultado.talla / 2; i++) {
        aux = resultado.digitos[i];
        resultado.digitos[i] = resultado.digitos[resultado.talla - i - 1];
        resultado.digitos[resultado.talla - i - 1] = aux;
    }

    m = 0;
    /* Quitar ceros a la izquierda */
    for (i = 0; i < resultado.talla; i++) {
        if (!m && resultado.digitos[i] == '0') {
            continue;
        }
        resultado.digitos[m++] = resultado.digitos[i];
    }
    resultado.talla = m;
    resultado.digitos[resultado.talla] = '\0';

    printf ( "%s - %s = %s\n", n1.digitos, n2.digitos, resultado.digitos );
    return 0;
}
