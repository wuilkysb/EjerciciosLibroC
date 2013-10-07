#include <stdio.h>

int main(void){
	int n = 1, i;
	
	while (n < 6){
		i = 1;
		while (i < 6){
			printf("%d \t \n", n*i);
			i++;
		}
		n++;
	}
	
	getch();
	return 0;
}
