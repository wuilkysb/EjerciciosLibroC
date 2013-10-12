#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c;
    float resul1, resul2, x;

    printf("Dame valor para a: "); scanf("%f",&a);
    printf("Dame valor para b: "); scanf("%f",&b);
    printf("Dame valor para c: "); scanf("%f",&c);
    if( a != 0 ){

        x = pow(b, 2) - 4 * a * c ;
        resul1 = (-b + sqrt(x)) / (2*a);
        resul2 = (-b - sqrt(x)) / (2*a);

        if( x < 0 )
           printf("\nLa ecuacion no tiene solucion");
        else if( x > 0 ){
                if(resul1 == resul2)
                    printf("La escuacion tiene infinitas soluciones x1=%.3f  x2=&.3f");
                else
                    printf("La escuacion tiene dos soluciones reales x1=%.3f Y x2=%.3f", resul1, resul2);
            }
        else if(x == 0 )
            printf("La ecuacion tiene una unica solucion x=%.3f", resul1);

    }else
      printf("\nEl valor de \"a\" tiene que ser diferente de cero");
    return 0;

}
