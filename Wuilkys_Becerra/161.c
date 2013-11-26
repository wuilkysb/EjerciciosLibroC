#include <stdio.h>

int capicua(int n){
    int num, d, c;
    num = n;
    c = 0;
    do{
        c += num%10;
        c *= 10;
        num /= 10;
    }while(num > 0);
    c /= 10;
    if(c == n) return 1;
    return 0;
}

int main(void){
    int n;
    printf("Dame un numero : "); scanf("%d",&n);

    if(capicua(n)) printf("Es capicua");
    else printf("no es capicua");

    return 0;
}
