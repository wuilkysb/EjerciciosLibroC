#include <stdio.h>
#include <math.h>

int main(void){
    float y, y1, x=0.0;
    int i=0;

    while( i < 24){
        y = 2 * M_PI;
        while( y > sin(x) ){
            printf(" ");
            y-=0.1;
        }
        printf("*");
        y1 = 2 * M_PI;
        while( y1 > cos(x) ){
            printf(" ");
            y1-=0.1;
        }
        printf("+\n");
        i++;
        x+=0.5;

    }
    return 0;
}
