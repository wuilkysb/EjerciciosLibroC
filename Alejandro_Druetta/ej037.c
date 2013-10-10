#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;

    printf("Dame un número: ");
    scanf("%d", &a);
    printf("Dame otro número: ");
    scanf("%d", &b);

    if (b == pow(a, 2))
        printf("El segundo es el cuadrado exacto del primero. \n");
    else if (b < pow(a, 2))
        printf("El segundo es menor que el cuadrado del primero. \n");
    else
        printf("El segundo es mayor que el cuadrado del primero. \n");

    return 0;
}
