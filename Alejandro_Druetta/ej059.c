#include <stdio.h>

int main(void)
{
    int anyo;

    printf("Dame un año: ");
    scanf("%d", &anyo);

    if (anyo % 4 == 0 && (anyo % 100 != 0 || anyo % 400 == 0))
        printf("El año %d es bisiesto.\n", anyo);
    else
        printf("El año %d no es bisiesto.\n", anyo);

    return 0;
}
