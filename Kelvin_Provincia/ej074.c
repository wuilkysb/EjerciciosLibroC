/*
 * =============================================================================
 *
 *       Filename:  ej074.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  15/10/13 10:05:06
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

#define MAX_PERSONAS 20

int main(void) {
    int edad[MAX_PERSONAS], personas, i, j, aux, suma_edad;
    float suma_desviacion, media, desviacion, mediana;
    int moda, frecuencia, frecuencia_moda;

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
        for (i = 0; i < personas - 1; i++) {
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
        moda = edad[0];
        for (i = 0; i < personas - 1; i++) {
            if (edad[i] == edad[i + 1]) {
                if (++frecuencia > frecuencia_moda) {
                    frecuencia_moda = frecuencia;
                    moda = edad[i];
                }
            } else {
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
        printf ( "Moda        : %.d\n", moda );
        printf ( "Mediana     : %.2f\n", mediana );
    } else {
        printf ( "No se Introdujo dato alguno.\n" );
    }
    return 0;
}