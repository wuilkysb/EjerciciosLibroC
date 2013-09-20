#include <stdio.h>

int main(void)
{
    int n, i;
    n = 1;

    while (n < 6){
        i = 1;
        while (i < 6){
            printf("%d\t", n*i);
            i = i + 1;
        }
        printf("\n");
        n = n + 1;
    }

    return 0;
}
