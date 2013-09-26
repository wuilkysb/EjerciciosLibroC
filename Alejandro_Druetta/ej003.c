#include <stdio.h>

int main(void)
{
    int n, m;

    printf("Dame un número: ");
    scanf("%d", &n);
    printf("Dame otro número: ");
    scanf("%d", &m);

    if (n * m == 100){
        printf("El producto de %d * %d es igual a 100\n", n, m);
    } else {
        printf("El producto de %d * %d es distinto de 100\n", n, m);
    }

    return 0;
}
