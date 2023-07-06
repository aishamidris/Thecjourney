#include <stdio.h>

//this code tries different looping codes

int main()
{
	int g, h,number;
	
	printf("Enter a number: ");
	scanf("%d", &number);

	for (g=1;g<=12;g++)
	{
		h=number*g;

		printf("%d\n", h);
	}

	return 0;
}

