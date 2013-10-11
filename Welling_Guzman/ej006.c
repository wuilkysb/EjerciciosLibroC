#include <stdio.h>
#include <math.h>

int main(void)
{
  float x = 1.0;

  while ( x < 10.0 ) {
    printf("%.1f \t %.2f\n", x, log(x));
    x += 1.0;
  }

  return 0;
}