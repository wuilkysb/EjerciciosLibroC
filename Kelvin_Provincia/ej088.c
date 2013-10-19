/*
 * =============================================================================
 *
 *       Filename:  ej088.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/10/13 22:59:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define DIAS 7
#define HORAS_X_DIA 24
#define TEMP_MAX 200
#define TEMP_MIN -50

int main(void) {
    float temperatura[DIAS * HORAS_X_DIA];
    float max_sem, min_sem, max_dia, min_dia, sum_dia, sum_sem, media, max;
    int i, h, x, dias_sup = 0, i_max;

    /* Lectura de temperatura */
    for (i = 0; i < DIAS * HORAS_X_DIA; i++) {
        printf ( "Temperatura del día %d: hora %d: ", (i / HORAS_X_DIA) + 1,
                i % HORAS_X_DIA );
        scanf ( "%f", &temperatura[i] );
    }

    /* Cálculos */
    max_sem = TEMP_MIN;
    min_sem = TEMP_MAX;
    sum_sem = 0;
    for (i = 0; i < DIAS; i++) {
        max_dia = TEMP_MIN;
        min_dia = TEMP_MAX;
        sum_dia = 0;
        for (h = 0; h < HORAS_X_DIA; h++) {
            x = i * HORAS_X_DIA + h;        // indice en el vector.
            if (temperatura[x] > max_dia) {
                max_dia = temperatura[x];
                max = x;
            }
            if (temperatura[x] < min_dia) {
                min_dia = temperatura[x];
            }
            sum_dia += temperatura[x];
        }
        media = sum_dia / HORAS_X_DIA;
        if (media > 30) {
            dias_sup++;
        }

        printf ( "Temperatura máxima del día %d: %f\n", i + 1, max_dia );
        printf ( "Temperatura mínima del día %d: %f\n", i + 1, min_dia );
        printf ( "Temperatura media del día %d : %f\n", i + 1, media );

        if (max_dia > max_sem) {
            max_sem = max_dia;
            i_max = max;
        }
        if (min_dia < min_sem) {
            min_sem = min_dia;
        }
        sum_sem += sum_dia;
    }

    printf ( "Temperatura máxima de la semana: %f\n", max_sem );
    printf ( "Temperatura mínima de la semana: %f\n", min_sem );
    printf ( "Temperatura media de la semana : %f\n", 
            sum_sem / (DIAS * HORAS_X_DIA) );
    printf ( "Número de días en los que la temperatura media fue superior a 30 "
            "grados: %d\n", dias_sup);
    printf ( "La temperatura mas alta fue el día %d a la hora %d\n",
            (i_max / HORAS_X_DIA) + 1, i_max % HORAS_X_DIA );
    return 0;
}
