#include <stdio.h>

int main(void)
{
	float x;

	printf("Enter a 24 hour time; ");
	scanf("%f", &x);

	float w = x - 12;

	printf("equivalent 12 hour time is %f\n", w);
	return 0;
}
