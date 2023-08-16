/*prints the sign of input until the user enters 0*/

#include <stdio.h>

int main()
{
	int i;


	printf("Enter a number: ");
	scanf("%d", &i);

	while (i != 0)		
	{
		scanf("%d", &i);
	
	if (i == 0)
		printf("The number is ZERO\n");
	else if (i < 0)
		printf("The number is NEGATIVE\n");
	else if (i > 0)
		printf("The number is POSITIVE\n");
	}	
	return 0;
}
