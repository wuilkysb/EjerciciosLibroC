#include <stdio.h>

int main() {
    int a,b,maximo;
    printf("Dame el primer numero:\n");
    scanf("%d",&a);
    printf("Dame el segundo numero:\n");
    scanf("%d",&b);
    if (a >= b) {
        maximo=a;
        }
    else {
        maximo=b;
    }
printf("El maximo es %d\n", maximo);

return 0;
}
