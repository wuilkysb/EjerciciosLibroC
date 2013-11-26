#include <stdio.h>

int perfecto(int x){
    int p, i;
    p = 0;
    for(i = 1 ; i < x ; i++ ){
        if(x%i == 0) p += i;
    }
    if(p == x) return 1;

    return 0;
}

int main(void){
    int n;
    printf("Dame un numero : "); scanf("%d",&n);

    if(perfecto(n)) printf("El numero es perfecto");
    else printf("El numero no es perfecto");

    return 0;
}
