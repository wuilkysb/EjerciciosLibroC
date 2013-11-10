#include <stdio.h>

int main() {
    int num,num1;
    printf("Ingrese numero: "); scanf("%d",&num);
    num1 = num / 2;
    if(num % 2 == 0 && num1 % 2 == 1) {
        printf("%d es el doble de %d que es impar\n",num,num1);
    }
    else {
        printf("%d no es el doble de un numero impar",num);
    }
return 0;
}
