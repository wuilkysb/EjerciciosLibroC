#include <stdio.h>

int main(void){
    int limite, num, primo, divisor;

    printf("Dame un numero: "); scanf("%d", &limite);

    for(num=1 ; num <= limite ; num++){
        primo = 1;
        for(divisor=2 ; divisor < num ; divisor++){
            if(num % divisor == 0){
                primo = 0;
                break;
            }
        }
    if(primo == 1) printf("%d\n",num);
    }
 return 0;
}
