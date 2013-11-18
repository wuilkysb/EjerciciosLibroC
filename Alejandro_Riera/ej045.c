#include <stdio.h>

int main() {
    int num;
    printf("Dame un numero distinto de 1\n");

    scanf("%d",&num);
    printf("%d ",num);
    do {
        if (num%2 == 0)
            num = num / 2;
        else 
        num= (num*3) + 1;
        
    printf("%d ",num);
    } while (num!=1);

return 0;
}
