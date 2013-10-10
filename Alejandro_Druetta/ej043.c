#include <stdio.h>

int main(void)
{
    int num, div;

    printf("Dame un entero: ");
    scanf("%d", &num);

    div = num / 2;
    if (num % 2 == 0 && div % 2 == 1)
        printf("%d es el doble del entero impar %d. \n", num, div);
    else
        printf("%d no es el doble de un entero impar. \n", num);

    return 0;
}
