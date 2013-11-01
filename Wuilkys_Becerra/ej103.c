#include <stdio.h>
#include <string.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1], copia[MAXLON+1];
    int i;

     printf("Introduce una cadena:  "); gets(s);
     strcpy(copia, s);


    for(i=0 ; copia[i] != '\0' ; i++){
        if('A' <= copia[i] && copia[i] <= 'Z') copia[i] += 32;
    }

    printf("%s ", copia);

return 0;
}
