#include <stdio.h>
#include <string.h>
#define MAXTEXTO 1000
#define MAXPAL 500
#define MAXFRASE 20

int main(void){
    char texto[MAXTEXTO+1], vc[MAXPAL][MAXFRASE+1];
    char aux[MAXFRASE+1];
    int i, j, k, longitud;

    for(i=0 ; i < MAXPAL ; i++){
        for(j=0 ; j < MAXFRASE ; j++){
            vc[i][j] = 0;
        }
    }

    printf("Ingresa un texto menor de %d caracteres:  ", MAXTEXTO); gets(texto);
    longitud = strlen(texto);

    i=0;
    j=0;
    for(k=0 ; k < longitud ; k++){
        while(texto[k] != ' '){
            vc[i][j] = texto[k];
            k++;
            j++;
        }
        vc[i][j] = '\0';
        i++;
        j=0;
    }

    for(j=0 ; j < i ; j++ ){
        for(k=0 ; k < i ; k++){
            if(strcmp(vc[j], vc[k]) < 0){
                strcpy(aux, vc[k]);
                strcpy(vc[k], vc[j]);
                strcpy(vc[j], aux);
            }
        }
    }
    vc[j][0] = '\0';

    for(i=0 , j=0 ; vc[i][j] != '\0' ; i++){
        printf("%s\n", vc[i]);
    }

    return 0;
}
