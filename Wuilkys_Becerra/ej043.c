#include <stdio.h>

int main(void){
    int num, media;

    printf("Dame un numero: "); scanf("%d",&num);

    media = num / 2;

    if( media/2 != 0 && media*2 == num )
        printf("\n%d es el doble de %d", media, num);

    return 0;
}
