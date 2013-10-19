#include <stdio.h>

int main(void)
{
	unsigned int nump, lim, i;
	unsigned long long sum;

	printf("Dame un número: "); scanf("%d", &lim);

	for (nump = 1; nump <= lim; nump++) {
		sum = 0;
		for (i = 1; i < nump; i++) {
			if (nump % i == 0)
				sum += i;
		}
		if (sum == nump)
			printf("%d\n", nump);
	}

	return 0;
}
