#include <stdio.h>

int main(void)
{
    float a, b, maximo;

    printf("Dame el primer número: ");
    scanf("%f", &a);
    printf("Dame el segundo número: ");
    scanf("%f", &b);

    if (a >= b) maximo = a;
    else maximo = b;

    printf("El máximo es %f.\n", maximo);

    return 0;
}
