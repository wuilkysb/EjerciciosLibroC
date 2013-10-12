#include <stdio.h>

int main(void){
    int num1, num2, num3, num4, num5;

    printf("Introduce el primer numero: ");  scanf("%d",&num1);
    printf("Introduce el segundo numero: "); scanf("%d",&num2);
    printf("Introduce el tercer numero: ");  scanf("%d",&num3);
    printf("Introduce el cuarto numero: ");  scanf("%d",&num4);
    printf("Introduce el quinto numero: ");  scanf("%d",&num5);

    if(num1 > num2 && num2 > num3 && num2 > num4 && num2 > num5 ||
       num1 < num2 && num2 < num3 && num2 < num4 && num2 < num5)
        printf("El numero %d es el mas cercano a %d", num2, num1);
    else if(num1 > num3 && num3 > num2 && num3 > num4 && num3 > num5 ||
            num1 < num3 && num3 < num2 && num3 < num4 && num3 < num5)
            printf("El numero %d es el mas cercano al %d", num3, num1);
    else if(num1 > num4 && num4 > num3 && num4 > num2 && num4 > num5 ||
            num1 < num4 && num4 < num3 && num4 < num2 && num4 < num5)
            printf("El numero %d es el mas cercano al %d", num4, num1);
    else if(num1 > num5 && num5 > num3 && num5 > num4 && num5 > num2 ||
            num1 < num5 && num5 < num3 && num5 < num4 && num5 < num2)
            printf("El numero %d es el mas cercano al %d", num5, num1);

    return 0;
}
