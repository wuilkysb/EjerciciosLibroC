#include <stdio.h>

void asterisco(int n){
    int i,j;
    for(i=0 ; i < n ; i++){
        for(j=0 ; j <= i ; j++)
            printf("*");
        printf("\n");
    }
}

int main(void){
    int n;
    printf("Dame un numero : "); scanf("%d",&n);
    asterisco(n);

    return 0;
}

