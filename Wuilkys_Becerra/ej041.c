#include <stdio.h>

int main(void){
    char c;
    printf("Ingresa una letra: "); scanf("%c",&c);

    if( c > 64 && c < 91 )
        printf("\nEs una MAYUSCULA");
    else if( c > 96 && c < 123 )
        printf("\nEs una MINUSCULA");

    return 0;
}
