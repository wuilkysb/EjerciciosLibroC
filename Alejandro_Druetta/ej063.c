#include <stdio.h>

int main(void)
{
    int a, b, menor, mcd, i;

    printf("Dame un número entero: ");
    scanf("%d", &a);
    printf("Dame otro número entero: ");
    scanf("%d", &b);

    if (a <= b) menor = a;
    else menor = b;

    for (i = 1; i <= menor; i++)
        if (a % i == 0 && b % i == 0) mcd = i;

    printf("El mcd de %d y %d es %d.\n", a, b, mcd);

    return 0;
}
