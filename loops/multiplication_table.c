#include <stdio.h>

int main(void)
{
	int n, k, s;

	printf("Input the number(Table to be calculated): ");
	scanf("%d", &n);

	for (k = 1; k <= 10; k++)
	{ s = n * k;
		printf("%d x %d = %d,", n, k, s);
	}
	return 0;
}
