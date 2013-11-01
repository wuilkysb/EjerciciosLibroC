#include <stdio.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1], copia[MAXLON+1];
    int i;

     printf("Introduce una cadena:  "); gets(s);

    for(i=0 ; s[i] != '\0' ; i++){

        if('A' <= s[i] && s[i] <= 'Z') copia[i] = s[i] + 32;
        else copia[i] = s[i];
    }
    copia[i] = '\0';

    printf("%s ", copia);

return 0;
}
