#include <stdio.h>

int main(void)
{
	int i, n, cube = 0;

	printf("Input number of terms: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		cube = i * i * i;
		printf("Number is :%d  and cube of %d is %d\n", i, i, cube);
	}
		return 0;
}
