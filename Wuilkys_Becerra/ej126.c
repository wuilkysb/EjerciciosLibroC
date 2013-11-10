#include <stdio.h>
#define FILA 7
#define COL 24

int main(void){
    float m[FILA][COL];
    float maxi, mini, media, aux;
    int i, j, cont;

    for(i=0 ; i < FILA ; i++){
        for(j=0 ; j < COL ; j++){
            printf("Temperatura dia %d Hora %d:00  ", i+1, j+1);
            scanf("%f", &m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //maximo y minimo de la semana
    maxi = 0;
    mini = 0;
    for(i=0 ; i < FILA ; i++){
        for(j=0 ; j < COL ; j++){
            if(maxi < m[i][j]) maxi = m[i][j];
            if(mini > m[i][j]) mini = m[i][j];
        }
    }

    printf("\nTemperatura maxima de la semana:  %.3f", maxi);
    printf("\nTemperatura minima de la semana:  %.3f", mini);

    printf("\n");
    //maximo y minimo de la por dia
    for(i=0 ; i < FILA ; i++){
        maxi = 0;
        mini = 0;
        for(j=0 ; j < COL ; j++){
            if(maxi < m[i][j]) maxi = m[i][j];
            if(mini > m[i][j]) mini = m[i][j];
        }
        printf("\nTemperatura maxima del dia %d:  %.3f", i+1, maxi);
        printf("\nTemperatura minima del dia %d:  %.3f", i+1, mini);
    }
    printf("\n");
    //media de la semana
    media = 0;
    aux = 0;
    for(i=0 ; i < FILA ; i++){
        for(j=0 ; j < COL ; j++){
            aux += m[i][j];
        }
    }
    media = aux/FILA;
    printf("\nMedia de la semana: %.3f", media);
    printf("\n");
    //media de cada dia
    cont = 0;
    for(i=0 ; i < FILA ; i++){
        media = 0;
        aux = 0;
        for(j=0 ; j < COL ; j++){
            aux += m[i][j];
        }
        media = aux/FILA;
        printf("\nMedia del dia %d: %.3f", i+1, media);
        if(media > 30) cont++;
    }
    printf("\n");
    printf("\nNumero de dias en la que la temperatura fue mayor a 30°: %d", cont);

    return 0;
}
