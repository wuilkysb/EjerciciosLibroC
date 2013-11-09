/*
 * =============================================================================
 *
 *       Filename:  ej126.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/13 12:00:37
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

int main(void) {
    float temperaturas[DIAS][HORAS_X_DIA];
    float maxsem, minsem, maxdia, mindia, mediasem, mediadia, sumdia, sumsem;
    int i, j, diassup30;
    sumsem = 0;

    for (i = 0; i < DIAS; i++) {
        for (j = 0; j < HORAS_X_DIA; j++) {
            printf ( "Temperatura del día %d hora %d: ", i + 1, j + 1 );
            scanf ( "%f", &temperaturas[i][j] );
        }
    }
    maxsem = temperaturas[0][0];
    minsem = temperaturas[0][0];

    for (i = 0; i < DIAS; i++) {
        maxdia = temperaturas[i][0];
        mindia = temperaturas[i][0];
        sumdia = 0;
        for (j = 0; j < HORAS_X_DIA; j++) {
            if (maxdia < temperaturas[i][j]) maxdia = temperaturas[i][j];
            if (mindia > temperaturas[i][j]) mindia = temperaturas[i][j];
            sumdia += temperaturas[i][j];
        }

        mediadia = sumdia / HORAS_X_DIA;
        if (mediadia > 30) diassup30++;

        printf ( "Temperaturas del dia %d:\n\tmáxima = %f\n\tmínima = %f\n\t"
                "media = %f\n", i + 1, maxdia, mindia, mediadia);

        if (maxsem < maxdia) maxsem = maxdia;
        if (minsem > mindia) minsem = mindia;
        sumsem += mediadia;
    }

    mediasem = sumsem / DIAS;
    printf ( "Temperaturas de la semana:\n\tmáxima = %f\n\tmínima = %f\n\tmedia"
            " = %f\n\tdias que la temperatura media supero los 30 grados: %d\n",
            maxsem, minsem, mediasem, diassup30);
    return 0;
}
