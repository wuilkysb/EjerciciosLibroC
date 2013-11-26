#include <stdio.h>
#include <ctype.h>

char mayusc(char c){
    char l;
    l = c;
    return toupper(l);
}

int main(void){
    char c;
    printf("Dame una letra : "); scanf("%c",&c);
    printf("Su mayuscula es : %c", mayusc(c));

    return 0;
}
