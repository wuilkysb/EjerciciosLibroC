#include <stdio.h>
#include <math.h>
#define MAX_PERSONAS 20

int main(void){
 int edad[MAX_PERSONAS], personas, i, j, aux, suma_edad;
 float suma_desviacion, media, desviacion, mediana;
 int moda, frecuencia, frecuencia_moda, rango_edades, contador, contador2;
 int auxiliar[150], x, y;

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
        for (j=0; j<personas -i-1; j++)
            if (edad[j] > edad[j+1]) {
                aux = edad[j];
                edad[j] = edad[j+1];
                edad[j+1] = aux;
            }

    frecuencia = 0;
    frecuencia_moda = 0;
    moda = 0;
    for (i=0; i < personas-1; i++){
        if (edad[i] == edad[i+1]){
            if (++frecuencia > frecuencia_moda){
                frecuencia_moda = frecuencia;
                moda = edad[i];
            }
        }else frecuencia = 0;
    }

    /* Calculo de la mediana */
    if(personas%2 == 0){
        mediana = (edad[personas /2] + edad[personas /2+1]) / 2 ;
    }else
        mediana = edad[personas /2];

    /* calculo para imprimir entre el primero y el ultimo con valores */
    for(i=0 ; i < 150 ; i++) auxiliar[i] = 0;

    rango_edades = 0;
    contador2 = 9;
    j = 0;
    contador = 0;
    while(contador2 < 150){
        for(i=0; i <= personas ; i++){
            if(rango_edades < edad[i] && edad[i]<= contador2 ){
                    contador++;
                    auxiliar[j] = contador;
                    auxiliar[j+1] = contador2-9;
                    auxiliar[j+2] = contador2;
            }
        }
        contador = 0;

        rango_edades = contador2;
        contador2 += 10;
        j += 4;
        auxiliar[j] = contador;
        auxiliar[j+1] = contador2-9;
        auxiliar[j+2] = contador2;
    }

    for(i=0 ; i < j ; i+=4)
        if(auxiliar[i] !=0){
            x = i;
            break;
        }
    for(i=j ; i > 0 ; i-=4)
        if(auxiliar[i] !=0){
            y = i;
            break;
        }

    /* Impresion de resultados */
    for(i=x; i <= y ; i+=4){
        printf("%d-%d ",auxiliar[i+1], auxiliar[i+2]);
        for(aux=0; aux < auxiliar[i] ; aux++)
                printf("*");
        printf("\n");
    }


    printf ("Edad media  : %f \n", media);
    printf ("Desv. tipica: %f\n", desviacion);
    printf("Moda        : %d\n", moda);
    printf ("Mediana     : %.3f\n", mediana);

 }else
    printf ("No se introdujo dato alguno.\n");

 return 0;
}
