#include <stdio.h>
#include <math.h>

typedef struct {
	float x, y;
} Punto;

typedef struct {
	float a, b, c;
} Recta;

float distancia(Punto p, Recta r)
{
	return ((r.a*p.x) + (r.b*p.y) + r.c) / sqrt(pow(r.a, 2) + pow(r.b, 2));
}

int main(void)
{
	Punto p;
	Recta r;

	printf("Dame un punto: \n");
	printf("x: "); scanf("%f", &p.x);
	printf("y: "); scanf("%f", &p.y);
	printf("Dame una línea (ax + by + c = 0): \n");
	printf("a: "); scanf("%f", &r.a);
	printf("b: "); scanf("%f", &r.b);
	printf("c: "); scanf("%f", &r.c);
	printf("La distancia entre el punto y la recta es %.2f\n", distancia(p, r));

	return 0;
}