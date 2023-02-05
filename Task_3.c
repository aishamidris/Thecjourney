#include <stdio.h>
int main(void)
{
	int number_1 = 0;
	int number_2 = 0;

	printf("enter first number\n");
	scanf("%d", &number_1);
	printf("enter second number\n");
	scanf("%d", &number_2);

	int result = number_1 + number_2;

	printf("%d", result);
	return 0;
}
