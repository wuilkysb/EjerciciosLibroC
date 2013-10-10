#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, d, s;

    printf("Dame un número: ");
    scanf("%f", &a);
    printf("Dame otro número: ");
    scanf("%f", &b);
    printf("Y otro más: ");
    scanf("%f", &c);

    d = pow(b, 2) - (4 * a * c);
    if (a == 0)
        printf("La ecuación no tiene solución. \n");
    else {
        if (d > 0) {
            s = (-b + sqrt(d)) / (2 * a);
            printf("Solución 1 = %f \n", s);
            s = (-b - sqrt(d)) / (2 * a);
            printf("Solución 2 = %f \n", s);
        }
        else if (d == 0) {
            s = -b / (2 * a);
            printf("Solución única = %f \n", s);
        }
        else
            printf("La ecuación no tiene solución real. \n");
    }

    return 0;
}
