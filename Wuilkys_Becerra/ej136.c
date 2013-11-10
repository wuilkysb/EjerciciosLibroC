#include <stdio.h>
#include <string.h>
#define MAXTEXTO 1000
#define MAXPAL 500
#define MAXFRASE 20

int main(void){
    char texto[MAXTEXTO+1], vc[MAXPAL][MAXFRASE+1];
    int i, j, k, k_ant, longitud;

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
    vc[i][j] = '\0';
    i=0;
    j=0;
    while(vc[i][j] != '\0'){
        printf("%s\n", vc[i]);
        i++;
    }

    return 0;
}
