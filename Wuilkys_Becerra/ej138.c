#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define NOMBRE 4
#define NUMEROS 9
#define MAXLON 20
#define CARTAS 49

int main(void){
    char nom[NOMBRE][MAXLON+1]={
        { "oros" },
        { "copas" },
        { "espadas" },
        { "bastos" }
    };
    char mazo[CARTAS][MAXLON+1];
    char aux[MAXLON+1];
    int i, j, k, random1, random2;

    /*insertar al mazo numero_de_palo*/
    k = 0; // variable que va incrementando para cada carte que entra en el mazo
    for(i=0 ; i < NOMBRE ; i++){
        for(j=2 ; j <= NUMEROS ; j++){
            sprintf(mazo[k], "%d de %s" , j, nom[i]);
            k++;
        }
    }

    /*insertar al mazo sota_de_palo*/
    for(i=0 ; i < NOMBRE ; i++){
        sprintf(mazo[k], "sota de %s", nom[i]);
        k++;
    }

    /*insertar al mazo as_de_palo*/
    for(i=0 ; i < NOMBRE ; i++){
        sprintf(mazo[k], "as de %s", nom[i]);
        k++;
    }

     /*insertar al mazo caballo_de_palo*/
    for(i=0 ; i < NOMBRE ; i++){
        sprintf(mazo[k], "caballo de %s", nom[i]);
        k++;
    }

     /*insertar al mazo rey_de_palo*/
    for(i=0 ; i < NOMBRE ; i++){
        sprintf(mazo[k], "rey de %s", nom[i]);
        k++;
    }

    mazo[k][0] = '\0';

    /*barajar cartas*/
    srand(time(NULL));
    for(i=0 ; i < CARTAS ; i++){
        random1 = rand()%48;
        random2 = rand()%48;
        if(random1 != random2){
            strcpy(aux , mazo[random1]);
            strcpy(mazo[random1] , mazo[random2]);
            strcpy(mazo[random2] , aux);
        }
    }

    for(i=0 ; mazo[i][0] != '\0' ; i++) printf("%s\n", mazo[i]);

    return 0;
}
