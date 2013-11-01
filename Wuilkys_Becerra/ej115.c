#include <stdio.h>
#include <string.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1], s2[MAXLON+1];
    int v;
    printf("Dame una cadena  "); gets(s);
    printf("Dame otra cadena  "); gets(s2);

    v = strcmp(s,s2);
    if(v == 0 || v < 0) printf("menor o igual");

    return 0;
}
