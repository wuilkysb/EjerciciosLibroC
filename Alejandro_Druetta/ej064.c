#include <stdio.h>

int main(void)
{
    int a, b, c, menor, i, mcd;

    printf("Dame un número entero: ");
    scanf("%d", &a);
    printf("Dame otro número entero: ");
    scanf("%d", &b);
    printf("Y otro más: ");
    scanf("%d", &c);

    if (a <= b && a <= c) menor = a;
    else if (b <= a && b <= c) menor = b;
    else menor = c;

    for (i = 1; i <= menor; i++)
        if (a % i == 0 && b % i == 0 && c % i == 0)
            mcd = i;

    printf("El mcd de %d, %d y %d es %d.\n", a, b, c, mcd);

    return 0;
}
