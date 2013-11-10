#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define CARACTERES 36
#define TALLA 6
#define MAXLON 80

int main(void){
    char texto[MAXLON+1], aux[CARACTERES][TALLA+1];
    char letras[CARACTERES];
    char morse[CARACTERES][TALLA]={
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
        "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
        "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."
    };
    int i , j, k, z, bandera;

    for(i=0 ; i < CARACTERES ; i++)
        for(j=0 ; j < TALLA+1 ; j++)
            aux[i][j] = '\0';

    /*inicializar el vector de caracteres*/
    for(i=0 ; i < CARACTERES-10 ; i++){
        letras[i] = i+65; // las letras
    }
    for( j=0 ; i < CARACTERES ; i++, j++){
        letras[i] = j+48; //los numeros
    }

    printf("Dame un cadena a traducir (max %d caracteres) ", MAXLON); gets(texto);
    z=0;
    j=0;
    for(i=0 ; texto[i] != '\0'  ; i++){
        if(texto[i] != ' ') {
            aux[j][z] = texto[i];
            z++;
        }
        else{ j++; z=0; }
    }

    for(i=0 ;  i < CARACTERES ; i++){
        for(z=0 ; z < CARACTERES ; z++){
            bandera = 0;
            for(j=0 ; aux[i][j] != '\0' ; j++){
                if(aux[i][j] == morse[z][j]) bandera++;
            }
            if( (bandera == strlen(morse[z])) && (strlen(aux[i]) == strlen(morse[z])) ){
                printf("%c", letras[z]);
            }
        }

    }


    return 0;
}
