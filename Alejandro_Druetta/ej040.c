#include <stdio.h>

int main(void)
{
    int valor, div;

    printf("Dame un valor en euros: ");
    scanf("%d", &valor);

    div = valor / 500;
    if (div > 0) {
        printf("%d billetes de 500 euros. \n", div);
        valor %= 500;
    }

    div = valor / 200;
    if (div > 0) {
        printf("%d billetes de 200 euros. \n", div);
        valor %= 200;
    }

    div = valor / 100;
    if (div > 0) {
        printf("%d billetes de 100 euros. \n", div);
        valor %= 100;
    }

    div = valor / 50;
    if (div > 0) {
        printf("%d billetes de 50 euros. \n", div);
        valor %= 50;
    }

    div = valor / 20;
    if (div > 0) {
        printf("%d billetes de 20 euros. \n", div);
        valor %= 20;
    }

    div = valor / 10;
    if (div > 0) {
        printf("%d billetes de 10 euros. \n", div);
        valor %= 10;
    }

    div = valor / 5;
    if (div > 0) {
        printf("%d billetes de 5 euros. \n", div);
        valor %= 5;
    }

    div = valor / 2;
    if (div > 0) {
        printf("%d monedas de 2 euros. \n", div);
        valor %= 2;
    }

    if (valor > 0)
        printf("1 moneda de 1 euro. \n");

    return 0;
}
