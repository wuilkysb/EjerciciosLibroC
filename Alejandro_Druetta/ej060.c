#include <stdio.h>

int main(void)
{
    int limite, num, divisor, creo_que_es_primo;

    printf("Dame un número: ");
    scanf("%d", &limite);

    for (num = 1; num <= limite; num++) {
        creo_que_es_primo = 1;
        for (divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) {
                creo_que_es_primo = 0;
                break;
            }
        }
        if (creo_que_es_primo == 1)
            printf("%d\n", num);
    }

    return 0;
}
