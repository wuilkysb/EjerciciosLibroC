#include <stdio.h>
#include <math.h>

int main(void)
{
    char e, n;
    unsigned long long r;

    printf("Dame el exponente máximo: ");
    scanf("%hhd", &e);

    for (n = 0; n <= e; n++) {
        r = pow(2, n);
        printf("2 ** %-3hhd = %llu\n", n, r);
    }

    return 0;
}
