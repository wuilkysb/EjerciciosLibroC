#include <stdio.h>
#include <math.h>

int main(void)
{
	float x = 1.0;

	while(x < 10.0) {
		printf("%f \t %f", x, log(x));
		x = x + 1.0;
	}

	return 0;
}