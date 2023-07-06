#include <stdio.h>

int main(void)
{
	int i, k;

	printf("This program prints a table of squares.\n");
	printf("enter number of entries in table: ");
	scanf("%d", &k);

	i = 1;
	while (i <= k)
	{
		printf("%10d%10d\n", i, i * i);
		i++;
	}
	return 0;
}
	
