#include <stdio.h>

int main(void)
{
    int num, i, j, es_primo;

    printf("Dame un número entero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        es_primo = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                es_primo = 0;
                break;
            }
        }
        if (es_primo == 1)
            printf("%d\n", i);
    }

    return 0;
}
