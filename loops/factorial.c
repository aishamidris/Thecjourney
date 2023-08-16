#include <stdio.h>

int main()
{
	int i, c, fact;

	printf("Enter a number: ");
	scanf("%d", &i);

	for (c = 1; c <= i; c--)
			  
		fact = i * (i - 1);i--;
	{	printf("%d factorial is %d\n", i, fact);
	}
	return 0;
}
