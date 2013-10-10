#include <stdio.h>
#include <math.h>

int main(void)
{
    int bin, resto, dec=0, exp=0, flag=0;

    printf("Dame un número binario: " );
    scanf("%d", &bin);

    do {
        resto = bin % 10;
        if (resto == 0 || resto == 1) {
            dec += resto * pow(2, exp);
            exp++;
            bin /= 10;
        }
        else {
            printf("El número no es binario. \n");
            flag = 1;
            break;
        }
    } while (bin > 0);

    if (0 == flag)
        printf("%d\n", dec);

    return 0;
}
