#include <stdio.h>
#include <string.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1],aux;
    int i, l;

     printf("Introduce una cadena:  "); gets(s);
     l = strlen(s);


    for(i=0 ; i < l-- ; i++){
        aux = s[i];
        s[i] = s[l];
        s[l] = aux;
    }

    printf("%s ", s);

    return 0;
}
