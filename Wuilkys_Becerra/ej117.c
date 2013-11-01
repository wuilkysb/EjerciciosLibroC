#include <stdio.h>
#include <string.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1], s2[MAXLON+1];
    int v, i, cont, cont2;
    printf("Dame una cadena  "); gets(s);
    printf("Dame otra cadena  "); gets(s2);

    v = (strlen(s) > strlen(s2)) ? strlen(s2) : strlen(s) ;

    cont = 0;
    cont2 = 0;
    for(i=0 ; s[i] != '\0' || s2[i] != '\0' ; i++){
        if(s[i] == s2[i]) cont++;
        if(s[i] < s2[i]) cont2++;
    }

    if(cont == v) printf("0");
    if(cont2 > 0) printf("-1");

    return 0;
}
