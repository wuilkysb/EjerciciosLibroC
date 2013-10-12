#include <stdio.h>

int main (void){
	char i;
	
	printf("+---------+----------+\n");
	printf("|-Decimal-|-Car\240cter-|\n");
	printf("+---------+----------+\n");
	for(i = 32; i<127; i++)
		printf("|%9d|%10c|\n", i, i);
	printf("+---------+----------+\n");
	
	return 0;
}
