#include <stdio.h>
#include <string.h>
#define MAXLON 1000

int main(void){
    char s[MAXLON+1];
    int i, j, k, cont;

    printf("Introduce una cadena (max %d caracteres)  ", MAXLON); gets(s);

    printf("Frecuencia de aparicion de la letras del alfabeto: \n");
    cont = 0;
    for(i=65, j=97; i < 91 ; i++, j++){
        for(k=0 ; s[k] != '\0' ; k++){
            if(s[k] == i || s[k] == j)
                cont++;
        }

        printf("%c : %d\n", i, cont);
        cont = 0;
    }

    return 0;
}
