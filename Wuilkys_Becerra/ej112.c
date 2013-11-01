#include <stdio.h>
#include <string.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1];
    int i, cont, car;

    printf("Ingresa una cadena:  "); gets(s);
    s[strlen(s)] = ' ';
    s[strlen(s)+1] = '\0';

    cont = 0;
    car  = 0;
    for(i=0 ; s[i] != '\0' ; i++){
        if(s[i] != ' ') car++;
        if(s[i] == ' ' && car > 0){
                cont++;
                car = 0;
        }
    }

    printf("El numero de palabras es:  %d", cont);

return 0;

}
