#include <stdio.h>

int main(void){
    long long suma=1;
    int num, i;

    printf("Dame un numero: "); scanf("%lld",&num);

    for(i=1 ; i < num ; i++ ){
        suma *= i;
    }
    printf("\n%lld",suma);

    return 0;
}
