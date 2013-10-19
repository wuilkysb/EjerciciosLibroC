#include <stdio.h>
#include <math.h>
#define MAX_PERSONAS 20

int main(void){
 int edad[MAX_PERSONAS], personas, i, j, aux, suma_edad;
 float suma_desviacion, media, desviacion, mediana;
 int moda, frecuencia, frecuencia_moda;

 /* Lectura de edades */
 personas = 0;
 do {
    printf ("Introduce edad de la persona %d (si es negativa, acabar): ", personas+1);
    scanf ("%d", &edad[personas]);
    personas++;
 } while (personas < MAX_PERSONAS && edad[personas-1] >= 0);
 personas--;

 if (personas > 0) {
    /* Calculo de la media */
    suma_edad = 0;
    for (i=0; i<personas ; i++)
        suma_edad += edad[i];
    media = suma_edad / (float) personas ;

    /* Calculo de la desviacion tipica */
    suma_desviacion = 0.0;
    for (i=0; i<personas ; i++)
        suma_desviacion += (edad[i] - media) * (edad[i] - media);
    desviacion = sqrt( suma_desviacion / personas );

    /* Calculo de la moda */
    for (i=0; i<personas -1; i++) // Ordenacion mediante burbuja.
        for (j=0; j<personas -i; j++)
            if (edad[j] > edad[j+1]) {
                aux = edad[j];
                edad[j] = edad[j+1];
                edad[j+1] = aux;
            }

    frecuencia = 0;
    frecuencia_moda = 0;
    moda = -1;
    for (i=0; i<personas -1; i++)
        if (edad[i] == edad[i+1])
            if (++frecuencia > frecuencia_moda) {
                frecuencia_moda = frecuencia;
                moda = edad[i];
            }else
                frecuencia = 0;

    /* Calculo de la mediana */
    if(personas%2 == 0){
        mediana = (edad[personas /2] + edad[personas /2+1]) / 2 ;
    }else
        mediana = edad[personas /2];

    /* Impresion de resultados */
    printf ("Edad media  : %f\n", media);
    printf ("Desv. tipica: %f\n", desviacion);
    printf ("Moda        : %d\n", moda);
    printf ("Mediana     : %.3f\n", mediana);
 }else
    printf ("No se introdujo dato alguno.\n");

 return 0;
}
