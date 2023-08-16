#include <stdio.h>
/* this program prints the number of digits entered by a user*/

int main()
{
	int a;

	printf("Enter a number: ");
	scanf("%d", &a);

	if (a < 10)
		printf("you entered 1 digit");
	else if ((a < 100) && (a > 10))
		printf("you entered 2 digit");
	else if ((a > 100) && (a < 1000))
		printf("you entered 3 digits");
	else if ((a > 1000) && (a < 10000))
			printf("you entered 4 digits\n");
	else
		printf("Range exceded\n");

			return 0;
			}
