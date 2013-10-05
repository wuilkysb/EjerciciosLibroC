#include <stdio.h>

int main(void){
    int a, b;
    printf("Dame un numero: ");
    scanf("%d",&a);
    printf("Dame otro numero: ");
    scanf("%d",&b);
    
    if( a*b == 100 ) printf(" El producto %d * %d es igual a 100 ", a,b);
    else printf("el producto %d * %d es diferente de 100 ", a,b);
    
    getch();
    return(0); 
}
