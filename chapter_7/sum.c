#include <stdio.h>

int main()
{
	int n,sum = 0;

	printf("Enter a series of numbers with 0 to terminate: ");
	scanf("%d", &n);

	while (n > 0)
	{
		sum += n;
		scanf("%d",&n);
		
	}
	printf("The sum of the series is %d\n", sum);

	return 0;
}
