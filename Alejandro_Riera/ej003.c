#include <stdio.h>

int main() {
    int n,m;
    printf("Dame un numero\n");
    scanf("%d",&n);
    printf("Dame otro numero\n");
    scanf("%d",&m);

    if (n*m == 100) {
        printf("El producto %d * %d es igual a 100\n",n,m);
    }
    else{
        printf("El producto %d * %d es distinto de 100\n",n,m);
    }

   return 0;
}
