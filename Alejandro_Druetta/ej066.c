#include <stdio.h>

int main(void)
{
    int num, mayor=0;

    do {
        printf("Dame un número entero (negativo para detener): ");
        scanf("%d", &num);
        if (num > mayor) mayor = num;
    } while (num >= 0);

    printf("El mayor ha sido %d.\n", mayor);

    return 0;
}
