#include <stdio.h>

int main(void)
{
	int n = 1, i;

	while(n < 6) {
		i = 1;
		while(i < 6) {
			printf("%d \t", n*i);
			i ++;
		}
		printf("\n");
		n ++;
		
	}

	return 0;
}
