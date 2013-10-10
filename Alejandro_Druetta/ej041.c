#include <stdio.h>

int main(void)
{
    char c;

    printf("Dame un caracter del alfabeto inglés: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
        printf("%c es una MINÚSCULA. \n", c);
    else if (c >= 'A' && c <= 'Z')
        printf("%c es una MAYÚSCULA. \n", c);
    else
        printf("No es un caracter del alfabeto inglés. \n");

    return 0;
}
