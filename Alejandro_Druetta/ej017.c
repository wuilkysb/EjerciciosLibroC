#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char i;

    printf("+---------+----------+\n");
    printf("| Decimal | Caracter |\n");
    printf("+---------+----------+\n");

    for (i=32; i<=126; i++)
        printf("| %7hhd | %8c |\n", i, i);

    printf("+---------+----------+\n");

    return 0;
}
