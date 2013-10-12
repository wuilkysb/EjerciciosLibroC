#include <stdio.h>

int main(void){
    char car;

    printf("Dame un caracter: "); scanf("%c", &car);

    if( "a" <= car <= "z" || car == "_")
        printf("Este caracter es valido en un identificador en C");
    else{
        if( !(car < "0" || "9" < car ) ){
            printf("Un digitito es valido en C");
            printf("Siempre que no sea el primer caracter");
        }else printf("Caracter no valido para formar un identificador en C");
    }

return 0;
}
