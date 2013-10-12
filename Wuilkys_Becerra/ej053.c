#include <stdio.h>

int main(void){
    int n, i;

    printf("Ingrasa un valor: "); scanf("%d",&n);

    if(n > 0){
    for(i=1; i <= n ; i++ )
        printf("%d\n", 2*i);
    }else if(n == 0) printf("\n1");
    else
        printf("n tiene que ser mayor q cero");

    return 0;

}
