#include <stdio.h>

int main(void)
{
    int ini;

    printf("Dame un entero diferente de 1: ");
    scanf("%d", &ini);
    printf("%d ", ini);

    do {
        if (ini % 2 == 0)
            ini /= 2;
        else
            ini = (ini * 3) + 1;

        printf("%d ", ini);

    } while (ini != 1);

    return 0;
}
