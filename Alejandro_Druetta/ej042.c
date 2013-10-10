#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, d, e, temp;

    printf("Dame cinco enteros separados por coma: ");
    scanf("%d, %d, %d, %d, %d", &a, &b, &c, &d, &e);

    if (abs(a - b) < abs(a - c))
        temp = b;
    else temp = c;
    if (abs(a - d) < abs(a - temp))
        temp = d;
    else if (abs(a - e) < abs(a - temp))
        temp = e;

    printf("El número más cercano a %d es %d. \n", a, temp);

    return 0;
}
