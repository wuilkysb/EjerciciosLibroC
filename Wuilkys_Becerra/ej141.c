#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define CARACTERES 36
#define TALLA 6
#define MAXLON 80

int main(void){
    char texto[MAXLON+1];
    char letras[CARACTERES];
    char morse[CARACTERES][TALLA]={
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
        "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
        "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."
    };
    int i , j;

    /*inicializar el vector de caracteres*/
    for(i=0 ; i < CARACTERES-10 ; i++){
        letras[i] = i+65; // las letras
    }
    for( j=0 ; i < CARACTERES ; i++, j++){
        letras[i] = j+48; //los numeros
    }

    printf("Dame un cadena a traducir (max %d caracteres)  ", MAXLON); gets(texto);
    for(i=0 ; texto[i] != '\0' ; i++){
        if(texto[i] == ' ') printf("   ");
        else
            for(j=0 ; j < CARACTERES ; j++){
                if(toupper(texto[i]) == letras[j])
                    printf("%s ", morse[j]);
            }
        if(texto[i] == '.'){
                printf("   ... - --- .--.");
            }
    }

    return 0;
}
