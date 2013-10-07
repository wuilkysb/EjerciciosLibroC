#include <stdio.h>
#include <math.h>

int main(void){
	int x = 1;
	
	while (x < 10){
		printf("%d \t %f \n", x, log(x));
		x++;
	}
	
	getch();
	return 0;
}
