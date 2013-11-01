#include <stdio.h>
#include <string.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1], aux[MAXLON+1];
    int i, l, pal;

     printf("Introduce una cadena:  "); gets(s);
     l = strlen(s);

    pal = 0;
    for(i=0 ; i < l-- ; i++)
        if(s[i] != s[l]){
            pal =1;
            break;
        }

    if(0 == pal) printf("Es palindromo");
    else printf("no es palindromo");

return 0;
}
