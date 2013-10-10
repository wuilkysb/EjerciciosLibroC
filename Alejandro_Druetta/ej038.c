#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Dame un número: ");
    scanf("%f", &a);
    printf("Dame otro número: ");
    scanf("%f", &b);

    if (a == 0 && b == 0)
        printf("La ecuación tiene infinitas soluciones. \n");
    else if (a == 0)
        printf("La ecuación no tiene solución. \n");
    else
        printf("x = -b / a = %f \n", -b / a);

    return 0;
}
