#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter your result: ");
	scanf("%d", &a);

	if (a >= 80)
	{
		printf("Excellent!! you have an A\n");
	}
		else 
			if (a >= 60)
			{		printf("Very Good! you have a B\n");
			}	
			else if (a >= 40)
			{	
				printf("Good! you have a C\n");
			}
			else
			{	
			printf("Do better next time, you have an F\n");
			}
		return 0;
}
