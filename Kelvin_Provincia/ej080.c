/*
 * =============================================================================
 *
 *       Filename:  ej080.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/10/13 14:15:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <math.h>

#define MAX_PERSONAS    150
#define INTERVALO       10
#define MARCA           "#########"

int main(void) {
    int edad[MAX_PERSONAS], personas, i, j, aux, suma_edad;
    float suma_desviacion, media, desviacion, mediana;
    int moda[MAX_PERSONAS], m, frecuencia, frecuencia_moda, x, mayor, bloques;

    /* Lectura de edades */
    personas = 0;
    do {
        printf ( "Introduce edad de la personas %d (si es negativa, acabará): ",
                ++personas);
        scanf ( "%d", &edad[personas - 1] );
    } while(personas < MAX_PERSONAS && edad[personas - 1] >= 0);
    personas--;

    if (personas > 0) {
        /* Cálculo de la media */
        suma_edad = 0;
        for (i = 0; i < personas; i++) {
            suma_edad += edad[i];
        }
        media = suma_edad / (float) personas;

        /* Cálculo de la desviación típica */
        suma_desviacion = 0.0;
        for (i = 0; i < personas; i++) {
            suma_desviacion += (edad[i] - media) * (edad[i] - media);
        }
        desviacion = sqrt(suma_desviacion / personas);

        /* Cálculo de la moda */
        for (i = 0; i < personas - 1; i++) {        // Ordenación mediante burbuja.
            for (j = 0; j < personas - i - 1; j++) {
                if (edad[j] > edad[j + 1]) {
                    aux = edad[j];
                    edad[j] = edad[j + 1];
                    edad[j + 1] = aux;
                }
            }
        }

        frecuencia = 0;
        frecuencia_moda = 0;
        m = 0;
        /* moda = edad[0]; */
        for (i = 0; i < personas; i++) {
            if (edad[i] == edad[i + 1]) {
                ++frecuencia;
            } else {
                if (++frecuencia > frecuencia_moda) {
                    frecuencia_moda = frecuencia;
                    m = 0;
                    moda[m] = edad[i];
                } else if (frecuencia == frecuencia_moda) {
                    moda[++m] = edad[i];
                }
                frecuencia = 0;
            }
        }

        /* Cálculo de la mediana */
        if (personas % 2 == 0) {
            mediana = (edad[personas / 2] + edad[(personas / 2) - 1]) / 2.0;
        } else {
            mediana = edad[personas / 2];
        }

        /* Impresión de resultados */
        printf ( "Edad media  : %.2f\n", media );
        printf ( "Desv. típica: %.2f\n", desviacion );
        printf ( "Moda        : " );
        for (i = 0; i <= m; i++) {
            printf ( "%d  ", moda[i] );
        }
        printf ( "\nMediana     : %.2f\n", mediana );
        
        j = ((edad[0] / INTERVALO) * INTERVALO) + INTERVALO;
        i = 0;
        mayor = 0;
        frecuencia = 0;
        bloques = 1;
        while(i < personas) { // TABLA: obteniendo cantidad máxima por intervalo
            if (edad[i] < j) {
                i++;
                frecuencia++;
            } else {
                j += INTERVALO;
                if (frecuencia > mayor) mayor = frecuencia;
                frecuencia = 0;
                bloques++;
            }
        }
        if (frecuencia > mayor) mayor = frecuencia;

        printf ( "\n" );
        aux = mayor;
        for (x = 0; x < aux; x++) {
            j = ((edad[0] / INTERVALO) * INTERVALO) + INTERVALO;
            i = 0;
            frecuencia = 0;
            printf ( "|" );
            while(i < personas) {       // TABLA
                if (edad[i] < j) {
                    i++;
                    frecuencia++;
                } else {
                    if (frecuencia >= mayor) {
                        printf ( " %s |", MARCA );
                    } else {
                        printf ( "           |" );
                    }
                    j += INTERVALO;
                    frecuencia = 0;
                }
            }
            if (frecuencia >= mayor) {
                printf ( " %s |", MARCA );
            } else {
                printf ( "           |" );
            }
            printf ( "\n" );
            mayor--;
        }

        printf ( "+" );
        for (i = 0; i < bloques; i++) {
            printf ( "-----------+" );
        }
        j = ((edad[0] / INTERVALO) * INTERVALO) + INTERVALO;
        i = 0;
        printf ( "\n| %3d - %3d |", j - INTERVALO, j - 1  );
        while(i < personas) {       // TABLA: PIE
            if (edad[i] < j) {
                i++;
            } else {
                printf ( " %3d - %3d |", j, j + INTERVALO - 1  );
                j += INTERVALO;
            }
        }
    } else {
        printf ( "No se Introdujo dato alguno.\n" );
    }
    return 0;
}
