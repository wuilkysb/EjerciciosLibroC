#include <stdio.h>

int factorial(int n){
    int i, f;
    f = 1;
    for(i=1 ; i <= n ; i++)
        f *= i;
    return f;
}

int main(void){
    int num;
    printf("Dame un numero : "); scanf("%d",&num);
    printf("El factorial es : %d", factorial(num));

    return 0;
}
