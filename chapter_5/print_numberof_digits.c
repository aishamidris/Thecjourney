#include <stdio.h>

int main(void)
{
	int y;

	printf("Enter a number: ");
	scanf("%d", &y);

	if (y < 10)
	{
		printf("The number %d has 1 digits\n", y);
	}
		else if ((y > 10) && (y < 99))
		{
			printf("The number %d has 2 digits\n", y);
		}
		else if ((y > 99) && (y < 999))
		{
			printf("The number %d has 3 digits\n", y);
		}
	else 
	{
		printf("The number %d has 4 digits\n", y);
	}
	return 0;
}
