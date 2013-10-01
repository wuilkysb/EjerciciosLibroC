#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c, s, peri, area;

	printf("Dame los lados de un triángulo en forma de tupla \"(a, b, c)\": ");
	scanf("(%f, %f, %f)", &a, &b, &c);

	peri = a + b + c;
	s = peri / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));

	printf("El perímetro es %.2f y el área es %.2f\n", peri, area);

	return 0;
}
