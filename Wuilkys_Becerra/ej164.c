#include <stdio.h>

int numero(void){
    int num;
    printf("Dame un numero : "); scanf("%d",&num);
    while(num < 0){
        printf("debe ser un numero positivo ");
        scanf("%d",&num);
    }
    return num;
}

int main(void){
    printf("numero : %d ",numero());
    return 0;
}
