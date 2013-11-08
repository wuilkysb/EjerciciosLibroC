/*
 * =============================================================================
 *
 *       Filename:  ej129.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/13 19:05:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define MAXTALLA 10

int main(void) {
    float a[MAXTALLA][MAXTALLA], b[MAXTALLA][MAXTALLA];
    float s[MAXTALLA][MAXTALLA], p[MAXTALLA][MAXTALLA];
    float pa[MAXTALLA][MAXTALLA], pb[MAXTALLA][MAXTALLA];
    float ta[MAXTALLA][MAXTALLA], tb[MAXTALLA][MAXTALLA];
    float ea, eb;
    int filas_a, columnas_a, filas_b, columnas_b;
    int filas_s, columnas_s, filas_p, columnas_p;
    int i, j, k;

    /* Lectura de la matriz a */
    printf ( "Filas de a   : " ); scanf ( "%d", &filas_a );
    printf ( "Columnas de a: " ); scanf ( "%d", &columnas_a );
    for (i = 0; i < filas_a; i++) {
        for (j = 0; j < columnas_a; j++) {
            printf ( "Elemento (%d, %d): ", i, j ); scanf ( "%f", &a[i][j] );
        }
    }
    printf ( "Número que multiplicara a la matriz a: " ); scanf ( "%f", &ea );
    printf ( "\n" );

    /* Lectura de la matriz b */
    printf ( "Filas de b   : " ); scanf ( "%d", &filas_b );
    printf ( "Columnas de b: " ); scanf ( "%d", &columnas_b );
    for (i = 0; i < filas_b; i++) {
        for (j = 0; j < columnas_b; j++) {
            printf ( "Elemento (%d, %d): ", i, j ); scanf ( "%f", &b[i][j] );
        }
    }
    printf ( "Número que multiplicara a la matriz b: " ); scanf ( "%f", &eb );
    printf ( "\n" );

    /* Cálculo de la suma */
    if (filas_a == filas_b && columnas_a == columnas_b) {
        filas_s = filas_a;
        columnas_s = columnas_a;
        for (i = 0; i < filas_s; i++) {
            for (j = 0; j < columnas_s; j++) {
                s[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    
    /* Cálculo del producto */
    if (columnas_a == filas_b) {
        filas_p = filas_a;
        columnas_p = columnas_b;
        for (i = 0; i < filas_p; i++) {
            for (j = 0; j < columnas_p; j++) {
                p[i][j] = 0.0;
                for (k = 0; k < columnas_a; k++) {
                    p[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    /* Cálculo del producto de la matriz a con un escalar */
    for (i = 0; i < filas_a; i++) {
        for (j = 0; j < columnas_a; j++) {
            pa[i][j] = a[i][j] * ea;
        }
    }

    /* Cálculo del producto de la matriz b con un escalar */
    for (i = 0; i < filas_b; i++) {
        for (j = 0; j < columnas_b; j++) {
            pb[i][j] = b[i][j] * eb;
        }
    }

    /* Cálculo de la transpuesta de la matriz a */
    for (i = 0; i < filas_a; i++) {
        for (j = 0; j < columnas_a; j++) {
            ta[j][i] = a[i][j];
        }
    }

    /* Cálculo de la transpuesta de la matriz b */
    for (i = 0; i < filas_b; i++) {
        for (j = 0; j < columnas_b; j++) {
            tb[j][i] = b[i][j];
        }
    }

    /* Impresión del resultado de la suma */
    if (filas_a == filas_b && columnas_a == columnas_b) {
        printf ( "Suma\n" );
        for (i = 0; i < filas_s; i++) {
            for (j = 0; j < columnas_s; j++) {
                printf ( "%8.3f", s[i][j] );
            }
            printf ( "\n" );
        }
    } else {
        printf ( "Matrices no compatibles para la suma.\n" );
    }

    /* Impresión del resultado del producto */
    if (columnas_a == filas_b) {
        printf ( "Prodcuto\n" );
        for (i = 0; i < filas_p; i++) {
            for (j = 0; j < columnas_p; j++) {
                printf ( "%8.3f", p[i][j] );
            }
            printf ( "\n" );
        }
    } else {
        printf ( "Matrices no compatibles para el producto.\n" );
    }
    
    /* Impresión del resultado del producto de la matriz a con un escalar */
    printf ( "Prodcuto: matriz a * %.2f\n", ea );
    for (i = 0; i < filas_a; i++) {
        for (j = 0; j < columnas_a; j++) {
            printf ( "%8.3f", pa[i][j] );
        }
        printf ( "\n" );
    }
    
    /* Impresión del resultado del producto de la matriz b con un escalar */
    printf ( "Prodcuto: matriz b * %.2f\n", eb );
    for (i = 0; i < filas_b; i++) {
        for (j = 0; j < columnas_b; j++) {
            printf ( "%8.3f", pb[i][j] );
        }
        printf ( "\n" );
    }

    /* Impresión de la transpuesta de la matriz a */
    printf ( "Transpuesta de a\n" );
    for (i = 0; i < columnas_a; i++) {
        for (j = 0; j < filas_a; j++) {
            printf ( "%8.3f", ta[i][j] );
        }
        printf ( "\n" );
    }

    /* Impresión de la transpuesta de la matriz b */
    printf ( "Transpuesta de b\n" );
    for (i = 0; i < columnas_b; i++) {
        for (j = 0; j < filas_b; j++) {
            printf ( "%8.3f", tb[i][j] );
        }
        printf ( "\n" );
    }

    return 0;
}
