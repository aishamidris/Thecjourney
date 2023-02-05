#include <stdio.h>
// a code that swaps the value of two variables

int main(void)
{
	int a;
	int b;
	int y;

	printf("the first number rep a and the second number rep b: ");
	scanf("%d%d", &a, &b);
	y = a;
	a = b;
	b = y;
	printf("a = %d, b = %d\n", a , b);
	return 0;
}
