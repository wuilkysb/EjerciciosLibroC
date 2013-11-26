#include <stdio.h>

void asterisco(int n){
    int i;
    for(i=0 ; i < n ; i++)
        printf("*\n");
}

int main(void){
    int n;
    printf("Dame un numero : "); scanf("%d",&n);
    asterisco(n);

    return 0;
}
