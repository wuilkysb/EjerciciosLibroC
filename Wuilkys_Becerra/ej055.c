#include <stdio.h>
#include <math.h>

int main(void){
    enum{vector1=1, vector2, suma, diferencia, productovec, productoesc, angulo, longitud};

    int op=0, op2;
    float x1=0, x2=0, y1=0, y2=0, z1=0, z2=0, x=0, y=0, z=0, Ang;

    while(op != 9){
        printf("\n1) Introducir el primer vector\n");
        printf("2) Introducir el segundo vector\n");
        printf("3) Calcular la suma\n");
        printf("4) Calcular la diferencia\n");
        printf("5) Calcular el producto vectorial\n");
        printf("6) Calcular el producto escalar\n");
        printf("7) Calcular el angulo (en grados) entre ellos\n");
        printf("8) Calcular la longitud\n");
        printf("9) Finalizar\n\n");
        scanf("%d", &op);

        switch(op){
            case vector1:
                printf("coordenadas primer vector separadas por un espacio: \n");
                printf("x1 y1 z1: ");
                scanf("%f %f %f", &x1,&y1,&z1);
                break;

            case vector2:
                printf("coordenadas segundo vector separadas por un espacio: \n");
                printf("x2 y2 z2: ");
                scanf("%f %f %f", &x2,&y2,&z2);
                break;

            case suma:
                x = x1 + x2;
                y = y1 + y2;
                z = z1 + z2;
                printf("Suma: %.3f, %.3f, %.3f", x, y, z);
                break;

            case diferencia:
                printf("1)Primer vector menos segundo vector\n");
                printf("2)segundo vector menos primer vector\n");
                scanf("%d",&op2);
                switch(op2){
                    case 1:
                        x = x1 - x2;
                        y = y1 - y2;
                        z = z1 - z2;
                        printf("Diferencia: x=%.3f, y=%.3f, z=%.3f\n\n", x, y, z);
                        break;
                    case 2:
                        x = x2 - x1;
                        y = y2 - y1;
                        z = z2 - z1;
                        printf("Diferencia: x=%.3f, y=%.3f, z=%.3f\n\n", x, y, z);
                        break;
                }
                break;


            case productovec:
                printf("1)Primer vector menos segundo vector\n");
                printf("2)segundo vector menos primer vector\n");
                scanf("%d",&op2);
                switch(op2){
                    case 1:
                        x = y1*z2 - z1*y2;
                        y = z1*x2 - x1*z2;
                        z = x1*y2 - y1*x2;
                        printf("Producto vectorial: x=%.3f, y=%.3f, z=%.3f\n\n", x, y, z);
                        break;

                    case 2:
                        x = z1*y2 - y1*z2;
                        y = z2*x1 - z1-x2;
                        z = x2*y1 - x1-y2;
                        printf("Producto es vectorial: x=%.3f, y=%.3f, z=%.3f\n\n", x, y, z);
                        break;

                }
                break;

            case productoesc:
                x = x1 * x2;
                y = y1 *y2;
                z = z1 * z2;
                printf("Producto vectorial: %.3f\n\n", x + y + z);
                break;


            case angulo:
                Ang = 180/M_PI * ((x1*x2 + y1*y2 + z1*z2) / (sqrt(pow(x1,2)+pow(y1,2)+pow(z1,2)) * sqrt(pow(x2,2)+pow(y2,2)+pow(z2,2))));
                printf("Angulo en grados: %.3f\n\n", Ang);
                break;

            case longitud:
                printf("1)Longitud primer vector\n");
                printf("2)Longitud sehundo vector\n");
                scanf("%d", &op2);
                switch(op2){
                    case 1:
                        printf("Longitud primer vector: %.3f\n\n", sqrt(pow(x1,2) + pow(y1,2) + pow(z1,2)));
                        break;

                    case 2:
                        printf("Longitud segundo vector: %.3f\n\n", sqrt(pow(x2,2) + pow(y2,2) + pow(z2,2)));

                }
                break;

            default: printf("opcion no valida\n\n"); break;

        }

    }

return 0;
}
