#include <stdio.h>
#define MAXTALLA 10

int main(void){
    int m[MAXTALLA][MAXTALLA];
    int filas, columnas;
    int i, j, aux_i, aux_j, bandera;

    filas = 0;
    do{
    printf("filas de la matriz (minimo 2, maximo 10): "); scanf("%d",&filas);
    }while(filas < 3 || filas > 10);

    columnas = 0;
    do{
    printf("columnas de la matriz (minimo 2, maximo 10): "); scanf("%d",&columnas);
    }while(columnas < 3 || columnas > 10);

    for(i=0 ; i < filas ; i++){
        for(j=0 ; j < columnas ; j++){
            printf("Elemento (%d,%d)", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    bandera = 0;
    for(i=0 ; i < filas ; i++){
        for(j=0 ; j < columnas ; j++){

                for(aux_i= i-1 ; aux_i <= i+1 ; aux_i++){
                    for(aux_j= j-1 ; aux_j <= j+1 ; aux_j++){
                        if( !(aux_i < 0 || aux_j < 0 || aux_i >= filas || aux_j >= columnas) )
                            if(m[i][j] < m[aux_i][aux_j]) bandera++;
                    }
                }


            if(bandera){
                printf("Valle en la fila %d columana %d:\n", i+1, j+1);

                for(aux_i= i-1 ; aux_i <= i+1 ; aux_i++){
                    for(aux_j= j-1 ; aux_j <= j+1 ; aux_j++){
                        if( aux_i < 0 || aux_j < 0 || aux_i >= filas || aux_j >= columnas ) printf("x");
                        else printf("%d", m[aux_i][aux_j]);
                    }
                    printf("\n");
                }

                bandera = 0;
            }
        }
    }

    return 0;
}
