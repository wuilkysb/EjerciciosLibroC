#include <stdio.h>
#define MAXTALLA 10

int main(void){
    float a[MAXTALLA][MAXTALLA], b[MAXTALLA][MAXTALLA];
    float s[MAXTALLA][MAXTALLA], p[MAXTALLA][MAXTALLA];
    float e[MAXTALLA][MAXTALLA], t[MAXTALLA][MAXTALLA];
    float escalar;
    int filas_a, columnas_a, filas_b, columnas_b;
    int filas_s, columnas_s, filas_p, columnas_p ;
    int i, j, k, ti, tj;

    /* Lectura de la matriz a */
    printf ("Filas de a   : "); scanf ("%d", &filas_a);
    printf ("Columnas de a: "); scanf ("%d", &columnas_a);
    for (i=0; i<filas_a; i++)
        for (j=0; j<columnas_a; j++) {
        printf ("Elemento (%d, %d): ", i, j); scanf ("%f", &a[i][j]);
        }

    /* Lectura de la matriz b */
    printf ("Filas de b   : "); scanf ("%d", &filas_b);
    printf ("Columnas de b: "); scanf ("%d", &columnas_b);
    for (i=0; i<filas_b; i++)
        for (j=0; j<columnas_b; j++) {
            printf ("Elemento (%d, %d): ", i, j); scanf ("%f", &b[i][j]);
        }

    /* Calculo de la suma */
    if (filas_a == filas_b && columnas_a == columnas_b) {
    filas_s = filas_a;
    columnas_s = columnas_a;
    for (i=0; i<filas_s; i++)
        for (j=0; j<filas_s; j++)
            s[i][j] = a[i][j] + b[i][j];
        }

    /* Calculo del producto */
    if (columnas_a == filas_b) {
        filas_p = filas_a;
        columnas_p = columnas_b;
        for (i=0; i<filas_p; i++)
            for (j=0; j<columnas_p; j++) {
                p[i][j] = 0.0;
                for (k=0; k<columnas_a; k++)
                    p[i][j] += a[i][k] * b[k][j];
            }
    }

    /*Calculo de Producto de una matriz por un escalar*/
    if (filas_a == filas_b && columnas_a == columnas_b) {
        escalar = 0;
        for(i=0 ; i < filas_a ; i++){
            for(j=0 ; j < columnas_a ; j++){
                e[i][j] = a[i][j] + b[i][j];
                escalar += e[i][j];
            }
            for(j=0 ; j < columnas_a ; j++)
                e[i][j] *= escalar;
        }

    }

    /*Transpuesta de a*/
    ti = 0;
    tj = 0;
    for(j=0 ; j < columnas_a ; j++){
        for(i=0 ; i < filas_a ; i++){
            t[ti][tj] = a[i][j];
            tj++;
        }
        ti++;
        tj = 0;
    }

    /*imprimir transpuesta de a*/
    printf("Transpuesta de a\n");
    for(i= 0 ; i < columnas_a ; i++){
        for(j=0 ; j < filas_a ; j++)
            printf("%8.3f",t[i][j]);
        printf("\n");
    }

    /*Transpuesta de b*/
    ti = 0;
    tj = 0;
    for(j=0 ; j < columnas_b ; j++){
        for(i=0 ; i < filas_b ; i++){
            t[ti][tj] = b[i][j];
            tj++;
        }
        ti++;
        tj = 0;
    }

    /*imprimir transpuesta de b*/
    printf("Transpuesta de b\n");
    for(i= 0 ; i < columnas_b ; i++){
        for(j=0 ; j < filas_b ; j++)
            printf("%8.3f",t[i][j]);
        printf("\n");
    }


    /* Impresion del resultado de la suma */
    if (filas_a == filas_b && columnas_a == columnas_b) {
        printf ("Suma\n");
        for (i=0; i<filas_s; i++) {
            for (j=0; j<columnas_s; j++)
                printf ("%8.3f", s[i][j]);
            printf ("\n");
        }
    }else printf ("Matrices no compatibles para la suma.\n");

    /* Impresion del resultado del producto */
    if (columnas_a == filas_b) {
        printf ("Producto\n");
        for (i=0; i<filas_p; i++) {
            for (j=0; j<columnas_p; j++)
                printf ("%8.3f", p[i][j]);
            printf ("\n");
        }
    }else printf ("Matrices no compatibles para el producto.\n");

    /* Impresion del resultado del producto escalar */
    if (filas_a == filas_b && columnas_a == columnas_b) {
        printf ("Escalar\n");
        for (i=0; i<filas_a; i++) {
            for (j=0; j<columnas_a; j++)
                printf ("%8.3f", e[i][j]);
            printf ("\n");
        }
    }else printf ("Matrices no compatibles para el producto escalar.\n");

    return 0;
}
