#include <stdio.h>

int main(void){
    int x, n, i;

    printf("Ingresa un valor entero para la base: ");
    scanf("%d", &x);
    printf("Ingresa un valor entero para el exponente: ");
    scanf("%d", &n);

    for(i=1; i<n; i++) x *= x;
    printf("\nresutado %d", x);

    return 0;
}
