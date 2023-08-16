#include <stdio.h>
int main()
{
	double i, j = 0, k;
		
	while (1)
	{
		printf("Enter a number: ");
                scanf("%lf", &i);
		if (i <= 0)
		{
			break;
		}
		if (i > j)
		{
			j = i;
		}
		if (i < k)
		{
			k = i;
		}
	}
	printf("The largest number is %.2lf and the smallest number is %.2lf\n", j, k);

	return 0;
}
