#include <stdio.h>

int main(void)
{
    char car;

    printf("Dame un caracter: ");
    scanf("%c", &car);

    if ((car >= 'A' && car <= 'z') || car == '_')
        printf("Este caracter es válido en un indentificador en C.\n");
    else if (car >= '0' && car <= '9') {
            printf("Un dígito es válido en un identificador en C, ");
            printf("siempre que no sea el primer caracter.\n");
        }
        else
            printf("Caracter no válido para formar un identificador en C.\n");

    return 0;
}
