#include <stdio.h>
// a code that swaps the value of two variables

int main(void)
{
	int a;
	int b;
	int y;

	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	y = a;
	a = b;
	b = y;
	printf("a = %d, b = %d\n", a , b);
	return 0;
}
