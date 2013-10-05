#include <stdio.h>
#include <math.h>

int main(void){
    float x1, y1, x2, y2, dx, dy, distancia;
    
    printf("punto 1, coordenafa x: ");
    scanf("%f",&x1);
    printf("\npunto 1, coordenada y: ");
    scanf("%f",&y1);
    printf("\npunto 2, coordenada x: ");
    scanf("%f",&x2);
    printf("\npunto 2, coordenada y: ");
    scanf("%f",&y2);
    
    dx = x2-x1;
    dy = y2-y1;
    distancia = sqrt(pow(dx,2) + pow(dy,2));
    
    printf("\n\nla distancia entre los puntos es: %f", distancia);
    
    getch();
    return(0);
}
