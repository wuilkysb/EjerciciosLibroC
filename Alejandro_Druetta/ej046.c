#include <stdio.h>

int main(void)
{
    int x, n, i, p;

    printf("Dame la base: ");
    scanf("%d", &x);
    printf("Dame el exponente (>= 2): ");
    scanf("%d", &n);

    p = x;

    for (i = 1; i < n; i++) {
        p *= x;
    }

    printf("%d ** %d = %d \n", x, n, p);

    return 0;
}
